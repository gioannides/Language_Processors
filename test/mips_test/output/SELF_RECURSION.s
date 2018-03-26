	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	SELF_RECURSION
	.set	nomips16
	.set	nomicromips
	.ent	SELF_RECURSION
	.type	SELF_RECURSION, @function
SELF_RECURSION:

$END3:
$IF2:
$ELSE2:
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
	lw	$2, 136($sp) #x
	li	$3, 1
	sge	$2, $2, $3
$END8:
	beq	$2,$0,$ELSE7
	nop
$IF7:
	lw	$2, 136($sp) #x
	sw $1, 112($sp)
	sw $2, 108($sp)
	sw $3, 104($sp)
	sw $4, 100($sp)
	sw $5, 96($sp)
	sw $6, 92($sp)
	sw $7, 88($sp)
	sw $8, 84($sp)
	sw $9, 80($sp)
	sw $10, 76($sp)
	sw $11, 72($sp)
	sw $12, 68($sp)
	sw $13, 64($sp)
	sw $14, 60($sp)
	sw $15, 56($sp)
	sw $16, 52($sp)
	sw $17, 48($sp)
	sw $18, 44($sp)
	sw $19, 40($sp)
	sw $20, 36($sp)
	sw $21, 32($sp)
	sw $22, 28($sp)
	sw $23, 24($sp)
	sw $24, 20($sp)
	lw	$3, 136($sp) #x
	li	$4, 1
	sub	$3, $3, $4
$END11:
# merge

	sw	$3, 0($sp) #x 0

	move	$4, $3 #load parameter 1
	.option pic
	la $25,SELF_RECURSION
	jalr $25
	nop
	move	$25, $2
	lw $1,112($sp)
	lw $2,108($sp)
	lw $3,104($sp)
	lw $4,100($sp)
	lw $5,96($sp)
	lw $6,92($sp)
	lw $7,88($sp)
	lw $8,84($sp)
	lw $9,80($sp)
	lw $10,76($sp)
	lw $11,72($sp)
	lw $12,68($sp)
	lw $13,64($sp)
	lw $14,60($sp)
	lw $15,56($sp)
	lw $16,52($sp)
	lw $17,48($sp)
	lw $18,44($sp)
	lw $19,40($sp)
	lw $20,36($sp)
	lw $21,32($sp)
	lw $22,28($sp)
	lw $23,24($sp)
	lw $24,20($sp)
	move $3, $25
	mult	$2, $3
	mflo	$2
$END10:
	move	$2,$2
	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop

	b $END7
	nop
$ELSE7:
	li	$2, 1
$END13:
	move	$2,$2
	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop

$END7:
	move $sp,$fp
	lw $31,128($sp)
	lw $fp,132($sp)
	addiu $sp,$sp,136
	j $31

	nop
	.set macro
	.set reorder
	.end SELF_RECURSION
	.size SELF_RECURSION, .-SELF_RECURSION

