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
	li	$3, 4
$END9:
	beq	$2,$3,$CASE8
	nop
	li	$3, 8
$END11:
	beq	$2,$3,$CASE10
	nop
	li	$3, 9
$END13:
	beq	$2,$3,$CASE12
	nop
	li	$3, 0
$END14:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

	lw	$3, 16($sp) #x
$END15:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE8:
	lw	$2, 8($sp) #z
$END17:
	li	$3, 10
$END19:
	beq	$2,$3,$CASE18
	nop
	li	$3, 12
$END21:
	beq	$2,$3,$CASE20
	nop
	li	$3, 9
$END23:
	beq	$2,$3,$CASE22
	nop
$CASE8:
	li	$2, 8
$END24:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE10:
	li	$2, 90
$END25:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE12:
	li	$2, 100
$END26:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

$END16:
$CASE20:
	lw	$2, 12($sp) #y
$END28:
	lw	$3, 16($sp) #x
$END30:
	li	$4, 7
$END32:
	beq	$2,$3,$CASE31
	nop
	li	$4, 8
$END34:
	beq	$2,$3,$CASE33
	nop
$CASE8:
	lw	$3, 12($sp) #y
$END35:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE10:
	li	$3, 3
$END36:
	lw	$4, 16($sp) #x

#df
	sw	$3,16($sp) #x

$END29:
$CASE12:
	lw	$3, 8($sp) #z
$END37:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE18:
	lw	$3, 12($sp) #y
$END38:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE20:
	li	$3, 9
$END39:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

	lw	$2, 16($sp) #x
$END41:
	li	$3, 7
$END43:
	beq	$2,$3,$CASE42
	nop
	li	$3, 8
$END45:
	beq	$2,$3,$CASE44
	nop
$CASE8:
	lw	$2, 12($sp) #y
$END46:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE10:
	li	$2, 3
$END47:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

$END40:
$CASE12:
	lw	$2, 8($sp) #z
$END48:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE18:
	lw	$2, 12($sp) #y
$END49:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE20:
	li	$2, 9
$END50:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$END27:
$CASE31:
	li	$2, 7
$END51:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	li	$2, 0
$END52:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$DEFAULT53:
	li	$2, 98
$END54:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	lw	$2, 16($sp) #x
$END55:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

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

