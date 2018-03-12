	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls



	.data
	.globl	x
	.align	2
	.type	x, @object
	.size	x, 4
x:
	.word	0


	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END0:
$END1:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	sw	$31,8($sp)
	move	$fp,$sp

	li	$2, 5
$END2:
	lui	$3, %hi(x)
	lw	$3, %lo(x)($3)
	lui	$3, %hi(x)
	sw	$2, %lo(x)($3)
	lui	$2, %hi(x)
	lw	$2, %lo(x)($2)
	lui	$3, %hi(x)
	lw	$3, %lo(x)($3)
	mult	$2, $3
	mflo	$2
$END3:
	lui	$3, %hi(x)
	lw	$3, %lo(x)($3)
	lui	$3, %hi(x)
	sw	$2, %lo(x)($3)
	lui	$2, %hi(x)
	lw	$2, %lo(x)($2)
$END4:
	move	$2,$2
	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop

	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

