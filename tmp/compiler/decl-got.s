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

$END1:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-12
	sw	$fp,8($sp)
	move	$fp,$sp

	sw	$0, 0($sp) #b

	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
$END2:
	sw	$2, 4($sp) #c

	lw	$2, 4($sp) #c
$END3:
	move	$sp,$fp
	lw	$fp,8($sp)
	addiu	$sp,$sp,12
	j	$31

	nop

	move	$sp,$fp
	lw	$fp,8($sp)
	addiu	$sp,$sp,12
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

