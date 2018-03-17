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
$END5:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-124
	sw $fp,120($sp)
	sw $31,116($sp)
	move $fp,$sp

	li	$2, 1
$END7:
	sw	$2,112($sp) #a

	lw	$2, 112($sp) #a
	addi	$3, $2, -1 #--
	sw	$3,112($sp) #a

$END8:
	lw	$2, 112($sp) #a
	addi	$3, $2, -1 #--
	sw	$3,112($sp) #a

$END9:
	lw	$2, 112($sp) #a
	addi	$3, $2, -1 #--
	sw	$3,112($sp) #a

$END10:
	lw	$2, 112($sp) #a
	addi	$3, $2, -1 #--
	sw	$3,112($sp) #a

$END11:
	lw	$2, 112($sp) #a
$END12:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

	move $sp,$fp
	lw $31,116($sp)
	lw $fp,120($sp)
	addiu $sp,$sp,124
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

