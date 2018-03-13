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
$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-24
	sw	$fp,20($sp)
	sw	$31,16($sp)
	move	$fp,$sp

	li	$2, 1
$END3:
	sw	$2, 12($sp) #x

	li	$2, 0
$END4:
	sw	$2, 8($sp) #y

	lw	$2, 12($sp) #x
$END6:
$FOR5:
	lw	$2, 12($sp) #x
	li	$3, 50
	sle	$2, $2, $3
$END7:
	beq	$2,$0,$END5
	nop
	lw	$2, 12($sp) #x
	li	$3, 33
	seq	$2, $2, $3
$END9:
	beq	$2,$0,$END8
	nop
$IF8:
	lw	$3, 12($sp) #x

	addiu	$2, $3,1
#df
	sw	$2,12($sp) #x

$END10:
	b $FOR5
	nop
$END8:
	lw	$3, 8($sp) #y

	addiu	$2, $3,1
#df
	sw	$2,8($sp) #y

$END11:
	lw	$3, 12($sp) #x

	addiu	$2, $3,1
#df
	sw	$2,12($sp) #x

$END12:
	b $FOR5
	nop
$END5:
	lw	$2, 8($sp) #y
$END13:
	move	$2,$2
	move	$sp,$fp
	lw	$31,16($sp)
	lw	$fp,20($sp)
	addiu	$sp,$sp,24
	j	$31

	nop

	move	$sp,$fp
	lw	$31,16($sp)
	lw	$fp,20($sp)
	addiu	$sp,$sp,24
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

