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
	li	$3, 3
$END12:
	lw	$4, 16($sp) #x

#df
	sw	$3,16($sp) #x

	lw	$3, 16($sp) #x
$END13:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

	li	$3, 9
$END15:
	beq	$2,$3,$CASE14
	nop
	lw	$3, 16($sp) #x
$END16:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

	lw	$3, 16($sp) #x
$END17:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE8:
	lw	$2, 8($sp) #z
$END19:
	li	$3, 10
$END21:
	beq	$2,$3,$CASE20
	nop
	li	$3, 12
$END23:
	beq	$2,$3,$CASE22
	nop
	li	$3, 9
$END25:
	beq	$2,$3,$CASE24
	nop
$CASE8:
	li	$2, 8
$END26:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE10:
	li	$2, 90
$END27:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE14:
	li	$2, 100
$END28:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

$END18:
$CASE22:
	lw	$2, 12($sp) #y
$END30:
	lw	$3, 16($sp) #x
$END32:
	li	$4, 7
$END34:
	beq	$2,$3,$CASE33
	nop
	li	$4, 8
$END36:
	beq	$2,$3,$CASE35
	nop
$CASE8:
	li	$3, 56
$END37:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE10:
	li	$3, 3
$END38:
	lw	$4, 16($sp) #x

	add	$3, $3, $4
#df
	sw	$3,16($sp) #x

	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$END31:
	lw	$3, 8($sp) #z
$END40:
	li	$4, 7
$END42:
	beq	$2,$3,$CASE41
	nop
	li	$4, 88
$END44:
	beq	$2,$3,$CASE43
	nop
$CASE8:
	li	$3, 8
$END45:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE10:
	li	$3, 51
$END46:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$END39:
$CASE14:
	li	$3, 8
$END47:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE20:
	li	$3, 90
$END48:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE22:
	li	$3, 100
$END49:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

	lw	$2, 16($sp) #x
$END51:
	li	$3, 7
$END53:
	beq	$2,$3,$CASE52
	nop
	li	$3, 8
$END55:
	beq	$2,$3,$CASE54
	nop
$CASE8:
	li	$2, 56
$END56:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE10:
	li	$2, 3
$END57:
	lw	$3, 16($sp) #x

	add	$2, $2, $3
#df
	sw	$2,16($sp) #x

	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$END50:
	lw	$2, 8($sp) #z
$END59:
	li	$3, 7
$END61:
	beq	$2,$3,$CASE60
	nop
	li	$3, 88
$END63:
	beq	$2,$3,$CASE62
	nop
$CASE8:
	li	$2, 8
$END64:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE10:
	li	$2, 51
$END65:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$END58:
$CASE14:
	li	$2, 8
$END66:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE20:
	li	$2, 90
$END67:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE22:
	li	$2, 100
$END68:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$END29:
	li	$2, 3
$END69:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	lw	$2, 16($sp) #x
$END70:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE33:
	li	$2, 7
$END71:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	lw	$2, 16($sp) #x
$END72:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$DEFAULT73:
	li	$2, 98
$END74:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	lw	$2, 16($sp) #x
$END75:
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

