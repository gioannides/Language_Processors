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
$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-128
	sw	$fp,124($sp)
	sw	$31,120($sp)
	move	$fp,$sp

	li	$2, 1
$END4:
	sw	$2, 116($sp) #x

	li	$2, 0
$END5:
	sw	$2, 112($sp) #y

$BEGIN6:
	lw	$2, 116($sp) #x
	li	$3, 50
	slt	$2, $2, $3
$END7:
	beq	$2,$0,$END6
	nop
$WHILE6:
	lw	$2, 116($sp) #x
	addi	$3, $2, 1 #++
	sw	$3,116($sp) #x

$END9:
	lw	$2, 116($sp) #x
	li	$3, 33
	seq	$2, $2, $3
$END11:
	beq	$2,$0,$END10
	nop
$IF10:
	lw	$2, 116($sp) #x
	li	$3, 50
	slt	$2, $2, $3
$END13:
	b $BEGIN6
	nop
$END10:
	lw	$2, 112($sp) #y
	addi	$3, $2, 1 #++
	sw	$3,112($sp) #y

$END14:
	b $BEGIN6
	nop
$END6:
	lw	$2, 112($sp) #y
$END15:
	move	$2,$2
	move	$sp,$fp
	lw	$31,120($sp)
	lw	$fp,124($sp)
	addiu	$sp,$sp,128
	j	$31

	nop

	move	$sp,$fp
	lw	$31,120($sp)
	lw	$fp,124($sp)
	addiu	$sp,$sp,128
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

