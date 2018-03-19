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
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-160
	sw $fp,156($sp)
	sw $31,152($sp)
	move $fp,$sp

	sw $4,160($sp)
	sw $5,164($sp)
	sw $6,168($sp)
	sw $7,172($sp)
	li	$2, 56
	sw	$2,148($sp) #y

	li	$2, 87
	sw	$2,144($sp) #x

	li	$2, 23
	lw	$3, 144($sp) #x

	sw	$2,144($sp) #x

	sw	$2,140($sp) #z

	lw	$2, 144($sp) #x
	move	$2,$2
	move	$sp,$fp
	lw	$31,152($sp)
	lw	$fp,156($sp)
	addiu	$sp,$sp,160
	j	$31

	nop

	move $sp,$fp
	lw $31,152($sp)
	lw $fp,156($sp)
	addiu $sp,$sp,160
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

