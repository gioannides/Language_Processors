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
	addiu	$sp,$sp,-132
	sw	$fp,128($sp)
	sw	$31,124($sp)
	move	$fp,$sp

	sw	$0, 120($sp) #b

	li	$2, 9
$END5:
	sw	$2, 116($sp) #a

	li	$2, 2
$END6:
	sw	$2, 112($sp) #c

$BEGIN7:
	lw	$2, 116($sp) #a
$END8:
	beq	$2,$0,$END7
	nop
$WHILE7:
	lw	$2, 120($sp) #b
$END10:
	lw	$3, 116($sp) #a

#df
	sw	$2,116($sp) #a

	b	$END7
	nop
	li	$2, 465
$END11:
	lw	$3, 112($sp) #c

#df
	sw	$2,112($sp) #c

	b $BEGIN7
	nop
$END7:
	lw	$2, 112($sp) #c
$END12:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

