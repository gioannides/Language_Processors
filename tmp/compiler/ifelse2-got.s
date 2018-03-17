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
$END2:
$END3:
$END5:
$IF4:
$END7:
$IF6:
$END8:
$ELSE6:
$END9:
$END6:
$END4:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-132
	sw $fp,128($sp)
	sw $31,124($sp)
	move $fp,$sp

	li	$2, 0
$END11:
	sw	$2,120($sp) #a

	li	$2, 0
$END12:
	sw	$2,116($sp) #b

	li	$2, 3
$END13:
	sw	$2,112($sp) #x

	lw	$2, 120($sp) #a
$END15:
	beq	$2,$0,$END14
	nop
$IF14:
	lw	$2, 116($sp) #b
$END17:
	beq	$2,$0,$ELSE16
	nop
$IF16:
	li	$2, 5
$END18:
	lw	$3, 112($sp) #x

	sw	$2,112($sp) #x

	b $END16
	nop
$ELSE16:
	li	$2, 10
$END19:
	lw	$3, 112($sp) #x

	sw	$2,112($sp) #x

$END16:
$END14:
	lw	$2, 112($sp) #x
$END20:
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

