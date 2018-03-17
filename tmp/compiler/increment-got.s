	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


$END0:

	.data
	.globl	a
	.align	2
	.type	a, @object
	.size	a, 4
a:
	.word	3


	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END2:
$END3:
$END4:
$END5:
$END6:
$END7:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-140
	sw $fp,136($sp)
	sw $31,132($sp)
	move $fp,$sp

	li	$2, 0
$END9:
	sw	$2,128($sp) #b

	li	$2, 0
$END10:
	sw	$2,124($sp) #j

	li	$2, 0
$END11:
	sw	$2,120($sp) #k

	li	$2, 100
$END12:
	sw	$2,116($sp) #x

	li	$2, 0
$END13:
	sw	$2,112($sp) #i

	li	$2, 1
$END15:
	lui	$3, %hi(a)
	lw	$3, %lo(a)($3)
	add	$2, $2, $3
	lui	$3, %hi(a)
	sw	$2, %lo(a)($3)
$END14:
	lw	$3, 128($sp) #b

	sw	$2,128($sp) #b

	lw	$2, 128($sp) #b
$END16:
	move	$2,$2
	move	$sp,$fp
	lw	$31,132($sp)
	lw	$fp,136($sp)
	addiu	$sp,$sp,140
	j	$31

	nop

	move $sp,$fp
	lw $31,132($sp)
	lw $fp,136($sp)
	addiu $sp,$sp,140
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

