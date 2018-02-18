#!/bin/bash

let id=0;

for testfile in bin/*.cpp
do
	let id++;
	./bin/c_compiler bin/$testfile
	gcc bin/outfile.cpp -o bin/ourout
	./bin/out
	let our = $?
	gcc bin/$testfile -o bin/goldenout
	./bin/goldenout
	let golden = $?
	if [$our -eq $goldenout]
	then
		echo $id, $testfile, PASS
	else 
		echo $id, $testfile, FAIL
	fi
done