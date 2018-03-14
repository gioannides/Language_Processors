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
$END11:
$END12:
$END13:
$END4:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-132
	sw	$fp,128($sp)
	sw	$31,124($sp)
	move	$fp,$sp

	li	$2, 8
$END15:
	sw	$2, 120($sp) #x

	li	$2, 9
$END16:
	sw	$2, 116($sp) #y

	li	$2, 88
$END17:
	sw	$2, 112($sp) #z

	lw	$2, 120($sp) #x
$END19:
	li	$3, 1
$END22:
	beq	$2,$3,$CASE21
	nop
	li	$3, 2
$END24:
	beq	$2,$3,$CASE23
	nop
	lw	$3, 120($sp) #x
$END25:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	li	$3, 4
$END27:
	beq	$2,$3,$CASE26
	nop
	lw	$3, 120($sp) #x
$END28:
	move	$2,$3
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	li	$3, 8
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

$CASE21:
	li	$2, 21
$END33:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

$CASE23:
	li	$2, 55
$END34:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	lw	$2, 120($sp) #x
$END35:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE26:
	li	$2, 66
$END36:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	lw	$2, 120($sp) #x
$END37:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$CASE29:
	li	$2, 87
$END38:
	lw	$3, 120($sp) #x

#df
	sw	$2,120($sp) #x

	lw	$2, 120($sp) #x
$END39:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

$END18:
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

