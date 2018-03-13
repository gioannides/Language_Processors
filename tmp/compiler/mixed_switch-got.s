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
	li	$3, 9
$END22:
	lw	$4, 16($sp) #x

#df
	sw	$3,16($sp) #x

	li	$3, 12
$END24:
	beq	$2,$3,$CASE23
	nop
	li	$3, 9
$END25:
	lw	$4, 16($sp) #x

#df
	sw	$3,16($sp) #x

	li	$3, 9
$END27:
	beq	$2,$3,$CASE26
	nop
$CASE8:
	li	$2, 8
$END28:
	lw	$3, 8($sp) #z

#df
	sw	$2,8($sp) #z

	li	$2, 9
$END29:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

$CASE10:
	li	$2, 90
$END30:
	lw	$3, 8($sp) #z

#df
	sw	$2,8($sp) #z

	li	$2, 9
$END31:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

$CASE14:
	li	$2, 100
$END32:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

$END18:
$CASE23:
	lw	$2, 12($sp) #y
$END34:
	li	$3, 9
$END36:
	beq	$2,$3,$CASE35
	nop
	lw	$3, 8($sp) #z
$END38:
	li	$4, 7
$END40:
	beq	$2,$3,$CASE39
	nop
	li	$4, 88
$END42:
	beq	$2,$3,$CASE41
	nop
$CASE8:
	li	$3, 8
$END43:
	lw	$4, 8($sp) #z

#df
	sw	$3,8($sp) #z

$CASE10:
	lw	$3, 16($sp) #x
$END45:
	beq	$2,$0,$END44
	nop
$IF44:
	li	$3, 51
$END46:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$END44:
$END37:
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

$CASE23:
	li	$3, 100
$END49:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE8:
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
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

$CASE10:
	li	$2, 3
$END57:
	lw	$3, 16($sp) #x

	add	$2, $2, $3
#df
	sw	$2,16($sp) #x

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
	lw	$3, 8($sp) #z

#df
	sw	$2,8($sp) #z

$CASE10:
	lw	$2, 16($sp) #x
$END66:
	beq	$2,$0,$END65
	nop
$IF65:
	li	$2, 51
$END67:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$END65:
$END58:
$CASE14:
	li	$2, 8
$END68:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE20:
	li	$2, 90
$END69:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE23:
	li	$2, 100
$END70:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$END33:
	li	$2, 3
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

$CASE35:
	li	$2, 7
$END73:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	lw	$2, 16($sp) #x
$END74:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$DEFAULT75:
	li	$2, 98
$END76:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	lw	$2, 16($sp) #x
$END77:
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

