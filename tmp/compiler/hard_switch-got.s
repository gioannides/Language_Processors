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
$END4:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-132
	sw	$fp,128($sp)
	sw	$31,124($sp)
	move	$fp,$sp

	li	$2, 8
$END9:
	sw	$2, 120($sp) #x

	li	$2, 9
$END10:
	sw	$2, 116($sp) #y

	li	$2, 88
$END11:
	sw	$2, 112($sp) #z

	lw	$2, 120($sp) #x
$END13:
	li	$3, 8
$END16:
	beq	$2,$3,$CASE15
	nop
$CASE15:
	lw	$2, 116($sp) #y
$END19:
	lw	$3, 120($sp) #x
$END22:
	li	$4, 7
$END25:
	beq	$2,$3,$CASE24
	nop
	li	$4, 8
$END27:
	beq	$2,$3,$CASE26
	nop
$CASE15:
	lw	$3, 116($sp) #y
$END29:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE24:
	lw	$3, 120($sp) #x
	li	$4, 3
	add	$3, $3, $4
$END30:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END21:
$CASE26:
	lw	$3, 112($sp) #z
$END31:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	lw	$2, 120($sp) #x
$END34:
	li	$3, 7
$END37:
	beq	$2,$3,$CASE36
	nop
	li	$3, 8
$END39:
	beq	$2,$3,$CASE38
	nop
$CASE15:
	lw	$2, 116($sp) #y
$END41:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE24:
	lw	$2, 120($sp) #x
	li	$3, 3
	add	$2, $2, $3
$END42:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END33:
$CASE26:
	lw	$2, 112($sp) #z
$END43:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE36:
	lw	$2, 116($sp) #y
$END44:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE38:
	li	$2, 9
$END45:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END18:
$END12:
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

