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
$END9:
$END4:
$END10:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-132
	sw	$fp,128($sp)
	sw	$31,124($sp)
	move	$fp,$sp

	li	$2, 8
$END12:
	sw	$2, 120($sp) #x

	li	$2, 9
$END13:
	sw	$2, 116($sp) #y

	li	$2, 88
$END14:
	sw	$2, 112($sp) #z

	lw	$2, 120($sp) #x
$END16:
	li	$3, 1
$END19:
	beq	$2,$3,$CASE18
	nop
	li	$3, 21
$END20:
	lw	$4, 120($sp) #x

#df
	sw	$3,120($sp) #x

	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	li	$3, 2
$END22:
	beq	$2,$3,$CASE21
	nop
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	li	$3, 4
$END24:
	beq	$2,$3,$CASE23
	nop
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	li	$3, 8
$END26:
	beq	$2,$3,$CASE25
	nop
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE18:
	lw	$2, 116($sp) #y
$END29:
	li	$3, 9
$END32:
	beq	$2,$3,$CASE31
	nop
	li	$3, 88
$END34:
	beq	$2,$3,$CASE33
	nop
$CASE18:
	li	$2, 42
$END36:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE21:
	li	$2, 23
$END37:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END28:
	li	$2, 21
$END38:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE25:
	li	$2, 55
$END39:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE31:
	li	$2, 66
$END40:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE33:
	li	$2, 87
$END41:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END15:
	lw	$2, 120($sp) #x
$END42:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

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

