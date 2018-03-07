	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.data
	.globl	a
	.align	2
	.type	a, @object
	.size	a, 4
a:
	.word	2


	.data
	.globl	b
	.align	2
	.type	b, @object
	.size	b, 4
b:
	.word	8


	.data
	.globl	c
	.align	2
	.type	c, @object
	.size	c, 4
c:
	.word	5
	.data
	.globl	d
	.align	2
	.type	d, @object
	.size	d, 4
d:
	.word	0
	.data
	.globl	f
	.align	2
	.type	f, @object
	.size	f, 4
f:
	.word	7


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

	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	lui	$3, %hi(b)
	lw	$3, %lo(b)($3)
	add	$2, $2, $3
	move	$sp,$fp
	lw	$fp,0($sp)
	addiu	$sp,$sp,4
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

