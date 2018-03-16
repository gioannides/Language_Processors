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
$END4:
$END5:
$END6:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-128
	sw	$fp,124($sp)
	sw	$31,120($sp)
	move	$fp,$sp

	li	$2, 1
$END8:
	sw	$2, 116($sp) #a

	lw	$2, 116($sp) #a
	addi	$3, $2, -1 #--
	sw	$3, 116($sp) #a
$END9:
	lw	$2, 116($sp) #a
	addi	$3, $2, -1 #--
	sw	$3, 116($sp) #a
$END10:
	lw	$2, 116($sp) #a
	addi	$3, $2, -1 #--
	sw	$3, 116($sp) #a
$END11:
	lw	$2, 116($sp) #a
	addi	$3, $2, -1 #--
	sw	$3, 116($sp) #a
$END12:
	lw	$2, 116($sp) #a
$END13:
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

