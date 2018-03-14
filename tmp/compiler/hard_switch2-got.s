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
$END10:
$END11:
$END4:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-132
	sw	$fp,128($sp)
	sw	$31,124($sp)
	move	$fp,$sp

	li	$2, 8
$END13:
	sw	$2, 120($sp) #x

	li	$2, 9
$END14:
	sw	$2, 116($sp) #y

	li	$2, 88
$END15:
	sw	$2, 112($sp) #z

	lw	$2, 120($sp) #x
$END17:
	li	$3, 4
$END20:
	beq	$2,$3,$CASE19
	nop
	li	$3, 8
$END22:
	beq	$2,$3,$CASE21
	nop
	li	$3, 9
$END24:
	beq	$2,$3,$CASE23
	nop
	li	$3, 0
$END25:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	lw	$3, 120($sp) #x
$END26:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE19:
	lw	$2, 112($sp) #z
$END29:
	li	$3, 10
$END32:
	beq	$2,$3,$CASE31
	nop
	li	$3, 12
$END34:
	beq	$2,$3,$CASE33
	nop
	li	$3, 9
$END36:
	beq	$2,$3,$CASE35
	nop
$CASE19:
	li	$2, 8
$END38:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE21:
	li	$2, 90
$END39:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE23:
	li	$2, 100
$END40:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

$END28:
$CASE33:
	lw	$2, 116($sp) #y
$END42:
	lw	$3, 120($sp) #x
$END45:
	li	$4, 7
$END48:
	beq	$2,$3,$CASE47
	nop
	li	$4, 8
$END50:
	beq	$2,$3,$CASE49
	nop
$CASE19:
	lw	$3, 116($sp) #y
$END52:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE21:
	li	$3, 3
$END53:
	lw	$4, 120($sp) #x

#df
	sw	$3,120($sp) #x

$END44:
$CASE23:
	lw	$3, 112($sp) #z
$END54:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE31:
	lw	$3, 116($sp) #y
$END55:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE33:
	li	$3, 9
$END56:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	lw	$2, 120($sp) #x
$END59:
	li	$3, 7
$END62:
	beq	$2,$3,$CASE61
	nop
	li	$3, 8
$END64:
	beq	$2,$3,$CASE63
	nop
$CASE19:
	lw	$2, 116($sp) #y
$END66:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE21:
	li	$2, 3
$END67:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

$END58:
$CASE23:
	lw	$2, 112($sp) #z
$END68:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE31:
	lw	$2, 116($sp) #y
$END69:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE33:
	li	$2, 9
$END70:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END41:
$CASE47:
	li	$2, 7
$END71:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	li	$2, 0
$END72:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$DEFAULT73:
	li	$2, 98
$END74:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	lw	$2, 120($sp) #x
$END75:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END16:
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

