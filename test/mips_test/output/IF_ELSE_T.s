	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	IF_ELSE_T
	.set	nomips16
	.set	nomicromips
	.ent	IF_ELSE_T
	.type	IF_ELSE_T, @function
IF_ELSE_T:

$END3:
$IF2:
$END5:
$ELSE2:
$END7:
$END2:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-136
	sw $fp,132($sp)
	sw $31,128($sp)
	move $fp,$sp

	sw $4,136($sp)
	sw $5,140($sp)
	sw $6,144($sp)
	sw $7,148($sp)
$END10:
	beq	$2,$0,$ELSE9
	nop
$IF9:
	li	$2, 5
$END12:
	b $END9
	nop
$ELSE9:
	li	$2, 10
$END14:
$END9:
$END15:
	move	$2,$2
	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop

	move $sp,$fp
	lw $31,128($sp)
	lw $fp,132($sp)
	addiu $sp,$sp,136
	j $31

	nop
	.set macro
	.set reorder
	.end IF_ELSE_T
	.size IF_ELSE_T, .-IF_ELSE_T
