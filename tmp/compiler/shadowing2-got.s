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
#0
#5
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0


	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END2:
$END3:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-128
	sw $fp,124($sp)
	sw $31,120($sp)
	move $fp,$sp

	sw	$0, 116($sp) #z

	li	$2, 0
$END5:
	sw	$2,112($sp) #y

	lw	$2, 112($sp) #y
	lui	$3, %hi(x)
	lw	$3, %lo(x)($3)
	add	$2, $2, $3
$END6:
	lw	$3, 112($sp) #y

	sw	$2,112($sp) #y

	li	$2, 0
$END8:
	lw	$3, 116($sp) #z

	sw	$2,116($sp) #z

$FOR7:
	lw	$2, 116($sp) #z
	li	$3, 10
	slt	$2, $2, $3
$END9:
	beq	$2,$0,$END7
	nop
	li	$2, 9
$END11:
	sw	$2,108($sp) #x

	lw	$2, 112($sp) #y
	lw	$3, 108($sp) #x
	add	$2, $2, $3
$END12:
	lw	$3, 112($sp) #y

	sw	$2,112($sp) #y

	lw	$2, 116($sp) #z
	li	$3, 1
	add	$2, $2, $3
$END13:
	lw	$3, 116($sp) #z

	sw	$2,116($sp) #z

	b $FOR7
	nop
$END7:
	lw	$2, 112($sp) #y
$END14:
	move	$2,$2
	move	$sp,$fp
	lw	$31,120($sp)
	lw	$fp,124($sp)
	addiu	$sp,$sp,128
	j	$31

	nop

	move $sp,$fp
	lw $31,120($sp)
	lw $fp,124($sp)
	addiu $sp,$sp,128
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

