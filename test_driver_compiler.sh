#!/bin/bash
blk=$'\x1b[90m' # Sets text to black
red=$'\x1b[31m' # Sets text to red
grn=$'\x1b[92m' # Sets text to green
ylw=$'\x1b[93m' # Sets text to yellow
blu=$'\x1b[94m' # Sets text to blue
pur=$'\x1b[95m' # Sets text to purple
cyn=$'\x1b[96m' # Sets text to cyan
wht=$'\x1b[97m' # Sets text to white

if [[ -z "$1" ]]; then 
    COMPILER=bin/c_compiler
else
    COMPILER=$1
fi

workingin="test/mips_test/testin"
workingout="test/mips_test/output"

mkdir -p $workingout


for DRIVER in $workingin/*_driver.c ; do
    NAME=$(basename $DRIVER _driver.c)
    TESTCODE=$workingin/$NAME.c
    

    
    # Compile driver with normal GCC
    mips-linux-gnu-gcc -c $DRIVER -o $workingout/${NAME}_driver.o
    if [[ $? -ne 0 ]]; then
        >&2 echo "ERROR : Couldn't compile driver program using GCC."
        continue
    fi
    
    # Compile test function with compiler under test to assembly
    $COMPILER -S  $workingin/$NAME.c  -o  $workingout/$NAME.s
    if [[ $? -ne 0 ]]; then
        >&2 echo "ERROR : Compiler returned error message."
        continue
    fi
    
    # Link driver object and assembly into executable
    mips-linux-gnu-gcc -w -c  $workingout/${NAME}.s -o $workingout/${NAME}.o
    mips-linux-gnu-gcc -static  $workingout/${NAME}_driver.o $workingout/${NAME}.o -o $workingout/${NAME}_result.o
    if [[ $? -ne 0 ]]; then
        >&2 echo "ERROR : Linker returned error message."
        continue
    fi
    
    # Run the actual executable
    qemu-mips $workingout/${NAME}_result.o
    if [[ $? -ne 30 ]]; then
        >&2 echo -e ${wht}$NAME.c ${red}"[FAIL]" ${wht}"Expected 30 , got $?"
    else
   	echo -e "${wht}$NAME.c ${grn}[PASS]"
    fi
    rm test/mips_test/output/*.o
done
