#!/bin/bash

let id=0;

for testfile in bin/*.c
do
	let id++;
	 b=$(basename ${testfile}); #take the name without the extension
	./bin/c_compiler --translate  bin/testfile -o bin/${b}.py
	gcc bin/${b}.py -o bin/ourout #compile the pyhton
	./bin/out 		
	let our = $?
	gcc bin/$testfile -o bin/goldenout #compile the input code
	./bin/goldenout
	let golden = $?
	if [$our -eq $goldenout] #compare exit codes
	then
		echo $id, $testfile, PASS
	else 
		echo $id, $testfile, FAIL
	fi
done