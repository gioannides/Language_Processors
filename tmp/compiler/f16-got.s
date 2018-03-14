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

$END2:
$IF1:
$END4:
$IF3:
$END5:
$ELSE3:
$END6:
$END3:
$END1:
$END7:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-120
	sw	$fp,116($sp)
	sw	$31,112($sp)
	move	$fp,$sp

	li	$2, 0
$END10:
	beq	$2,$0,$END9
	nop
$IF9:
	li	$2, 5
$END12:
	beq	$2,$0,$ELSE11
	nop
$IF11:
	li	$2, 10
$END13:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

	b $END11
	nop
$ELSE11:
	li	$2, 13
$END14:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

$END11:
$END9:
	li	$2, 11
$END15:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

