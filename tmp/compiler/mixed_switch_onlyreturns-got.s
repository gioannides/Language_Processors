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

	lw	$3, 16($sp) #x
$END23:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

	li	$3, 12
$END25:
	beq	$2,$3,$CASE24
	nop
	li	$3, 9
$END26:
	lw	$4, 16($sp) #x

#df
	sw	$3,16($sp) #x

	lw	$3, 16($sp) #x
$END27:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

	li	$3, 9
$END29:
	beq	$2,$3,$CASE28
	nop
$CASE8:
	li	$2, 8
$END30:
	lw	$3, 8($sp) #z

#df
	sw	$2,8($sp) #z

	li	$2, 9
$END31:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	lw	$2, 16($sp) #x
$END32:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE10:
	li	$2, 90
$END33:
	lw	$3, 8($sp) #z

#df
	sw	$2,8($sp) #z

	li	$2, 9
$END34:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	lw	$2, 16($sp) #x
$END35:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE14:
	li	$2, 100
$END36:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

$END18:
$CASE24:
	lw	$2, 12($sp) #y
$END38:
	li	$3, 9
$END40:
	beq	$2,$3,$CASE39
	nop
	lw	$3, 8($sp) #z
$END42:
	li	$4, 7
$END44:
	beq	$2,$3,$CASE43
	nop
	lw	$4, 8($sp) #z
$END45:
	move	$2,$4
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

	li	$4, 88
$END47:
	beq	$2,$3,$CASE46
	nop
$CASE8:
	li	$3, 8
$END48:
	lw	$4, 8($sp) #z

#df
	sw	$3,8($sp) #z

	lw	$3, 8($sp) #z
$END49:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE10:
	li	$3, 51
$END50:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$END41:
$CASE14:
	li	$3, 8
$END51:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE20:
	li	$3, 90
$END52:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE24:
	li	$3, 100
$END53:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE8:
	lw	$2, 16($sp) #x
$END55:
	li	$3, 7
$END57:
	beq	$2,$3,$CASE56
	nop
	lw	$3, 16($sp) #x
$END58:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

	li	$3, 8
$END60:
	beq	$2,$3,$CASE59
	nop
$CASE8:
	li	$2, 56
$END61:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	lw	$2, 16($sp) #x
$END62:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE10:
	li	$2, 3
$END63:
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

$END54:
	lw	$2, 8($sp) #z
$END65:
	li	$3, 7
$END67:
	beq	$2,$3,$CASE66
	nop
	lw	$3, 8($sp) #z
$END68:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

	li	$3, 88
$END70:
	beq	$2,$3,$CASE69
	nop
$CASE8:
	li	$2, 8
$END71:
	lw	$3, 8($sp) #z

#df
	sw	$2,8($sp) #z

	lw	$2, 8($sp) #z
$END72:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE10:
	li	$2, 51
$END73:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$END64:
$CASE14:
	li	$2, 8
$END74:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE20:
	li	$2, 90
$END75:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE24:
	li	$2, 100
$END76:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$END37:
	li	$2, 3
$END77:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	lw	$2, 16($sp) #x
$END78:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE39:
	li	$2, 7
$END79:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	lw	$2, 16($sp) #x
$END80:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$DEFAULT81:
	li	$2, 98
$END82:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	lw	$2, 16($sp) #x
$END83:
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

