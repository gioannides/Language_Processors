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
$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-128
	sw	$fp,124($sp)
	sw	$31,120($sp)
	move	$fp,$sp

	li	$2, 0
$END4:
	sw	$2, 116($sp) #y

	sw	$0, 112($sp) #x

	li	$2, 0
$END6:
	lw	$3, 112($sp) #x

	sw	$2,112($sp) #x

$FOR5:
	lw	$2, 112($sp) #x
	li	$3, 10
	slt	$2, $2, $3
$END7:
	beq	$2,$0,$END5
	nop
	lw	$2, 112($sp) #x
	li	$3, 5
	seq	$2, $2, $3
$END10:
	beq	$2,$0,$END9
	nop
$IF9:
	lw	$3, 112($sp) #x

	addiu	$2, $3,1
	sw	$2,112($sp) #x

$END12:
	b $FOR5
	nop
$END9:
	lw	$2, 116($sp) #y
	lw	$3, 112($sp) #x
	add	$2, $2, $3
$END13:
	lw	$3, 116($sp) #y

	sw	$2,116($sp) #y

	lw	$3, 112($sp) #x

	addiu	$2, $3,1
	sw	$2,112($sp) #x

$END14:
	b $FOR5
	nop
$END5:
	lw	$2, 116($sp) #y
$END15:
	move	$2,$2
	move	$sp,$fp
	lw	$31,120($sp)
	lw	$fp,124($sp)
	addiu	$sp,$sp,128
	j	$31

	nop

	move	$sp,$fp
	lw	$31,120($sp)
	lw	$fp,124($sp)
	addiu	$sp,$sp,128
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

