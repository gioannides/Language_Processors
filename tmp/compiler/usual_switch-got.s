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
$END4:
$END8:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-132
	sw	$fp,128($sp)
	sw	$31,124($sp)
	move	$fp,$sp

	li	$2, 8
$END10:
	sw	$2, 120($sp) #x

	li	$2, 9
$END11:
	sw	$2, 116($sp) #y

	li	$2, 88
$END12:
	sw	$2, 112($sp) #z

	lw	$2, 120($sp) #x
$END14:
	li	$3, 1
$END17:
	beq	$2,$3,$CASE16
	nop
	li	$3, 2
$END19:
	beq	$2,$3,$CASE18
	nop
	li	$3, 4
$END21:
	beq	$2,$3,$CASE20
	nop
	li	$3, 8
$END23:
	beq	$2,$3,$CASE22
	nop
$CASE16:
	li	$2, 21
$END25:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

$CASE18:
	li	$2, 55
$END26:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

$CASE20:
	li	$2, 66
$END27:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

$CASE22:
	li	$2, 87
$END28:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

$END13:
	lw	$2, 120($sp) #x
$END29:
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

