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

	lw	$3, 120($sp) #x
$END40:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	li	$3, 12
$END42:
	beq	$2,$3,$CASE41
	nop
	li	$3, 9
$END43:
	lw	$4, 120($sp) #x

#df
	sw	$3,120($sp) #x

	lw	$3, 120($sp) #x
$END44:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	li	$3, 9
$END46:
	beq	$2,$3,$CASE45
	nop
$CASE23:
	li	$2, 8
$END48:
	lw	$3, 112($sp) #z

#df
	sw	$2,112($sp) #z

	li	$2, 9
$END49:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	lw	$2, 120($sp) #x
$END50:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE25:
	li	$2, 90
$END51:
	lw	$3, 112($sp) #z

#df
	sw	$2,112($sp) #z

	li	$2, 9
$END52:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	lw	$2, 120($sp) #x
$END53:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE29:
	li	$2, 100
$END54:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

$END34:
$CASE41:
	lw	$2, 116($sp) #y
$END56:
	li	$3, 9
$END59:
	beq	$2,$3,$CASE58
	nop
	lw	$3, 112($sp) #z
$END61:
	li	$4, 7
$END64:
	beq	$2,$3,$CASE63
	nop
	lw	$4, 112($sp) #z
$END65:
	move	$2,$4
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	li	$4, 88
$END67:
	beq	$2,$3,$CASE66
	nop
$CASE23:
	li	$3, 8
$END69:
	lw	$4, 112($sp) #z

#df
	sw	$3,112($sp) #z

	lw	$3, 112($sp) #z
$END70:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE25:
	li	$3, 51
$END71:
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
$END72:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE37:
	li	$3, 90
$END73:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE41:
	li	$3, 100
$END74:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE23:
	lw	$2, 120($sp) #x
$END77:
	li	$3, 7
$END80:
	beq	$2,$3,$CASE79
	nop
	lw	$3, 120($sp) #x
$END81:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	li	$3, 8
$END83:
	beq	$2,$3,$CASE82
	nop
$CASE23:
	li	$2, 56
$END85:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	lw	$2, 120($sp) #x
$END86:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE25:
	li	$2, 3
$END87:
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

$END76:
	lw	$2, 112($sp) #z
$END89:
	li	$3, 7
$END92:
	beq	$2,$3,$CASE91
	nop
	lw	$3, 112($sp) #z
$END93:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	li	$3, 88
$END95:
	beq	$2,$3,$CASE94
	nop
$CASE23:
	li	$2, 8
$END97:
	lw	$3, 112($sp) #z

#df
	sw	$2,112($sp) #z

	lw	$2, 112($sp) #z
$END98:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE25:
	li	$2, 51
$END99:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END88:
$CASE29:
	li	$2, 8
$END100:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE37:
	li	$2, 90
$END101:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE41:
	li	$2, 100
$END102:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END55:
	li	$2, 3
$END103:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	lw	$2, 120($sp) #x
$END104:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE58:
	li	$2, 7
$END105:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	lw	$2, 120($sp) #x
$END106:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$DEFAULT107:
	li	$2, 98
$END108:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	lw	$2, 120($sp) #x
$END109:
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

