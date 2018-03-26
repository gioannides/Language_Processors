	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls



	.data
	.globl	array
	.align	2
	.type	array, @object
	.size	array, 80
array:
	.word	0
	.space	76


	.text
	.align	2
	.globl	arrays
	.set	nomips16
	.set	nomicromips
	.ent	arrays
	.type	arrays, @function
arrays:

$END3:
$END4:
$END5:
$END6:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-136
	sw $fp,132($sp)
	sw $31,128($sp)
	move $fp,$sp

	sw $4,136($sp)
	sw $5,140($sp)
	sw $6,144($sp)
	sw $7,148($sp)
	li	$2, 35
$END8:
	sw $25, 132($sp)
	move $25, $0
	li	$3, 0
$END9:
	move $25, $3
	li $24, 4
	mul $25,$24,$25
	lui $3, %hi(array)
	la $3, %lo(array)($3)
	add $3, $3, $25
	lw $3, 0($3)
	lui	$3, %hi(array)
	la $3, %lo(array)($3)
	add $3, $3, $25
	sw $2, 0($3)
	lw $25, 132($sp)
	li	$2, 40
$END10:
	sw $25, 132($sp)
	move $25, $0
	li	$3, 2
$END11:
	move $25, $3
	li $24, 4
	mul $25,$24,$25
	lui $3, %hi(array)
	la $3, %lo(array)($3)
	add $3, $3, $25
	lw $3, 0($3)
	lui	$3, %hi(array)
	la $3, %lo(array)($3)
	add $3, $3, $25
	sw $2, 0($3)
	lw $25, 132($sp)
	sw $25, 132($sp)
	move $25, $0
	li	$3, 0
$END13:
	move $25, $3
	li $24, 4
	mul $25,$24,$25
	lui $2, %hi(array)
	la $2, %lo(array)($2)
	add $2, $2, $25
	lw $2, 0($2)
	lw $25, 132($sp)
	sw $25, 132($sp)
	move $25, $0
	li	$4, 2
$END14:
	move $25, $4
	li $24, 4
	mul $25,$24,$25
	lui $3, %hi(array)
	la $3, %lo(array)($3)
	add $3, $3, $25
	lw $3, 0($3)
	lw $25, 132($sp)
	add	$2, $2, $3
$END12:
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
	.end arrays
	.size arrays, .-arrays

