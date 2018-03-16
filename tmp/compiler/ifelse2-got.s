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
$IF4:
$END7:
$IF6:
$END8:
$ELSE6:
$END9:
$END6:
$END4:
$END10:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-132
	sw	$fp,128($sp)
	sw	$31,124($sp)
	move	$fp,$sp

	li	$2, 0
$END12:
	sw	$2, 120($sp) #a

	li	$2, 0
$END13:
	sw	$2, 116($sp) #b

	li	$2, 3
$END14:
	sw	$2, 112($sp) #x

	lw	$2, 120($sp) #a
$END16:
	beq	$2,$0,$END15
	nop
$IF15:
	lw	$2, 116($sp) #b
$END18:
	beq	$2,$0,$ELSE17
	nop
$IF17:
	li	$2, 5
$END19:
	lw	$3, 112($sp) #x

	sw	$2,112($sp) #x

	b $END17
	nop
$ELSE17:
	li	$2, 10
$END20:
	lw	$3, 112($sp) #x

	sw	$2,112($sp) #x

$END17:
$END15:
	lw	$2, 112($sp) #x
$END21:
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

