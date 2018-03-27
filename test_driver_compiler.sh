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
        
    # Generate assembly for driver
    mips-linux-gnu-gcc -S -w -march=mips1 -mfp32 -O0 $DRIVER -o $workingout/${NAME}_driver.s
    if [[ $? -ne 0 ]]; then
        >&2 echo "ERROR : Couldn't compile driver program using GCC."
        continue
    fi
    
    # Generate assembly for slave
    $COMPILER -S $workingin/${NAME}.c -o $workingout/${NAME}.s
    if [[ $? -ne 0 ]]; then
        >&2 echo "ERROR : Compiler returned error message."
        continue
    fi
    
    # Generate GOT_EXIT_CODE
    mips-linux-gnu-gcc -w -static $workingout/${NAME}_driver.s $workingout/${NAME}.s -o $workingout/${NAME}_result
    qemu-mips $workingout/${NAME}_result
    GOT_EXIT_CODE=$?
    
    # Generate EXP_EXIT_CODE
    mips-linux-gnu-gcc -w -static -march=mips1 -mfp32 -O0 $workingin/${NAME}.c $workingin/${NAME}_driver.c -o $workingout/${NAME}_gcc_result
    qemu-mips $workingout/${NAME}_gcc_result
    EXP_EXIT_CODE=$?
    
    if [[ $GOT_EXIT_CODE -ne $EXP_EXIT_CODE ]]; then
        echo -e ${wht}$NAME.c ${red}"[FAIL]" ${wht}"Expected" $EXP_EXIT_CODE ", got" $GOT_EXIT_CODE
    else
   	    echo -e ${wht}$NAME.c ${grn}"[PASS]"
    fi
    
    
done
