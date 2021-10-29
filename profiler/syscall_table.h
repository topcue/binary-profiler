#ifndef SYSCALL_TABLE_H
#define SYSCALL_TABLE_H

const char* syscall_table_x86_64[] = {
	"sys_read", "sys_write", "sys_open", "sys_close", "sys_stat", "sys_fstat", "sys_lstat", "sys_poll", "sys_lseek", "sys_mmap", "sys_mprotect", "sys_munmap", "sys_brk", "sys_rt_sigaction", "sys_rt_sigprocmask", "sys_rt_sigreturn", "sys_ioctl", "sys_pread64", "sys_pwrite64", "sys_readv", "sys_writev", "sys_access", "sys_pipe", "sys_select", "sys_sched_yield", "sys_mremap", "sys_msync", "sys_mincore", "sys_madvise", "sys_shmget", "sys_shmat", "sys_shmctl", "sys_dup", "sys_dup2", "sys_pause", "sys_nanosleep", "sys_getitimer", "sys_alarm", "sys_setitimer", "sys_getpid", "sys_sendfile", "sys_socket", "sys_connect", "sys_accept", "sys_sendto", "sys_recvfrom", "sys_sendmsg", "sys_recvmsg", "sys_shutdown", "sys_bind", "sys_listen", "sys_getsockname", "sys_getpeername", "sys_socketpair", "sys_setsockopt", "sys_getsockopt", "sys_clone", "sys_fork", "sys_vfork", "sys_execve", "sys_exit", "sys_wait4", "sys_kill", "sys_uname", "sys_semget", "sys_semop", "sys_semctl", "sys_shmdt", "sys_msgget", "sys_msgsnd", "sys_msgrcv", "sys_msgctl", "sys_fcntl", "sys_flock", "sys_fsync", "sys_fdatasync", "sys_truncate", "sys_ftruncate", "sys_getdents", "sys_getcwd", "sys_chdir", "sys_fchdir", "sys_rename", "sys_mkdir", "sys_rmdir", "sys_creat", "sys_link", "sys_unlink", "sys_symlink", "sys_readlink", "sys_chmod", "sys_fchmod", "sys_chown", "sys_fchown", "sys_lchown", "sys_umask", "sys_gettimeofday", "sys_getrlimit", "sys_getrusage", "sys_sysinfo", "sys_times", "sys_ptrace", "sys_getuid", "sys_syslog", "sys_getgid", "sys_setuid", "sys_setgid", "sys_geteuid", "sys_getegid", "sys_setpgid", "sys_getppid", "sys_getpgrp", "sys_setsid", "sys_setreuid", "sys_setregid", "sys_getgroups", "sys_setgroups", "sys_setresuid", "sys_getresuid", "sys_setresgid", "sys_getresgid", "sys_getpgid", "sys_setfsuid", "sys_setfsgid", "sys_getsid", "sys_capget", "sys_capset", "sys_rt_sigpending", "sys_rt_sigtimedwait", "sys_rt_sigqueueinfo", "sys_rt_sigsuspend", "sys_sigaltstack", "sys_utime", "sys_mknod", "sys_uselib", "sys_personality", "sys_ustat", "sys_statfs", "sys_fstatfs", "sys_sysfs", "sys_getpriority", "sys_setpriority", "sys_sched_setparam", "sys_sched_getparam", "sys_sched_setscheduler", "sys_sched_getscheduler", "sys_sched_get_priority_max", "sys_sched_get_priority_min", "sys_sched_rr_get_interval", "sys_mlock", "sys_munlock", "sys_mlockall", "sys_munlockall", "sys_vhangup", "sys_modify_ldt", "sys_pivot_root", "sys__sysctl", "sys_prctl", "sys_arch_prctl", "sys_adjtimex", "sys_setrlimit", "sys_chroot", "sys_sync", "sys_acct", "sys_settimeofday", "sys_mount", "sys_umount2", "sys_swapon", "sys_swapoff", "sys_reboot", "sys_sethostname", "sys_setdomainname", "sys_iopl", "sys_ioperm", "sys_create_module", "sys_init_module", "sys_delete_module", "sys_get_kernel_syms", "sys_query_module", "sys_quotactl", "sys_nfsservctl", "sys_getpmsg", "sys_putpmsg", "sys_afs_syscall", "sys_tuxcall", "sys_security", "sys_gettid", "sys_readahead", "sys_setxattr", "sys_lsetxattr", "sys_fsetxattr", "sys_getxattr", "sys_lgetxattr", "sys_fgetxattr", "sys_listxattr", "sys_llistxattr", "sys_flistxattr", "sys_removexattr", "sys_lremovexattr", "sys_fremovexattr", "sys_tkill", "sys_time", "sys_futex", "sys_sched_setaffinity", "sys_sched_getaffinity", "sys_set_thread_area", "sys_io_setup", "sys_io_destroy", "sys_io_getevents", "sys_io_submit", "sys_io_cancel", "sys_get_thread_area", "sys_lookup_dcookie", "sys_epoll_create", "sys_epoll_ctl_old", "sys_epoll_wait_old", "sys_remap_file_pages", "sys_getdents64", "sys_set_tid_address", "sys_restart_syscall", "sys_semtimedop", "sys_fadvise64", "sys_timer_create", "sys_timer_settime", "sys_timer_gettime", "sys_timer_getoverrun", "sys_timer_delete", "sys_clock_settime", "sys_clock_gettime", "sys_clock_getres", "sys_clock_nanosleep", "sys_exit_group", "sys_epoll_wait", "sys_epoll_ctl", "sys_tgkill", "sys_utimes", "sys_vserver", "sys_mbind", "sys_set_mempolicy", "sys_get_mempolicy", "sys_mq_open", "sys_mq_unlink", "sys_mq_timedsend", "sys_mq_timedreceive", "sys_mq_notify", "sys_mq_getsetattr", "sys_kexec_load", "sys_waitid", "sys_add_key", "sys_request_key", "sys_keyctl", "sys_ioprio_set", "sys_ioprio_get", "sys_inotify_init", "sys_inotify_add_watch", "sys_inotify_rm_watch", "sys_migrate_pages", "sys_openat", "sys_mkdirat", "sys_mknodat", "sys_fchownat", "sys_futimesat", "sys_newfstatat", "sys_unlinkat", "sys_renameat", "sys_linkat", "sys_symlinkat", "sys_readlinkat", "sys_fchmodat", "sys_faccessat", "sys_pselect6", "sys_ppoll", "sys_unshare", "sys_set_robust_list", "sys_get_robust_list", "sys_splice", "sys_tee", "sys_sync_file_range", "sys_vmsplice", "sys_move_pages", "sys_utimensat", "sys_epoll_pwait", "sys_signalfd", "sys_timerfd_create", "sys_eventfd", "sys_fallocate", "sys_timerfd_settime", "sys_timerfd_gettime", "sys_accept4", "sys_signalfd4", "sys_eventfd2", "sys_epoll_create1", "sys_dup3", "sys_pipe2", "sys_inotify_init1", "sys_preadv", "sys_pwritev", "sys_rt_tgsigqueueinfo", "sys_perf_event_open", "sys_recvmmsg", "sys_fanotify_init", "sys_fanotify_mark", "sys_prlimit64", "sys_name_to_handle_at", "sys_open_by_handle_at", "sys_clock_adjtime", "sys_syncfs", "sys_sendmmsg", "sys_setns", "sys_getcpu", "sys_process_vm_readv", "sys_process_vm_writev", "sys_kcmp", "sys_finit_module", "sys_sched_setattr", "sys_sched_getattr", "sys_renameat2", "sys_seccomp", "sys_getrandom", "sys_memfd_create", "sys_kexec_file_load", "sys_bpf", "stub_execveat", "userfaultfd", "membarrier", "mlock2", "copy_file_range", "preadv2", "pwritev2", "pkey_mprotect", "pkey_alloc", "pkey_free", "statx", "io_pgetevents", "rseq", "pkey_mprotect", 
};

#ifdef MULTI_ARCH
const char* syscall_table_x86[] = {
	"restart_syscall", "exit", "fork", "read", "write", "open", "close", "waitpid", "creat", "link", "unlink", "execve", "chdir", "time", "mknod", "chmod", "lchown", "break", "oldstat", "lseek", "getpid", "mount", "umount", "setuid", "getuid", "stime", "ptrace", "alarm", "oldfstat", "pause", "utime", "stty", "gtty", "access", "nice", "ftime", "sync", "kill", "rename", "mkdir", "rmdir", "dup", "pipe", "times", "prof", "brk", "setgid", "getgid", "signal", "geteuid", "getegid", "acct", "umount2", "lock", "ioctl", "fcntl", "mpx", "setpgid", "ulimit", "oldolduname", "umask", "chroot", "ustat", "dup2", "getppid", "getpgrp", "setsid", "sigaction", "sgetmask", "ssetmask", "setreuid", "setregid", "sigsuspend", "sigpending", "sethostname", "setrlimit", "getrlimit", "getrusage", "gettimeofday", "settimeofday", "getgroups", "setgroups", "select", "symlink", "oldlstat", "readlink", "uselib", "swapon", "reboot", "readdir", "mmap", "munmap", "truncate", "ftruncate", "fchmod", "fchown", "getpriority", "setpriority", "profil", "statfs", "fstatfs", "ioperm", "socketcall", "syslog", "setitimer", "getitimer", "stat", "lstat", "fstat", "olduname", "iopl", "vhangup", "idle", "vm86old", "wait4", "swapoff", "sysinfo", "ipc", "fsync", "sigreturn", "clone", "setdomainname", "uname", "modify_ldt", "adjtimex", "mprotect", "sigprocmask", "create_module", "init_module", "delete_module", "get_kernel_syms", "quotactl", "getpgid", "fchdir", "bdflush", "sysfs", "personality", "afs_syscall", "setfsuid", "setfsgid", "_llseek", "getdents", "_newselect", "flock", "msync", "readv", "writev", "getsid", "fdatasync", "_sysctl", "mlock", "munlock", "mlockall", "munlockall", "sched_setparam", "sched_getparam", "sched_setscheduler", "sched_getscheduler", "sched_yield", "sched_get_priority_max", "sched_get_priority_min", "sched_rr_get_interval", "nanosleep", "mremap", "setresuid", "getresuid", "vm86", "query_module", "poll", "nfsservctl", "setresgid", "getresgid", "prctl", "rt_sigreturn", "rt_sigaction", "rt_sigprocmask", "rt_sigpending", "rt_sigtimedwait", "rt_sigqueueinfo", "rt_sigsuspend", "pread64", "pwrite64", "chown", "getcwd", "capget", "capset", "sigaltstack", "sendfile", "getpmsg", "putpmsg", "vfork", "ugetrlimit", "mmap2", "truncate64", "ftruncate64", "stat64", "lstat64", "fstat64", "lchown32", "getuid32", "getgid32", "geteuid32", "getegid32", "setreuid32", "setregid32", "getgroups32", "setgroups32", "fchown32", "setresuid32", "getresuid32", "setresgid32", "getresgid32", "chown32", "setuid32", "setgid32", "setfsuid32", "setfsgid32", "pivot_root", "mincore", "madvise", "getdents64", "fcntl64", "not implemented", "not implemented", "gettid", "readahead", "setxattr", "lsetxattr", "fsetxattr", "getxattr", "lgetxattr", "fgetxattr", "listxattr", "llistxattr", "flistxattr", "removexattr", "lremovexattr", "fremovexattr", "tkill", "sendfile64", "futex", "sched_setaffinity", "sched_getaffinity", "set_thread_area", "get_thread_area", "io_setup", "io_destroy", "io_getevents", "io_submit", "io_cancel", "fadvise64", "not implemented", "exit_group", "lookup_dcookie", "epoll_create", "epoll_ctl", "epoll_wait", "remap_file_pages", "set_tid_address", "timer_create", "timer_settime", "timer_gettime", "timer_getoverrun", "timer_delete", "clock_settime", "clock_gettime", "clock_getres", "clock_nanosleep", "statfs64", "fstatfs64", "tgkill", "utimes", "fadvise64_64", "vserver", "mbind", "get_mempolicy", "set_mempolicy", "mq_open", "mq_unlink", "mq_timedsend", "mq_timedreceive", "mq_notify", "mq_getsetattr", "kexec_load", "waitid", "not implemented", "add_key", "request_key", "keyctl", "ioprio_set", "ioprio_get", "inotify_init", "inotify_add_watch", "inotify_rm_watch", "migrate_pages", "openat", "mkdirat", "mknodat", "fchownat", "futimesat", "fstatat64", "unlinkat", "renameat", "linkat", "symlinkat", "readlinkat", "fchmodat", "faccessat", "pselect6", "ppoll", "unshare", "set_robust_list", "get_robust_list", "splice", "sync_file_range", "tee", "vmsplice", "move_pages", "getcpu", "epoll_pwait", "utimensat", "signalfd", "timerfd_create", "eventfd", "fallocate", "timerfd_settime", "timerfd_gettime", "signalfd4", "eventfd2", "epoll_create1", "dup3", "pipe2", "inotify_init1", "preadv", "pwritev", "rt_tgsigqueueinfo", "perf_event_open", "recvmmsg", "fanotify_init", "fanotify_mark", "prlimit64", "name_to_handle_at", "open_by_handle_at", "clock_adjtime", "syncfs", "sendmmsg", "setns", "process_vm_readv", "process_vm_writev", "kcmp", "finit_module", "sched_setattr", "sched_getattr", "renameat2", "seccomp", "getrandom", "memfd_create", "bpf", "execveat", "socket", "socketpair", "bind", "connect", "listen", "accept4", "getsockopt", "setsockopt", "getsockname", "getpeername", "sendto", "sendmsg", "recvfrom", "recvmsg", "shutdown", "userfaultfd", "membarrier", "mlock2", "copy_file_range", "preadv2", "pwritev2", "pkey_mprotect", "pkey_alloc", "pkey_free", "statx", "arch_prctl"
};

const char* syscall_table_arm_32[] = {
	"restart_syscall", "exit", "fork", "read", "write", "open", "close", "not implemented", "creat", "link", "unlink", "execve", "chdir", "not implemented", "mknod", "chmod", "lchown", "not implemented", "not implemented", "lseek", "getpid", "mount", "not implemented", "setuid", "getuid", "not implemented", "ptrace", "not implemented", "not implemented", "pause", "not implemented", "not implemented", "not implemented", "access", "nice", "not implemented", "sync", "kill", "rename", "mkdir", "rmdir", "dup", "pipe", "times", "not implemented", "brk", "setgid", "getgid", "not implemented", "geteuid", "getegid", "acct", "umount2", "not implemented", "ioctl", "fcntl", "not implemented", "setpgid", "not implemented", "not implemented", "umask", "chroot", "ustat", "dup2", "getppid", "getpgrp", "setsid", "sigaction", "not implemented", "not implemented", "setreuid", "setregid", "sigsuspend", "sigpending", "sethostname", "setrlimit", "not implemented", "getrusage", "gettimeofday", "settimeofday", "getgroups", "setgroups", "not implemented", "symlink", "not implemented", "readlink", "uselib", "swapon", "reboot", "not implemented", "not implemented", "munmap", "truncate", "ftruncate", "fchmod", "fchown", "getpriority", "setpriority", "not implemented", "statfs", "fstatfs", "not implemented", "not implemented", "syslog", "setitimer", "getitimer", "stat", "lstat", "fstat", "not implemented", "not implemented", "vhangup", "not implemented", "not implemented", "wait4", "swapoff", "sysinfo", "not implemented", "fsync", "sigreturn", "clone", "setdomainname", "uname", "not implemented", "adjtimex", "mprotect", "sigprocmask", "not implemented", "init_module", "delete_module", "not implemented", "quotactl", "getpgid", "fchdir", "bdflush", "sysfs", "personality", "not implemented", "setfsuid", "setfsgid", "_llseek", "getdents", "_newselect", "flock", "msync", "readv", "writev", "getsid", "fdatasync", "_sysctl", "mlock", "munlock", "mlockall", "munlockall", "sched_setparam", "sched_getparam", "sched_setscheduler", "sched_getscheduler", "sched_yield", "sched_get_priority_max", "sched_get_priority_min", "sched_rr_get_interval", "nanosleep", "mremap", "setresuid", "getresuid", "not implemented", "not implemented", "poll", "nfsservctl", "setresgid", "getresgid", "prctl", "rt_sigreturn", "rt_sigaction", "rt_sigprocmask", "rt_sigpending", "rt_sigtimedwait", "rt_sigqueueinfo", "rt_sigsuspend", "pread64", "pwrite64", "chown", "getcwd", "capget", "capset", "sigaltstack", "sendfile", "not implemented", "not implemented", "vfork", "ugetrlimit", "mmap2", "truncate64", "ftruncate64", "stat64", "lstat64", "fstat64", "lchown32", "getuid32", "getgid32", "geteuid32", "getegid32", "setreuid32", "setregid32", "getgroups32", "setgroups32", "fchown32", "setresuid32", "getresuid32", "setresgid32", "getresgid32", "chown32", "setuid32", "setgid32", "setfsuid32", "setfsgid32", "getdents64", "pivot_root", "mincore", "madvise", "fcntl64", "not implemented", "not implemented", "gettid", "readahead", "setxattr", "lsetxattr", "fsetxattr", "getxattr", "lgetxattr", "fgetxattr", "listxattr", "llistxattr", "flistxattr", "removexattr", "lremovexattr", "fremovexattr", "tkill", "sendfile64", "futex", "sched_setaffinity", "sched_getaffinity", "io_setup", "io_destroy", "io_getevents", "io_submit", "io_cancel", "exit_group", "lookup_dcookie", "epoll_create", "epoll_ctl", "epoll_wait", "remap_file_pages", "not implemented", "not implemented", "set_tid_address", "timer_create", "timer_settime", "timer_gettime", "timer_getoverrun", "timer_delete", "clock_settime", "clock_gettime", "clock_getres", "clock_nanosleep", "statfs64", "fstatfs64", "tgkill", "utimes", "arm_fadvise64_64", "pciconfig_iobase", "pciconfig_read", "pciconfig_write", "mq_open", "mq_unlink", "mq_timedsend", "mq_timedreceive", "mq_notify", "mq_getsetattr", "waitid", "socket", "bind", "connect", "listen", "accept", "getsockname", "getpeername", "socketpair", "send", "sendto", "recv", "recvfrom", "shutdown", "setsockopt", "getsockopt", "sendmsg", "recvmsg", "semop", "semget", "semctl", "msgsnd", "msgrcv", "msgget", "msgctl", "shmat", "shmdt", "shmget", "shmctl", "add_key", "request_key", "keyctl", "semtimedop", "vserver", "ioprio_set", "ioprio_get", "inotify_init", "inotify_add_watch", "inotify_rm_watch", "mbind", "get_mempolicy", "set_mempolicy", "openat", "mkdirat", "mknodat", "fchownat", "futimesat", "fstatat64", "unlinkat", "renameat", "linkat", "symlinkat", "readlinkat", "fchmodat", "faccessat", "pselect6", "ppoll", "unshare", "set_robust_list", "get_robust_list", "splice", "arm_sync_file_range", "sync_file_range2", "tee", "vmsplice", "move_pages", "getcpu", "epoll_pwait", "kexec_load", "utimensat", "signalfd", "timerfd_create", "eventfd", "fallocate", "timerfd_settime", "timerfd_gettime", "signalfd4", "eventfd2", "epoll_create1", "dup3", "pipe2", "inotify_init1", "preadv", "pwritev", "rt_tgsigqueueinfo", "perf_event_open", "recvmmsg", "accept4", "fanotify_init", "fanotify_mark", "prlimit64", "name_to_handle_at", "open_by_handle_at", "clock_adjtime", "syncfs", "sendmmsg", "setns", "process_vm_readv", "process_vm_writev", "kcmp", "finit_module", "sched_setattr", "sched_getattr", "renameat2", "seccomp", "getrandom", "memfd_create", "bpf", "execveat", "userfaultfd", "membarrier", "mlock2", "copy_file_range", "preadv2", "pwritev2", "pkey_mprotect", "pkey_alloc", "pkey_free", "statx", "ARM_breakpoint", "ARM_cacheflush", "ARM_usr26", "ARM_usr32", "ARM_set_tls", 
};

const char* syscall_table_arm_64[] = {
	"io_setup", "io_destroy", "io_submit", "io_cancel", "io_getevents", "setxattr", "lsetxattr", "fsetxattr", "getxattr", "lgetxattr", "fgetxattr", "listxattr", "llistxattr", "flistxattr", "removexattr", "lremovexattr", "fremovexattr", "getcwd", "lookup_dcookie", "eventfd2", "epoll_create1", "epoll_ctl", "epoll_pwait", "dup", "dup3", "fcntl", "inotify_init1", "inotify_add_watch", "inotify_rm_watch", "ioctl", "ioprio_set", "ioprio_get", "flock", "mknodat", "mkdirat", "unlinkat", "symlinkat", "linkat", "renameat", "umount2", "mount", "pivot_root", "nfsservctl", "statfs", "fstatfs", "truncate", "ftruncate", "fallocate", "faccessat", "chdir", "fchdir", "chroot", "fchmod", "fchmodat", "fchownat", "fchown", "openat", "close", "vhangup", "pipe2", "quotactl", "getdents64", "lseek", "read", "write", "readv", "writev", "pread64", "pwrite64", "preadv", "pwritev", "sendfile", "pselect6", "ppoll", "signalfd4", "vmsplice", "splice", "tee", "readlinkat", "newfstatat", "fstat", "sync", "fsync", "fdatasync", "sync_file_range", "timerfd_create", "timerfd_settime", "timerfd_gettime", "utimensat", "acct", "capget", "capset", "personality", "exit", "exit_group", "waitid", "set_tid_address", "unshare", "futex", "set_robust_list", "get_robust_list", "nanosleep", "getitimer", "setitimer", "kexec_load", "init_module", "delete_module", "timer_create", "timer_gettime", "timer_getoverrun", "timer_settime", "timer_delete", "clock_settime", "clock_gettime", "clock_getres", "clock_nanosleep", "syslog", "ptrace", "sched_setparam", "sched_setscheduler", "sched_getscheduler", "sched_getparam", "sched_setaffinity", "sched_getaffinity", "sched_yield", "sched_get_priority_max", "sched_get_priority_min", "sched_rr_get_interval", "restart_syscall", "kill", "tkill", "tgkill", "sigaltstack", "rt_sigsuspend", "rt_sigaction", "rt_sigprocmask", "rt_sigpending", "rt_sigtimedwait", "rt_sigqueueinfo", "rt_sigreturn", "setpriority", "getpriority", "reboot", "setregid", "setgid", "setreuid", "setuid", "setresuid", "getresuid", "setresgid", "getresgid", "setfsuid", "setfsgid", "times", "setpgid", "getpgid", "getsid", "setsid", "getgroups", "setgroups", "uname", "sethostname", "setdomainname", "getrlimit", "setrlimit", "getrusage", "umask", "prctl", "getcpu", "gettimeofday", "settimeofday", "adjtimex", "getpid", "getppid", "getuid", "geteuid", "getgid", "getegid", "gettid", "sysinfo", "mq_open", "mq_unlink", "mq_timedsend", "mq_timedreceive", "mq_notify", "mq_getsetattr", "msgget", "msgctl", "msgrcv", "msgsnd", "semget", "semctl", "semtimedop", "semop", "shmget", "shmctl", "shmat", "shmdt", "socket", "socketpair", "bind", "listen", "accept", "connect", "getsockname", "getpeername", "sendto", "recvfrom", "setsockopt", "getsockopt", "shutdown", "sendmsg", "recvmsg", "readahead", "brk", "munmap", "mremap", "add_key", "request_key", "keyctl", "clone", "execve", "mmap", "fadvise64", "swapon", "swapoff", "mprotect", "msync", "mlock", "munlock", "mlockall", "munlockall", "mincore", "madvise", "remap_file_pages", "mbind", "get_mempolicy", "set_mempolicy", "migrate_pages", "move_pages", "rt_tgsigqueueinfo", "perf_event_open", "accept4", "recvmmsg", "not implemented", "not implemented", "not implemented", "not implemented", "not implemented", "not implemented", "not implemented", "not implemented", "not implemented", "not implemented", "not implemented", "not implemented", "not implemented", "not implemented", "not implemented", "not implemented", "wait4", "prlimit64", "fanotify_init", "fanotify_mark", "name_to_handle_at", "open_by_handle_at", "clock_adjtime", "syncfs", "setns", "sendmmsg", "process_vm_readv", "process_vm_writev", "kcmp", "finit_module", "sched_setattr", "sched_getattr", "renameat2", "seccomp", "getrandom", "memfd_create", "bpf", "execveat", "userfaultfd", "membarrier", "mlock2", "copy_file_range", "preadv2", "pwritev2", "pkey_mprotect", "pkey_alloc", "pkey_free", "statx", 
};
#endif


#endif

// EOF

