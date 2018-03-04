	.file 1 "f.c"
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


	.data
	.globl	d
	.type	d, @object
	.size	d, 1
d:
	.byte	0


	.data
	.globl	e
	.align	2
	.type	e, @object
	.size	e, 4
e:
	.word	45


	.data
	.globl	f
	.align	2
	.type	f, @object
	.size	f, 4
f:
	.word	44


	.data
	.globl	g
	.align	2
	.type	g, @object
	.size	g, 4
g:
	.word	89


	.align	2
	.globl	second
	.set	nomips16
	.set	nomicromips
	.ent	second
	.type	second, @function
second:
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-40
	sw	$fp,36($sp)
	move	$fp,$sp
	10	10
		10
	move	$sp,$fp
	lw	$fp,36($sp)
	addiu	$sp,$sp,40
	j	$31
	.set	 macro
	.set	 reorder
	.end	 second
	.size	 second, .-second



	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-48
	sw	$fp,44($sp)
	move	$fp,$sp
	12	12
		14
	move	$sp,$fp
	lw	$fp,44($sp)
	addiu	$sp,$sp,48
	j	$31
	.set	 macro
	.set	 reorder
	.end	 u
	.size	 u, .-u

