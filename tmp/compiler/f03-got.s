	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
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
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-4
	sw	$fp,0($sp)
	move	$fp,$sp

	li	$2, 11
$END1:
	li	$3, 7
	add	$2, $2, $3
$END0:
	move	$sp,$fp
	lw	$fp,0($sp)
	addiu	$sp,$sp,4
	j	$31

	nop

	move	$sp,$fp
	lw	$fp,0($sp)
	addiu	$sp,$sp,4
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

