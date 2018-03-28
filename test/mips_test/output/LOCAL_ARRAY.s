	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	LOCAL_ARRAY
	.set	nomips16
	.set	nomicromips
	.ent	LOCAL_ARRAY
	.type	LOCAL_ARRAY, @function
LOCAL_ARRAY:

$END2:
$END3:
$END4:
$END5:
$END7:
$END6:
 max_offset = 16
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-264
	sw $fp,260($sp)
	sw $31,256($sp)
	move $fp,$sp

	sw $4,264($sp)
	sw $5,268($sp)
	sw $6,272($sp)
	sw $7,276($sp)
	lw	$2, 264($sp) #i
$END9:
	sw	$2,252($sp) #j

	sw	$0, 248($sp) #array

	li	$2, 45
$END10:
	sw $25, 260($sp)
	move $25, $0
	li $24, 4
	mul $25,$24,$25
	lw	$3, 264($sp) #i
	li	$4, 1
	sub	$3, $3, $4
$END11:
	move $25, $3
	li $24, 4
	mul $25,$24,$25
	lw	$3, 248($sp) #array
	sw	$2,248($sp) #array

	lw $25, 260($sp)
	sw $25, 260($sp)
	move $25, $0
	li $24, 4
	mul $25,$24,$25
	lw	$3, 264($sp) #i
	li	$4, 1
	sub	$3, $3, $4
$END13:
	move $25, $3
	li $24, 4
	mul $25,$24,$25
	lw	$2, 248($sp) #array
	lw $25, 260($sp)
$END12:
	lw	$3, 252($sp) #j
	sw	$2,252($sp) #j

	lw	$2, 252($sp) #j
$END14:
	move	$2,$2
	move	$sp,$fp
	lw	$31,256($sp)
	lw	$fp,260($sp)
	addiu	$sp,$sp,264
	j	$31

	nop

	move $sp,$fp
	lw $31,256($sp)
	lw $fp,260($sp)
	addiu $sp,$sp,264
	j $31

	nop
	.set macro
	.set reorder
	.end LOCAL_ARRAY
	.size LOCAL_ARRAY, .-LOCAL_ARRAY

