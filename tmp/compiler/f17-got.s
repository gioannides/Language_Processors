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
$END3:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-132
	sw $fp,128($sp)
	sw $31,124($sp)
	move $fp,$sp

	sw	$0, 120($sp) #x

	sw	$0, 116($sp) #y

	li	$2, 2
$END5:
	sw	$2,112($sp) #acc

	li	$2, 0
$END6:
	lw	$3, 120($sp) #x

	sw	$2,120($sp) #x

	li	$2, 0
$END7:
	lw	$3, 116($sp) #y

	sw	$2,116($sp) #y

$BEGIN8:
	lw	$2, 120($sp) #x
	li	$3, 6
	slt	$2, $2, $3
$END9:
	beq	$2,$0,$END8
	nop
$WHILE8:
	li	$2, 0
$END11:
	lw	$3, 116($sp) #y

	sw	$2,116($sp) #y

$BEGIN12:
	lw	$2, 116($sp) #y
	lw	$3, 120($sp) #x
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END13:
	beq	$2,$0,$END12
	nop
$WHILE12:
	lw	$2, 112($sp) #acc
	lw	$3, 116($sp) #y
	add	$2, $2, $3
$END15:
	lw	$3, 112($sp) #acc

	sw	$2,112($sp) #acc

	lw	$2, 116($sp) #y
	li	$3, 1
	add	$2, $2, $3
$END16:
	lw	$3, 116($sp) #y

	sw	$2,116($sp) #y

	b $BEGIN12
	nop
$END12:
	lw	$2, 120($sp) #x
	li	$3, 2
	add	$2, $2, $3
$END17:
	lw	$3, 120($sp) #x

	sw	$2,120($sp) #x

	b $BEGIN8
	nop
$END8:
	lw	$2, 112($sp) #acc
	lw	$3, 120($sp) #x
	sub	$2, $2, $3
	lw	$3, 116($sp) #y
	sub	$2, $2, $3
$END18:
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

