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

	li	$2, 8
$END3:
	sw	$2, 16($sp) #x

	li	$2, 9
$END4:
	sw	$2, 12($sp) #y

	li	$2, 88
$END5:
	sw	$2, 8($sp) #z

	lw	$2, 16($sp) #x
$END7:
	li	$3, 8
$END9:
	beq	$2,$3,$CASE8
	nop
$CASE8:
	lw	$2, 12($sp) #y
$END11:
	lw	$3, 16($sp) #x
$END13:
	li	$4, 7
$END15:
	beq	$2,$3,$CASE14
	nop
	li	$4, 8
$END17:
	beq	$2,$3,$CASE16
	nop
$CASE8:
	lw	$3, 12($sp) #y
$END18:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE14:
	lw	$3, 16($sp) #x
	li	$4, 3
	add	$3, $3, $4
$END19:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$END12:
$CASE16:
	lw	$3, 8($sp) #z
$END20:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

	lw	$2, 16($sp) #x
$END22:
	li	$3, 7
$END24:
	beq	$2,$3,$CASE23
	nop
	li	$3, 8
$END26:
	beq	$2,$3,$CASE25
	nop
$CASE8:
	lw	$2, 12($sp) #y
$END27:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE14:
	lw	$2, 16($sp) #x
	li	$3, 3
	add	$2, $2, $3
$END28:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$END21:
$CASE16:
	lw	$2, 8($sp) #z
$END29:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE23:
	lw	$2, 12($sp) #y
$END30:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE25:
	li	$2, 9
$END31:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$END10:
$END6:
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

