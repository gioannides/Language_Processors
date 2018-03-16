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
$END3:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-136
	sw	$fp,132($sp)
	sw	$31,128($sp)
	move	$fp,$sp

	sw	$0, 124($sp) #b

	li	$2, 9
$END5:
	sw	$2, 120($sp) #a

	li	$2, 2
$END6:
	sw	$2, 116($sp) #c

$BEGIN7:
	lw	$2, 120($sp) #a
$END8:
	beq	$2,$0,$END7
	nop
$WHILE7:
	lw	$2, 124($sp) #b
$END10:
	lw	$3, 120($sp) #a

	sw	$2,120($sp) #a

	b	$END7
	nop
	li	$2, 465
$END11:
	lw	$3, 116($sp) #c

	sw	$2,116($sp) #c

	b $BEGIN7
	nop
$END7:
	lw	$2, 116($sp) #c
$END12:
	move	$2,$2
	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop

	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

