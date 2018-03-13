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

$END1:
$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-20
	sw	$fp,16($sp)
	sw	$31,12($sp)
	move	$fp,$sp

	li	$2, 1
$END3:
	sw	$2, 8($sp) #x

	lw	$2, 8($sp) #x
	li	$3, 1
	seq	$2, $2, $3
$END5:
	beq	$2,$0,$END4
	nop
$IF4:
	lw	$2, 8($sp) #x
	li	$3, 2
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END7:
	beq	$2,$0,$END6
	nop
$IF6:
	lw	$2, 8($sp) #x
	li	$3, 3
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END9:
	beq	$2,$0,$END8
	nop
$IF8:
	li	$2, 3
$END10:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

$END8:
$END6:
$END4:
	lw	$2, 8($sp) #x
	li	$3, 1
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END12:
	beq	$2,$0,$END11
	nop
$IF11:
	lw	$2, 8($sp) #x
	li	$3, 4
	seq	$2, $2, $3
$END14:
	beq	$2,$0,$END13
	nop
$IF13:
	li	$2, 4
$END15:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

$END13:
	lw	$2, 8($sp) #x
	li	$3, 5
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END17:
	beq	$2,$0,$END16
	nop
$IF16:
	lw	$2, 8($sp) #x
	li	$3, 6
	seq	$2, $2, $3
$END19:
	beq	$2,$0,$ELSE18
	nop
$IF18:
	li	$2, 6
$END20:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

	b $END18
	nop
$ELSE18:
	lw	$2, 8($sp) #x
	li	$3, 7
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END22:
	beq	$2,$0,$ELSE21
	nop
$IF21:
	li	$2, 7
$END23:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

	b $END21
	nop
$ELSE21:
	li	$2, 1
$END24:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

$END21:
$END18:
$END16:
$END11:
	li	$2, 99
$END25:
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

