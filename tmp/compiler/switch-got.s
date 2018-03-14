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
$END5:
$END7:
$END8:
$END9:
$END10:
$END12:
$END13:
$END14:
$END15:
$END4:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-132
	sw	$fp,128($sp)
	sw	$31,124($sp)
	move	$fp,$sp

	li	$2, 8
$END17:
	sw	$2, 120($sp) #x

	li	$2, 9
$END18:
	sw	$2, 116($sp) #y

	li	$2, 88
$END19:
	sw	$2, 112($sp) #z

	lw	$2, 120($sp) #x
$END21:
	li	$3, 4
$END24:
	beq	$2,$3,$CASE23
	nop
	li	$3, 8
$END26:
	beq	$2,$3,$CASE25
	nop
	li	$3, 3
$END27:
	lw	$4, 120($sp) #x

#df
	sw	$3,120($sp) #x

	lw	$3, 120($sp) #x
$END28:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	li	$3, 9
$END30:
	beq	$2,$3,$CASE29
	nop
	lw	$3, 120($sp) #x
$END31:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	lw	$3, 120($sp) #x
$END32:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE23:
	lw	$2, 112($sp) #z
$END35:
	li	$3, 10
$END38:
	beq	$2,$3,$CASE37
	nop
	li	$3, 12
$END40:
	beq	$2,$3,$CASE39
	nop
	li	$3, 9
$END42:
	beq	$2,$3,$CASE41
	nop
$CASE23:
	li	$2, 8
$END44:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE25:
	li	$2, 90
$END45:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE29:
	li	$2, 100
$END46:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

$END34:
$CASE39:
	lw	$2, 116($sp) #y
$END48:
	lw	$3, 120($sp) #x
$END51:
	li	$4, 7
$END54:
	beq	$2,$3,$CASE53
	nop
	li	$4, 8
$END56:
	beq	$2,$3,$CASE55
	nop
$CASE23:
	li	$3, 56
$END58:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE25:
	li	$3, 3
$END59:
	lw	$4, 120($sp) #x

	add	$3, $3, $4
#df
	sw	$3,120($sp) #x

	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END50:
	lw	$3, 112($sp) #z
$END61:
	li	$4, 7
$END64:
	beq	$2,$3,$CASE63
	nop
	li	$4, 88
$END66:
	beq	$2,$3,$CASE65
	nop
$CASE23:
	li	$3, 8
$END68:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE25:
	li	$3, 51
$END69:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END60:
$CASE29:
	li	$3, 8
$END70:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE37:
	li	$3, 90
$END71:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE39:
	li	$3, 100
$END72:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	lw	$2, 120($sp) #x
$END75:
	li	$3, 7
$END78:
	beq	$2,$3,$CASE77
	nop
	li	$3, 8
$END80:
	beq	$2,$3,$CASE79
	nop
$CASE23:
	li	$2, 56
$END82:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE25:
	li	$2, 3
$END83:
	lw	$3, 120($sp) #x

	add	$2, $2, $3
#df
	sw	$2,120($sp) #x

	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END74:
	lw	$2, 112($sp) #z
$END85:
	li	$3, 7
$END88:
	beq	$2,$3,$CASE87
	nop
	li	$3, 88
$END90:
	beq	$2,$3,$CASE89
	nop
$CASE23:
	li	$2, 8
$END92:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE25:
	li	$2, 51
$END93:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END84:
$CASE29:
	li	$2, 8
$END94:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE37:
	li	$2, 90
$END95:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE39:
	li	$2, 100
$END96:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END47:
	li	$2, 3
$END97:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	lw	$2, 120($sp) #x
$END98:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE53:
	li	$2, 7
$END99:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	lw	$2, 120($sp) #x
$END100:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$DEFAULT101:
	li	$2, 98
$END102:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	lw	$2, 120($sp) #x
$END103:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END20:
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

