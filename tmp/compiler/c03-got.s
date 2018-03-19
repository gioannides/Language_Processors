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
	addiu $sp,$sp,-156
	sw $fp,152($sp)
	sw $31,148($sp)
	move $fp,$sp

	sw $4,156($sp)
	sw $5,160($sp)
	sw $6,164($sp)
	sw $7,168($sp)
	li	$2, 7
	sw	$2,144($sp) #a

	li	$2, 8
	sw	$2,140($sp) #b

	li	$2, 9
	lw	$3, 140($sp) #b

	add	$2, $2, $3
	sw	$2,140($sp) #b

	lw	$3, 144($sp) #a

	sub	$2, $3, $2
	sw	$2,144($sp) #a

	li	$2, 8
	lw	$3, 140($sp) #b

	add	$2, $2, $3
	sw	$2,140($sp) #b

	lw	$3, 144($sp) #a

	div	$3,$2
	mflo	$2
	sw	$2,144($sp) #a

	move	$2,$2
	move	$sp,$fp
	lw	$31,148($sp)
	lw	$fp,152($sp)
	addiu	$sp,$sp,156
	j	$31

	nop

	move $sp,$fp
	lw $31,148($sp)
	lw $fp,152($sp)
	addiu $sp,$sp,156
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

