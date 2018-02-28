	.file 1 "tmp/compiler/f-got.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=xx
	.module nooddspreg
	.abicalls
	.text


	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

