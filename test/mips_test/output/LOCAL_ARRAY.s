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
$END6:
$END5:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-144
	sw $fp,140($sp)
	sw $31,136($sp)
	move $fp,$sp

	sw $4,144($sp)
	sw $5,148($sp)
	sw $6,152($sp)
	sw $7,156($sp)
	lw	$2, 144($sp) #i
$END8:
	sw	$2,132($sp) #j

	sw	$0, 128($sp) #array

	li	$2, 45
$END9:
	sw $25, 140($sp)
	move $25, $0
	li $24, 4
	mul $25, $24
	lw	$3, 144($sp) #i
	li	$4, 1
	sub	$3, $3, $4
$END10:
	move $25, $3
	li $24, 4
	mul $25, $24
	lw	$3, 128($sp) #array
	sw	$2,128($sp) #array

	lw $25, 140($sp)
	sw $25, 140($sp)
	move $25, $0
	li $24, 4
	mul $25, $24
	lw	$3, 144($sp) #i
	li	$4, 1
	sub	$3, $3, $4
$END12:
	move $25, $3
	li $24, 4
	mul $25, $24
	lw	$2, 128($sp) #array
	lw $25, 140($sp)
$END11:
	lw	$3, 132($sp) #j
	sw	$2,132($sp) #j

	lw	$2, 132($sp) #j
$END13:
	move	$2,$2
	move	$sp,$fp
	lw	$31,136($sp)
	lw	$fp,140($sp)
	addiu	$sp,$sp,144
	j	$31

	nop

	move $sp,$fp
	lw $31,136($sp)
	lw $fp,140($sp)
	addiu $sp,$sp,144
	j $31

	nop
	.set macro
	.set reorder
	.end LOCAL_ARRAY
	.size LOCAL_ARRAY, .-LOCAL_ARRAY

