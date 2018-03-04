	.file 1 "tmp/compiler/f-got.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=xx
	.module nooddspreg
	.abicalls


	.data
	.globl	a
	.align	2
	.type	a, @object
	.size	a, 4
a:
	.word	0


	.data
	.globl	b
	.align	2
	.type	b, @object
	.size	b, 4
b:
	.float	9.56


	.data
	.globl	c
	.align	3
	.type	c, @object
	.size	c, 8
c:
	.double	20.4

