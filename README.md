# A Binary Profiler with Pintool

## Index

  - [Overview](#overview) 
  - [Getting Started](#getting-started)
  - [Usage](#Usage)
  - [Demo](#Demo)

## Overview

- It's a **binary profiler** implemented using a **pintool**.

- The code is based on Practical Binary Analysis and has added several features.

- The following information is profiled for the target binary.

  - Total number of **instructions** executed

  - Control transfers

  - **Called functions** and number of times (and percentageage)

  - **Called system calls** and number of times (and percentageage)

    For the system call, a name matching the system call number is output.

## Getting Started

### Dependencies

- pintool-3.20

```
cd $HOME; mkdir Pin; cd Pin

wget https://software.intel.com/sites/landingpage/pintool/downloads/pin-3.20-98437-gf02b61307-gcc-linux.tar.gz
tar -xzvf pin-3.20-98437-gf02b61307-gcc-linux.tar.gz

rm pin-3.20-98437-gf02b61307-gcc-linux.tar.gz
mv pin-3.20-98437-gf02b61307-gcc-linux pin-3.20
```

## Usage

First, build a `profiler` using a Makefile.

The usage of the `profiler` is as follows:

```
${PINTOOL-PATH}/pin -t ${PROFILER-OBJS} -c -s -- ${TARGET-BINARY}
```

## Demo

In the `test_bin` directory, an `apt` binary for testing is prepared.

Instructions for simple testing are written in `run.sh`.

```
#!/bin/bash

$HOME/Pin/pin-3.20/pin -t ./profiler/obj-intel64/profiler.so -c -s -- ./test_bin/apt

# EOF
```

The result of executing the `run.sh` is as follows.

```

******* START PROGRAM *******
apt 2.0.6 (amd64)
Usage: apt [options] command

[skip]

******* FINI PROGRAM *******
executed 498 instructions

******* CONTROL TRANSFERS *******
0x557b7e3ee000 <- 0x557b7e3eec3c:   1 (1.72%)
0x557b7e3ee016 <- 0x557b7e3ee012:   1 (1.72%)
0x557b7e3ee180 <- 0x557b7e3ee582:   1 (1.72%)
0x557b7e3ee1a0 <- 0x557b7e3ee5d3:   1 (1.72%)
0x557b7e3ee1d0 <- 0x557b7e3ee5c3:   1 (1.72%)

[skip]

0x7fbb20d0dfc0 <- 0x557b7e3ee4e8:   1 (1.72%)
0x7fbb20d1e9a0 <- 0x557b7e3ee1d4:  13 (22.41%)
0x7fbb20d30f60 <- 0x557b7e3ee204:   1 (1.72%)
0x7fbb20d31090 <- 0x557b7e3ee184:   1 (1.72%)
0x7fbb20e72660 <- 0x557b7e3ee1a4:   1 (1.72%)
0x7fbb20fb8b20 <- 0x557b7e3ee224:   1 (1.72%)
0x7fbb20fc90f0 <- 0x557b7e3ee284:   1 (1.72%)
0x7fbb21041690 <- 0x557b7e3ee254:   1 (1.72%)
0x7fbb211c0770 <- 0x557b7e3ee234:   1 (1.72%)
0x7fbb2134ad70 <- 0x557b7e3ee274:   1 (1.72%)

******* FUNCTION CALLS *******
[_init                         ] 0x557b7e3ee000 <- 0x557b7e3eec3c:   1 (4.00%)
[.plt.got                      ] 0x557b7e3ee180 <- 0x557b7e3ee582:   1 (4.00%)
[                              ] 0x557b7e3ee1a0 <- 0x557b7e3ee5d3:   1 (4.00%)
[                              ] 0x557b7e3ee1d0 <- 0x557b7e3ee5c3:   1 (4.00%)

[skip]

[                              ] 0x557b7e3ee4f0 <- 0x557b7e3ee587:   1 (4.00%)
[                              ] 0x557b7e3ee5a0 <- 0x557b7e3eec59:   1 (4.00%)
[__libc_start_main             ] 0x7fbb20d0dfc0 <- 0x557b7e3ee4e8:   1 (4.00%)

******* SYSCALLS *******
count (percent)      #: syscall_name
   85 (22.14%)  <-   0: sys_read
   20 (5.21%)   <-   1: sys_write
   46 (11.98%)  <-   3: sys_close
    7 (1.82%)   <-   4: sys_stat
   24 (6.25%)   <-   5: sys_fstat
   87 (22.66%)  <-   9: sys_mmap

[skip]

    1 (0.26%)   <- 231: sys_exit_group
   58 (15.10%)  <- 257: sys_openat
    1 (0.26%)   <- 273: sys_set_robust_list
    1 (0.26%)   <- 302: sys_prlimit64
```

