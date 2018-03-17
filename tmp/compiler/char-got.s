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
	addiu $sp,$sp,-124
	sw $fp,120($sp)
	sw $31,116($sp)
	move $fp,$sp

	li	$2, 97
$END3:
	sb	$2,112($sp) #c
	lb	$2, 112($sp) #c
$END5:
$FOR4:
	lb	$2, 112($sp) #c
	li	$3, 122
	slt	$2, $2, $3
$END6:
	beq	$2,$0,$END4
	nop
	li	$2, 1
$END8:
	lb	$3, 112($sp) #c
	add	$2, $2, $3
	sb	$2,112($sp) #c
	lb	$2, 112($sp) #c
	addi	$3, $2, 1 #++
	sb	$3,112($sp) #c
$END9:
	b $FOR4
	nop
$END4:
	lb	$2, 112($sp) #c
$END10:
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

