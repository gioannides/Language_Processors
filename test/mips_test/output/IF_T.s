	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	IF_T
	.set	nomips16
	.set	nomicromips
	.ent	IF_T
	.type	IF_T, @function
IF_T:

$END3:
$IF2:
$END2:
 max_offset = 16
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-256
	sw $fp,252($sp)
	sw $31,248($sp)
	move $fp,$sp

	sw $4,256($sp)
	sw $5,260($sp)
	sw $6,264($sp)
	sw $7,268($sp)
	lw	$2, 256($sp) #i
$END7:
	beq	$2,$0,$END6
	nop
$IF6:
	lw	$2, 256($sp) #i
$END9:
	move	$2,$2
	move	$sp,$fp
	lw	$31,248($sp)
	lw	$fp,252($sp)
	addiu	$sp,$sp,256
	j	$31

	nop

$END6:
	li	$2, 0
$END10:
	move	$2,$2
	move	$sp,$fp
	lw	$31,248($sp)
	lw	$fp,252($sp)
	addiu	$sp,$sp,256
	j	$31

	nop

	move $sp,$fp
	lw $31,248($sp)
	lw $fp,252($sp)
	addiu $sp,$sp,256
	j $31

	nop
	.set macro
	.set reorder
	.end IF_T
	.size IF_T, .-IF_T

