	.file 1 "f.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=xx
	.module nooddspreg
	.abicalls


	.data
	.globl	c
	.align	2
	.type	c, @object
	.size	c, 4
c:
	.word	0


	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	move	$fp,$sp
	li	$2,	8
	sw	$2,0($sp)
	li	$2,	88
	sw	$2,4($sp)
	add	 $2, $2, $3

	li	$2,	88
	sw	$2,8($sp)
	move	$sp,$fp
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

