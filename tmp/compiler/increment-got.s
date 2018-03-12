	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


$END0:

	.data
	.globl	a
	.align	2
	.type	a, @object
	.size	a, 4
a:
	.word	3


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
$END4:
$END5:
$END6:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-36
	sw	$fp,32($sp)
	sw	$31,28($sp)
	move	$fp,$sp

	li	$2, 0
$END7:
	sw	$2, 24($sp) #b

	li	$2, 0
$END8:
	sw	$2, 20($sp) #j

	li	$2, 0
$END9:
	sw	$2, 16($sp) #k

	li	$2, 100
$END10:
	sw	$2, 12($sp) #x

	li	$2, 0
$END11:
	sw	$2, 8($sp) #i

	li	$2, 1
$END13:
	lui	$3, %hi(a)
	lw	$3, %lo(a)($3)
	add	$2, $2, $3
	lui	$3, %hi(a)
	sw	$2, %lo(a)($3)
$END12:
	lw	$3, 24($sp) #b

#df
	sw	$2,24($sp) #b

	lw	$2, 24($sp) #b
$END14:
	move	$2,$2
	move	$sp,$fp
	lw	$31,28($sp)
	lw	$fp,32($sp)
	addiu	$sp,$sp,36
	j	$31

	nop

	move	$sp,$fp
	lw	$31,28($sp)
	lw	$fp,32($sp)
	addiu	$sp,$sp,36
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

