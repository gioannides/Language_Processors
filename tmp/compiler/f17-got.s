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
	addiu	$sp,$sp,-28
	sw	$fp,24($sp)
	sw	$31,20($sp)
	move	$fp,$sp

	sw	$0, 16($sp) #x

	sw	$0, 12($sp) #y

	li	$2, 2
$END3:
	sw	$2, 8($sp) #acc

	li	$2, 0
$END4:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	li	$2, 0
$END5:
	lw	$3, 12($sp) #y

#df
	sw	$2,12($sp) #y

$BEGIN6:
	lw	$2, 16($sp) #x
	li	$3, 6
	slt	$2, $2, $3
$END7:
	beq	$2,$0,$END6
	nop
$WHILE6:
	li	$2, 0
$END8:
	lw	$3, 12($sp) #y

#df
	sw	$2,12($sp) #y

$BEGIN9:
	lw	$2, 12($sp) #y
	lw	$3, 16($sp) #x
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END10:
	beq	$2,$0,$END9
	nop
$WHILE9:
	lw	$2, 8($sp) #acc
	lw	$3, 12($sp) #y
	add	$2, $2, $3
$END11:
	lw	$3, 8($sp) #acc

#df
	sw	$2,8($sp) #acc

	lw	$2, 12($sp) #y
	li	$3, 1
	add	$2, $2, $3
$END12:
	lw	$3, 12($sp) #y

#df
	sw	$2,12($sp) #y

	b $BEGIN9
	nop
$END9:
	lw	$2, 16($sp) #x
	li	$3, 2
	add	$2, $2, $3
$END13:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	b $BEGIN6
	nop
$END6:
	lw	$2, 8($sp) #acc
	lw	$3, 16($sp) #x
	sub	$2, $2, $3
	lw	$3, 12($sp) #y
	sub	$2, $2, $3
$END14:
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

