PIN_ROOT=${HOME}/Pin/pin-3.20

.PHONY: all clean profiler

all: profiler

profiler: profiler/makefile profiler/makefile.rules profiler/profiler.cpp
	export PIN_ROOT=$(PIN_ROOT) && cd profiler && $(MAKE)

clean:
	cd profiler && rm -rf obj-intel64

