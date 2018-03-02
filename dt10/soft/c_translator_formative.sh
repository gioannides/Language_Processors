#!/bin/bash

if [[ "$1" != "" ]] ; then
    compiler="$1"
else
    compiler="bin/c_compiler"
fi

if [[ "$2" != "" ]] ; then
    working_dir="$2"
else
    working_dir="dt10/soft/outputs"
fi

if [[ "$3" != "" ]] ; then
    input_dir="$3"
else
    input_dir="dt10/soft/inputs"
fi

if [[ ! -f bin/c_compiler ]] ; then
    >&2 echo "Error : cannot find compiler at path ${compiler}."
    exit 1
fi

mkdir -p ${working_dir}

function run_log {
    >&2 echo " Cmd: $1"
    >&2 echo " Log files: ${working_dir}/$1.*.txt"
    ( $1 ) > ${working_dir}/$2.stdout.txt  2> ${working_dir}/$2.stderr.txt
    ret=$?
    return $ret
}

for i in ${input_dir}/*.c ; do
    base=$(echo $i | sed -E -e "s|${input_dir}/([^.]+)[.]c|\1|g");
    
    {
        echo "Compile the reference C version"
        run_log "gcc $i -o ${working_dir}/$base" $base-reference-compile
        
        echo "Run the reference C version"
        run_log "${working_dir}/$base"  $base-reference-execute
        REF_C_OUT=$?
        echo "REF_C_OUT=${REF_C_OUT}"
        
        echo "Create the DUT python version by invoking the compiler with translation flags"
        run_log "$compiler --translate $i -o ${working_dir}/$base.py" $base-dut-translate
        
        echo "Run the DUT python version"
        run_log "python3 ${working_dir}/$base.py" $base-dut-python
        GOT_P_OUT=$?
        echo "GOT_P_OUT=${GOT_P_OUT}"
        
        echo "Compile the code to MIPS assembly."
        run_log "$compiler -S $i -o ${working_dir}/$base.s" $base-dut-compile
        
        compiler_ok=1
        compiler_reason=""
        if [[ -f ${working_dir}/$base.s ]] ; then
            echo "Linking (and assembling) the code to MIPS executable."
            run_log "mips-linux-gnu-gcc -W -Wall -static ${working_dir}/$base.s -o ${working_dir}/$base.mips.elf" $base-dut-link
            
            if [[ -f ${working_dir}/$base.mips.elf ]] ; then
                echo "Executing the MIPS executable."
                run_log "qemu-mips ${working_dir}/$base.mips.elf" $base-dut-qemu
                GOT_C_OUT=$?
                echo "GOT_C_OUT=${GOT_C_OUT}"
                
                if [[ ${GOT_C_OUT} -eq ${REF_C_OUT} ]] ; then
                    compiler_ok=0
                else
                    compiler_reason="Expected ${REF_C_OUT}, got ${GOT_C_OUT}"
                fi
            else
                compiler_reason="couldn't link"
            fi
        else
            compiler_reason="no assembly produced"
        fi
        
        
    } &> ${working_dir}/$base-translate.log
    
    if [[ $REF_C_OUT -ne $GOT_P_OUT ]] ; then
        echo "$base, translate, FAIL,   Expected ${REF_C_OUT}, got ${GOT_P_OUT}"
    else
        echo "$base, translate, Pass"  
    fi | tee ${working_dir}/$base-translate.csv
    
    if [[ ${compiler_ok} -ne 0 ]] ; then
        echo "$base, compile,   Fail,   ${compiler_reason}"
    else
        echo "$base, compile,   Pass"  
    fi | tee ${working_dir}/$base-compile.csv
done

