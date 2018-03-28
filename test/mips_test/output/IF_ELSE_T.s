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
	lw	$2, 256($sp) #j
$END10:
	beq	$2,$0,$ELSE9
	nop
$IF9:
	li	$2, 5
$END12:
	lw	$3, 256($sp) #j
	sw	$2,256($sp) #j

	b $END9
	nop
$ELSE9:
	li	$2, 10
$END14:
	lw	$3, 256($sp) #j
	sw	$2,256($sp) #j

$END9:
	lw	$2, 256($sp) #j
$END15:
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
	.end IF_ELSE_T
	.size IF_ELSE_T, .-IF_ELSE_T

