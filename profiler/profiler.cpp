#include <stdio.h>
#include <map>
#include <string>
#include <asm-generic/unistd.h>

#include "syscall_table.h"

#include "pin.H"

KNOB<bool> ProfileCalls(KNOB_MODE_WRITEONCE, "pintool", "c", "0", "Profile function calls");
KNOB<bool> ProfileSyscalls(KNOB_MODE_WRITEONCE, "pintool", "s", "0", "Profile syscalls");

std::map<ADDRINT, std::map<ADDRINT, unsigned long> > g_cflows;
std::map<ADDRINT, std::map<ADDRINT, unsigned long> > g_calls;
std::map<ADDRINT, unsigned long> g_syscalls;
std::map<ADDRINT, std::string> g_funcnames;

unsigned long g_insn_count    = 0;
unsigned long g_cflow_count   = 0;
unsigned long g_call_count    = 0;
unsigned long g_syscall_count = 0;


/*****************************************************************************
 *                             Analysis functions                            *
 *****************************************************************************/
static void count_bb_insns(UINT32 n) {
	g_insn_count += n;
}


static void count_cflow(ADDRINT ip, ADDRINT target) {
	g_cflows[target][ip]++;
	g_cflow_count++;
}


static void count_call(ADDRINT ip, ADDRINT target) {
	g_calls[target][ip]++;
	g_call_count++;
}


static void log_syscall(THREADID tid, CONTEXT *ctxt, SYSCALL_STANDARD std, VOID *v) {
	g_syscalls[PIN_GetSyscallNumber(ctxt, std)]++;
	g_syscall_count++;
}


/*****************************************************************************
 *                         Instrumentation functions                         *
 *****************************************************************************/
// Instrument basic block
static void instrument_bb(BBL bb) {
	BBL_InsertCall(
			bb, IPOINT_ANYWHERE, (AFUNPTR)count_bb_insns,
			IARG_UINT32, BBL_NumIns(bb),
			IARG_END
			);
}


// Call instrument_bb
static void instrument_trace(TRACE trace, void *v) {
	IMG img = IMG_FindByAddress(TRACE_Address(trace));
	if(!IMG_Valid(img) || !IMG_IsMainExecutable(img)) return;

	// Trace-level instrumentation routine
	for(BBL bb = TRACE_BblHead(trace); BBL_Valid(bb); bb = BBL_Next(bb)) {
		instrument_bb(bb);
	}
}


// Instrumenting control flow instructions
static void instrument_insn(INS ins, void *v) {
	// ins: instrumentation target insturction
	
	/* for Pin v3.20 */
	if(!(INS_IsBranch(ins) || INS_IsCall(ins))) return;
	// if(!INS_IsBranchOrCall(ins)) return;

	IMG img = IMG_FindByAddress(INS_Address(ins));
	if(!IMG_Valid(img) || !IMG_IsMainExecutable(img)) return;

	INS_InsertPredicatedCall(
			ins, IPOINT_TAKEN_BRANCH, (AFUNPTR)count_cflow, 
			IARG_INST_PTR, IARG_BRANCH_TARGET_ADDR,
			IARG_END
			);

	if(INS_HasFallThrough(ins)) {
		INS_InsertPredicatedCall(
				ins, IPOINT_AFTER, (AFUNPTR)count_cflow, 
				IARG_INST_PTR, IARG_FALLTHROUGH_ADDR, 
				IARG_END
				);
	}

	if(INS_IsCall(ins)) {
		if(ProfileCalls.Value()) {
			INS_InsertCall(
					ins, IPOINT_BEFORE, (AFUNPTR)count_call, 
					IARG_INST_PTR, IARG_BRANCH_TARGET_ADDR,  
					IARG_END
					);
		}
	}
}


// Get function name in all sections
static void parse_funcsyms(IMG img, void *v) {
	if(!IMG_Valid(img)) return;

	for(SEC sec = IMG_SecHead(img); SEC_Valid(sec); sec = SEC_Next(sec)) {
		// RTN: Routine
		for(RTN rtn = SEC_RtnHead(sec); RTN_Valid(rtn); rtn = RTN_Next(rtn)) {
/* DEBUG */
#if 0
			if(g_funcnames[RTN_Address(rtn)] != RTN_Name(rtn)) {
				printf("0x%lx: %s\n", RTN_Address(rtn), RTN_Name(rtn).c_str());	
			}
#endif
			g_funcnames[RTN_Address(rtn)] = RTN_Name(rtn);
			
		}
	}
}


/*****************************************************************************
 *                               Other functions                             *
 *****************************************************************************/
static void print_results(INT32 code, void *v) {
	ADDRINT ip, target;
	unsigned long count, idx;
	double percent;
	std::map<ADDRINT, std::map<ADDRINT, unsigned long> >::iterator i;
	std::map<ADDRINT, unsigned long>::iterator j;

	printf("\n******* FINI PROGRAM *******\n");
	printf("executed %lu instructions\n\n", g_insn_count);

	printf("******* CONTROL TRANSFERS *******\n");
	for(i = g_cflows.begin(); i != g_cflows.end(); i++) {
		target = i->first;
		for(j = i->second.begin(); j != i->second.end(); j++) {
			ip = j->first;
			count = j->second;
			printf("0x%08jx <- 0x%08jx: %3lu (%0.2f%%)\n", 
					target, ip, count, (double)count/g_cflow_count*100.0);
		} 
	}

	if(!g_calls.empty()) {
		printf("\n******* FUNCTION CALLS *******\n");
		for(i = g_calls.begin(); i != g_calls.end(); i++) {
			target = i->first;

			for(j = i->second.begin(); j != i->second.end(); j++) {
				ip = j->first;
				count = j->second;
				printf("[%-30s] 0x%08jx <- 0x%08jx: %3lu (%0.2f%%)\n", 
						g_funcnames[target].c_str(), target, ip, count, (double)count/g_call_count*100.0);
			} 
		}
	}

	if(!g_syscalls.empty()) {
		printf("\n******* SYSCALLS *******\n");
		printf("count (percent)\t     #: syscall_name\n");
		for(j = g_syscalls.begin(); j != g_syscalls.end(); j++) {
			idx = j->first;
			count = j->second;
			percent = (double)count/g_syscall_count*100.0;
			printf("  %3lu (%0.2f%%)\t<- %3ju: %s\n", count, percent, idx, syscall_table_x86_64[idx]);
		}
	}
}


static void print_usage() {
	std::string help = KNOB_BASE::StringKnobSummary();

	fprintf(stderr, "\nProfile call and jump targets\n");
	fprintf(stderr, "%s\n", help.c_str());
}

int main(int argc, char *argv[]) {
	// Get symbol table information
	PIN_InitSymbols();
	// Init pin
	if(PIN_Init(argc,argv)) {
		print_usage();
		return 1;
	}

	// Registering instrumentation functions
	IMG_AddInstrumentFunction(parse_funcsyms, NULL);
	INS_AddInstrumentFunction(instrument_insn, NULL);
	TRACE_AddInstrumentFunction(instrument_trace, NULL);

	// Registering a syscall entry function
	if(ProfileSyscalls.Value()) {
		PIN_AddSyscallEntryFunction(log_syscall, NULL);
	}
	PIN_AddFiniFunction(print_results, NULL);

	printf("\n******* START PROGRAM *******\n");
	// Never returns
	PIN_StartProgram();

	return 0;
}

// EOF
