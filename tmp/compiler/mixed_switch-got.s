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
	li	$3, 9
$END39:
	lw	$4, 120($sp) #x

#df
	sw	$3,120($sp) #x

	li	$3, 12
$END41:
	beq	$2,$3,$CASE40
	nop
	li	$3, 9
$END42:
	lw	$4, 120($sp) #x

#df
	sw	$3,120($sp) #x

	li	$3, 9
$END44:
	beq	$2,$3,$CASE43
	nop
$CASE23:
	li	$2, 8
$END46:
	lw	$3, 112($sp) #z

#df
	sw	$2,112($sp) #z

	li	$2, 9
$END47:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

$CASE25:
	li	$2, 90
$END48:
	lw	$3, 112($sp) #z

#df
	sw	$2,112($sp) #z

	li	$2, 9
$END49:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

$CASE29:
	li	$2, 100
$END50:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

$END34:
$CASE40:
	lw	$2, 116($sp) #y
$END52:
	li	$3, 9
$END55:
	beq	$2,$3,$CASE54
	nop
	lw	$3, 112($sp) #z
$END57:
	li	$4, 7
$END60:
	beq	$2,$3,$CASE59
	nop
	li	$4, 88
$END62:
	beq	$2,$3,$CASE61
	nop
$CASE23:
	li	$3, 8
$END64:
	lw	$4, 112($sp) #z

#df
	sw	$3,112($sp) #z

$CASE25:
	lw	$3, 120($sp) #x
$END66:
	beq	$2,$0,$END65
	nop
$IF65:
	li	$3, 51
$END68:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END65:
$END56:
$CASE29:
	li	$3, 8
$END69:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE37:
	li	$3, 90
$END70:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE40:
	li	$3, 100
$END71:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE23:
	lw	$2, 120($sp) #x
$END74:
	li	$3, 7
$END77:
	beq	$2,$3,$CASE76
	nop
	li	$3, 8
$END79:
	beq	$2,$3,$CASE78
	nop
$CASE23:
	li	$2, 56
$END81:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

$CASE25:
	li	$2, 3
$END82:
	lw	$3, 120($sp) #x

	add	$2, $2, $3
#df
	sw	$2,120($sp) #x

$END73:
	lw	$2, 112($sp) #z
$END84:
	li	$3, 7
$END87:
	beq	$2,$3,$CASE86
	nop
	li	$3, 88
$END89:
	beq	$2,$3,$CASE88
	nop
$CASE23:
	li	$2, 8
$END91:
	lw	$3, 112($sp) #z

#df
	sw	$2,112($sp) #z

$CASE25:
	lw	$2, 120($sp) #x
$END93:
	beq	$2,$0,$END92
	nop
$IF92:
	li	$2, 51
$END95:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END92:
$END83:
$CASE29:
	li	$2, 8
$END96:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE37:
	li	$2, 90
$END97:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE40:
	li	$2, 100
$END98:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END51:
	li	$2, 3
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

$CASE54:
	li	$2, 7
$END101:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	lw	$2, 120($sp) #x
$END102:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$DEFAULT103:
	li	$2, 98
$END104:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	lw	$2, 120($sp) #x
$END105:
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

