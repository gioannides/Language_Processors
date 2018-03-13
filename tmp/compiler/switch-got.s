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
$END1:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-20
	sw	$fp,16($sp)
	sw	$31,12($sp)
	move	$fp,$sp

	li	$2, 8
$END2:
	sw	$2, 8($sp) #x

	lw	$2, 8($sp) #x
$END4:
	li	$3, 4
$END6:
	beq	$2,$3,$CASE5
	nop
	li	$3, 8
$END8:
	beq	$2,$3,$CASE7
	nop
	li	$3, 9
$END10:
	beq	$2,$3,$CASE9
	nop
$CASE5:
	li	$2, 2
$END11:
	lw	$3, 8($sp) #x

#df
	sw	$2,8($sp) #x

	b	$END3
	nop
$CASE7:
	li	$2, 3
$END12:
	lw	$3, 8($sp) #x

#df
	sw	$2,8($sp) #x

	b	$END3
	nop
$CASE9:
	li	$2, 7
$END13:
	lw	$3, 8($sp) #x

#df
	sw	$2,8($sp) #x

	b	$END3
	nop
$DEFAULT14:
	li	$2, 98
$END15:
	lw	$3, 8($sp) #x

#df
	sw	$2,8($sp) #x

	b	$END3
	nop
$END3:
	lw	$2, 8($sp) #x
$END16:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

