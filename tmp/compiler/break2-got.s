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

$END1:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-128
	sw $fp,124($sp)
	sw $31,120($sp)
	move $fp,$sp

	sw	$0, 116($sp) #x

	li	$2, 0
$END3:
	sw	$2,112($sp) #y

	li	$2, 10
	sub	$2,$0,$2#-
$END5:
	lw	$3, 116($sp) #x

	sw	$2,116($sp) #x

$FOR4:
	lw	$2, 116($sp) #x
	li	$3, 10
	slt	$2, $2, $3
$END6:
	beq	$2,$0,$END4
	nop
	lw	$2, 116($sp) #x
$END9:
	beq	$2,$0,$END8
	nop
$IF8:
	b	$END4
	nop
$END8:
	lw	$2, 112($sp) #y
	lw	$3, 116($sp) #x
	add	$2, $2, $3
$END11:
	lw	$3, 112($sp) #y

	sw	$2,112($sp) #y

	lw	$2, 116($sp) #x
	li	$3, 1
	add	$2, $2, $3
$END12:
	lw	$3, 116($sp) #x

	sw	$2,116($sp) #x

	b $FOR4
	nop
$END4:
	lw	$2, 112($sp) #y
$END13:
	move	$2,$2
	move	$sp,$fp
	lw	$31,120($sp)
	lw	$fp,124($sp)
	addiu	$sp,$sp,128
	j	$31

	nop

	move $sp,$fp
	lw $31,120($sp)
	lw $fp,124($sp)
	addiu $sp,$sp,128
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

