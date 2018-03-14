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

	sw	$0, 116($sp) #z

	li	$2, 0
$END6:
	sw	$2, 112($sp) #y

	lw	$2, 112($sp) #y
	lui	$3, %hi(x)
	lw	$3, %lo(x)($3)
	add	$2, $2, $3
$END7:
	lw	$3, 112($sp) #y

#df
	sw	$2,112($sp) #y

	li	$2, 0
$END9:
	lw	$3, 116($sp) #z

#df
	sw	$2,116($sp) #z

$FOR8:
	lw	$2, 116($sp) #z
	li	$3, 10
	slt	$2, $2, $3
$END10:
	beq	$2,$0,$END8
	nop
	li	$2, 9
$END12:
	sw	$2, 108($sp) #x

	lw	$2, 112($sp) #y
	lw	$3, 108($sp) #x
	add	$2, $2, $3
$END13:
	lw	$3, 112($sp) #y

#df
	sw	$2,112($sp) #y

	lw	$2, 116($sp) #z
	li	$3, 1
	add	$2, $2, $3
$END14:
	lw	$3, 116($sp) #z

#df
	sw	$2,116($sp) #z

	b $FOR8
	nop
$END8:
	lw	$2, 112($sp) #y
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

