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

$END0:
$END1:
$END2:
$END3:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-28
	sw	$fp,24($sp)
	sw	$31,20($sp)
	move	$fp,$sp

	li	$2, 0
$END4:
	sw	$2, 16($sp) #a

	li	$2, 0
$END5:
	sw	$2, 12($sp) #b

	li	$2, 3
$END6:
	sw	$2, 8($sp) #x

	lw	$2, 16($sp) #a
$END8:
	beq	$2,$0,$END7
	nop
$IF7:
	lw	$2, 12($sp) #b
$END10:
	beq	$2,$0,$ELSE9
	nop
$IF9:
	li	$2, 5
$END11:
	lw	$3, 8($sp) #x

#df
	sw	$2,8($sp) #x

	b $END9
	nop
$ELSE9:
	li	$2, 10
$END12:
	lw	$3, 8($sp) #x

#df
	sw	$2,8($sp) #x

$END9:
$END7:
	lw	$2, 8($sp) #x
$END13:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

