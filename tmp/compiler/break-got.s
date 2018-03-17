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

$END1:
$END2:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-132
	sw $fp,128($sp)
	sw $31,124($sp)
	move $fp,$sp

	sw	$0, 120($sp) #b

	li	$2, 9
$END4:
	sw	$2,116($sp) #a

	li	$2, 2
$END5:
	sw	$2,112($sp) #c

$BEGIN6:
	lw	$2, 116($sp) #a
$END7:
	beq	$2,$0,$END6
	nop
$WHILE6:
	lw	$2, 120($sp) #b
$END9:
	lw	$3, 116($sp) #a

	sw	$2,116($sp) #a

	b	$END6
	nop
	li	$2, 465
$END10:
	lw	$3, 112($sp) #c

	sw	$2,112($sp) #c

	b $BEGIN6
	nop
$END6:
	lw	$2, 112($sp) #c
$END11:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	move $sp,$fp
	lw $31,124($sp)
	lw $fp,128($sp)
	addiu $sp,$sp,132
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

