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

	li	$2, 8
$END4:
	sw	$2, 16($sp) #x

	li	$2, 9
$END5:
	sw	$2, 12($sp) #y

	li	$2, 88
$END6:
	sw	$2, 8($sp) #z

	lw	$2, 16($sp) #x
$END8:
	li	$3, 1
$END10:
	beq	$2,$3,$CASE9
	nop
	li	$3, 2
$END12:
	beq	$2,$3,$CASE11
	nop
	li	$3, 4
$END14:
	beq	$2,$3,$CASE13
	nop
	li	$3, 8
$END16:
	beq	$2,$3,$CASE15
	nop
$CASE9:
	li	$2, 21
$END17:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

$CASE11:
	li	$2, 55
$END18:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

$CASE13:
	li	$2, 66
$END19:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

$CASE15:
	li	$2, 87
$END20:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

$END7:
	lw	$2, 16($sp) #x
$END21:
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

