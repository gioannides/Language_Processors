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

	li	$2, 0
$END3:
	sw	$2,116($sp) #j

	sw	$0, 112($sp) #i

	lw	$2, 112($sp) #i
$END5:
$FOR4:
	lw	$2, 112($sp) #i
	li	$3, 10
	slt	$2, $2, $3
$END6:
	beq	$2,$0,$END4
	nop
	lw	$2, 112($sp) #i
	li	$3, 5
	seq	$2, $2, $3
$END9:
	beq	$2,$0,$END8
	nop
$IF8:
	lw	$2, 112($sp) #i
	addi	$3, $2, 1 #++
	sw	$3,112($sp) #i

$END11:
	b $FOR4
	nop
$END8:
	lw	$2, 112($sp) #i
$END12:
	lw	$3, 116($sp) #j

	add	$2, $2, $3
	sw	$2,116($sp) #j

	lw	$2, 112($sp) #i
	addi	$3, $2, 1 #++
	sw	$3,112($sp) #i

$END13:
	b $FOR4
	nop
$END4:
	lw	$2, 116($sp) #j
$END14:
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

