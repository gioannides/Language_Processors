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

 max_offset = 16
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-256
	sw $fp,252($sp)
	sw $31,248($sp)
	move $fp,$sp

	sw $4,256($sp)
	sw $5,260($sp)
	sw $6,264($sp)
	sw $7,268($sp)
	li	$2, 0
$END3:
	move	$2,$2
	move	$sp,$fp
	lw	$31,248($sp)
	lw	$fp,252($sp)
	addiu	$sp,$sp,256
	j	$31

	nop

	move $sp,$fp
	lw $31,248($sp)
	lw $fp,252($sp)
	addiu $sp,$sp,256
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

