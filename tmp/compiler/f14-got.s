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

$IF1:
$IF2:
$ELSE2:
$END_sel2:
$END_sel1:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-148
	sw $fp,144($sp)
	sw $31,140($sp)
	move $fp,$sp

	sw $4,148($sp)
	sw $5,152($sp)
	sw $6,156($sp)
	sw $7,160($sp)
	li	$2, 1
	beq	$2,$0,$END_sel4
	nop
$IF4:
	li	$2, 2
	beq	$2,$0,$ELSE5
	nop
$IF5:
	li	$2, 10
	move	$2,$2
	move	$sp,$fp
	lw	$31,140($sp)
	lw	$fp,144($sp)
	addiu	$sp,$sp,148
	j	$31

	nop

	b $END_sel5
	nop
$ELSE5:
	li	$2, 13
	move	$2,$2
	move	$sp,$fp
	lw	$31,140($sp)
	lw	$fp,144($sp)
	addiu	$sp,$sp,148
	j	$31

	nop

$END_sel5:
$END_sel4:
	li	$2, 11
	move	$2,$2
	move	$sp,$fp
	lw	$31,140($sp)
	lw	$fp,144($sp)
	addiu	$sp,$sp,148
	j	$31

	nop

	move $sp,$fp
	lw $31,140($sp)
	lw $fp,144($sp)
	addiu $sp,$sp,148
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

