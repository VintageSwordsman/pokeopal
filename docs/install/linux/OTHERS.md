# Instructions for other distributions
1. Try to find the required software in its repositories:
    - `gcc`
    - `g++`
    - `arm-none-eabi-gcc`
    - `arm-none-eabi-binutils`
    - `arm-none-eabi-newlib`
    - `make`
    - `git`
    - `libpng-dev`
    - `python3`

2. Possible to build using `arm-none-eabi-picolibc` in place of `arm-none-eabi-newlib` the following lines in the makefile need to be adjusted as below to ensure the required tools are able to be used:
    - 152 INCLUDE_CPP_ARGS := $(INCLUDE_DIRS:%=-iquote % -isystem /usr/lib/picolibc/arm-none-eabi/include)
    - 587 LDFLAGS = -Map ../../$(MAP) --print-memory-usage --gc-sections -L /usr/lib/picolibc/arm-none-eabi/lib/
