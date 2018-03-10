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
	addiu	$sp,$sp,-20
	sw	$fp,16($sp)
	move	$fp,$sp

	sw	$0, 0($sp) #k

	li	$2, 2
	li	$3, 5
	sle	$2, $2, $3
$END3:
	sw	$2, 4($sp) #x

	li	$2, 1
	li	$3, 3
	sgt	$2, $2, $3
$END6:
	li	$3, 44
	slt	$2, $2, $3
$END5:
	li	$3, 56
	li	$4, 45
	sle	$3, $3, $4
$END8:
	li	$4, 67
	xor	$3, $3, $4
	sltu	$3, $0, $3
$END7:
	sge	$2, $2, $3
$END4:
	sw	$2, 8($sp) #y

	lw	$2, 8($sp) #y
	li	$3, 8
	li	$4, 5
	seq	$3, $3, $4
$END11:
	addu	$2, $2, $3
$END10:
$END9:
	sw	$2, 12($sp) #z

	lw	$2, 12($sp) #z
$END12:
	lw	$3, 0($sp) #k

#df
	sw	$2,0($sp) #k

	lw	$2, 0($sp) #k
$END13:
	move	$sp,$fp
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

	move	$sp,$fp
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

