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
$END3:
$END4:
$END5:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-136
	sw	$fp,132($sp)
	sw	$31,128($sp)
	move	$fp,$sp

	sw	$0, 124($sp) #k

	li	$2, 90
	li	$3, 8
	li	$4, 5
	seq	$3, $3, $4
$END8:
	add	$2, $2, $3
$END7:
	sb	$2, 120($sp) #z

	li	$2, 2
	li	$3, 5
	sle	$2, $2, $3
$END9:
	sb	$2, 116($sp) #x

	li	$2, 1
	li	$3, 3
	sgt	$2, $2, $3
$END12:
	li	$3, 44
	slt	$2, $2, $3
$END11:
	li	$3, 56
	li	$4, 45
	sle	$3, $3, $4
$END14:
	li	$4, 67
	xor	$3, $3, $4
	sltu	$3, $0, $3
$END13:
	lb	$4, 116($sp) #x
	mult	$3, $4
	mflo	$3
	lb	$4, 120($sp) #z
	div	$3, $4
	mflo	$3
	li	$4, 23
	sub	$3, $3, $4
	sge	$2, $2, $3
	li	$3, 0xFFFF
$END15:
	li	$4, 7
	div	$3, $4
	mfhi	$3
	xor	$2, $2, $3
$END10:
	sw	$2, 112($sp) #y

	lb	$2, 120($sp) #z
$END16:
	lw	$3, 124($sp) #k

#df
	sw	$2,124($sp) #k

	lw	$2, 124($sp) #k
$END17:
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

