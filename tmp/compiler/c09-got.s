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
	addiu $sp,$sp,-164
	sw $fp,160($sp)
	sw $31,156($sp)
	move $fp,$sp

	sw $4,164($sp)
	sw $5,168($sp)
	sw $6,172($sp)
	sw $7,176($sp)
	sw	$0, 152($sp) #k

	li	$2, 2
	li	$3, 5
	sle	$2, $2, $3
	sw	$2,148($sp) #x

	li	$2, 1
	li	$3, 3
	sgt	$2, $2, $3
	li	$3, 44
	slt	$2, $2, $3
	li	$3, 56
	li	$4, 45
	sle	$3, $3, $4
	li	$4, 67
	xor	$3, $3, $4
	sltu	$3, $0, $3
	sge	$2, $2, $3
	sw	$2,144($sp) #y

	lw	$2, 144($sp) #y
	li	$3, 8
	li	$4, 5
	seq	$3, $3, $4
	add	$2, $2, $3
	sw	$2,140($sp) #z

	lw	$2, 140($sp) #z
	lw	$3, 152($sp) #k

	sw	$2,152($sp) #k

	lw	$2, 152($sp) #k
	move	$2,$2
	move	$sp,$fp
	lw	$31,156($sp)
	lw	$fp,160($sp)
	addiu	$sp,$sp,164
	j	$31

	nop

	move $sp,$fp
	lw $31,156($sp)
	lw $fp,160($sp)
	addiu $sp,$sp,164
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

