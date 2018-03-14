	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


$END0:

	.data
	.globl	x
	.align	2
	.type	x, @object
	.size	x, 4
x:
	.word	5


	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END2:
$END3:
$END4:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-128
	sw	$fp,124($sp)
	sw	$31,120($sp)
	move	$fp,$sp

	li	$2, 0
$END6:
	sw	$2, 116($sp) #y

	li	$2, 0
	li	$3, 9
	sub	$2, $2, $3
$END7:
	sw	$2, 112($sp) #x

$BEGIN8:
	lw	$2, 112($sp) #x
	li	$3, 5
	slt	$2, $2, $3
$END9:
	beq	$2,$0,$END8
	nop
$WHILE8:
	lw	$2, 112($sp) #x
	li	$3, 1
	add	$2, $2, $3
$END11:
	lw	$3, 112($sp) #x

#df
	sw	$2,112($sp) #x

	lw	$2, 112($sp) #x
	li	$3, 1
	seq	$2, $2, $3
$END13:
	beq	$2,$0,$END12
	nop
$IF12:
	lw	$2, 112($sp) #x
	li	$3, 5
	slt	$2, $2, $3
$END15:
	b $BEGIN8
	nop
$END12:
	lw	$2, 116($sp) #y
	lw	$3, 112($sp) #x
	add	$2, $2, $3
$END16:
	lw	$3, 116($sp) #y

#df
	sw	$2,116($sp) #y

	b $BEGIN8
	nop
$END8:
	lw	$2, 116($sp) #y
$END17:
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

