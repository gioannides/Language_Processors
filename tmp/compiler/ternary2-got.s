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

	beq	$2,$0,$ELSE3
	nop
$IF3:
	b $END_cond3
	nop
$ELSE3:
	b $END_cond3
	nop
$END_cond3:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-156
	sw $fp,152($sp)
	sw $31,148($sp)
	move $fp,$sp

	sw $4,156($sp)
	sw $5,160($sp)
	sw $6,164($sp)
	sw $7,168($sp)
	li	$2, 0
	sw	$2,144($sp) #d

	li	$2, 13
	sw	$2,140($sp) #c

	lw	$2, 144($sp) #d
	beq	$2,$0,$ELSE8
	nop
$IF8:
	li	$2, 7
	b $END_cond8
	nop
$ELSE8:
	li	$2, 14
	b $END_cond8
	nop
$END_cond8:
	lw	$3, 140($sp) #c

	sw	$2,140($sp) #c

	lw	$2, 140($sp) #c
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

