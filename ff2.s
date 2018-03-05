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
	addiu	$sp,$sp,-12
	sw	$fp,8($sp)
	move	$fp,$sp

	addiu	 $sp,$sp,-4
	sw	$2,0($sp)

	li	$2,	8		 #good
	sw	$2,4($sp)		#good

	lw	$2,0($sp)
	addiu	 $sp,$sp,4

	addiu	 $sp,$sp,-4
	sw	$2,0($sp)

	li	$2,	88		#good
	sw	$2,8($sp)		#good

	lw	$2,0($sp)
	addiu	 $sp,$sp,4

	addiu	 $sp,$sp,-4
	sw	$3,0($sp)

	la	 $3,			#should had been address of x

	lw	$3,0($sp)
	addiu	 $sp,$sp,4

	addiu	 $sp,$sp,-4
	sw	$3,0($sp)

	la	 $3,			#should had been address of y

	lw	$3,0($sp)
	addiu	 $sp,$sp,4

	add	 $2, $2, $3		#good

	addiu	 $sp,$sp,-4
	sw	$3,0($sp)

	la	 $3,

	lw	$3,0($sp)
	addiu	 $sp,$sp,4



	move	$sp,$fp
	lw	$fp,8($sp)
	addiu	$sp,$sp,12
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

