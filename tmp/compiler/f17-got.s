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
$END4:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-136
	sw	$fp,132($sp)
	sw	$31,128($sp)
	move	$fp,$sp

	sw	$0, 124($sp) #x

	sw	$0, 120($sp) #y

	li	$2, 2
$END6:
	sw	$2, 116($sp) #acc

	li	$2, 0
$END7:
	lw	$3, 124($sp) #x

	sw	$2,124($sp) #x

	li	$2, 0
$END8:
	lw	$3, 120($sp) #y

	sw	$2,120($sp) #y

$BEGIN9:
	lw	$2, 124($sp) #x
	li	$3, 6
	slt	$2, $2, $3
$END10:
	beq	$2,$0,$END9
	nop
$WHILE9:
	li	$2, 0
$END12:
	lw	$3, 120($sp) #y

	sw	$2,120($sp) #y

$BEGIN13:
	lw	$2, 120($sp) #y
	lw	$3, 124($sp) #x
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END14:
	beq	$2,$0,$END13
	nop
$WHILE13:
	lw	$2, 116($sp) #acc
	lw	$3, 120($sp) #y
	add	$2, $2, $3
$END16:
	lw	$3, 116($sp) #acc

	sw	$2,116($sp) #acc

	lw	$2, 120($sp) #y
	li	$3, 1
	add	$2, $2, $3
$END17:
	lw	$3, 120($sp) #y

	sw	$2,120($sp) #y

	b $BEGIN13
	nop
$END13:
	lw	$2, 124($sp) #x
	li	$3, 2
	add	$2, $2, $3
$END18:
	lw	$3, 124($sp) #x

	sw	$2,124($sp) #x

	b $BEGIN9
	nop
$END9:
	lw	$2, 116($sp) #acc
	lw	$3, 124($sp) #x
	sub	$2, $2, $3
	lw	$3, 120($sp) #y
	sub	$2, $2, $3
$END19:
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

