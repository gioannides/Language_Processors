	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


$END0:

	.data
	.globl	f
	.align	2
	.type	f, @object
	.size	f, 4
f:
	.word	6


	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END1:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-20
	sw	$fp,16($sp)
	sw	$31,12($sp)
	move	$fp,$sp

	li	$2, 1
$END2:
	sw	$2, 8($sp) #x

	lw	$2, 8($sp) #x
	li	$3, 1
	seq	$2, $2, $3
$END4:
	beq	$2,$0,$END3
	nop
$IF3:
	lw	$2, 8($sp) #x
	li	$3, 2
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END6:
	beq	$2,$0,$END5
	nop
$IF5:
	lw	$2, 8($sp) #x
	li	$3, 3
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END8:
	beq	$2,$0,$END7
	nop
$IF7:
	li	$2, 3
$END9:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

$END7:
$END5:
$END3:
	lw	$2, 8($sp) #x
	li	$3, 1
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END11:
	beq	$2,$0,$END10
	nop
$IF10:
	lw	$2, 8($sp) #x
	li	$3, 4
	seq	$2, $2, $3
$END13:
	beq	$2,$0,$END12
	nop
$IF12:
	li	$2, 4
$END14:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

$END12:
	lw	$2, 8($sp) #x
	li	$3, 5
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END16:
	beq	$2,$0,$END15
	nop
$IF15:
	lw	$2, 8($sp) #x
	li	$3, 6
	seq	$2, $2, $3
$END18:
	beq	$2,$0,$ELSE17
	nop
$IF17:
	li	$2, 6
$END19:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

	b $END17
	nop
$ELSE17:
	lw	$2, 8($sp) #x
	li	$3, 7
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END21:
	beq	$2,$0,$ELSE20
	nop
$IF20:
	li	$2, 7
$END22:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

	b $END20
	nop
$ELSE20:
	li	$2, 1
$END23:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

$END20:
$END17:
$END15:
$END10:
	li	$2, 99
$END24:
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

