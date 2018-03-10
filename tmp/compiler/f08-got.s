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
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-4
	sw	$fp,0($sp)
	move	$fp,$sp

	lui	$2, %hi(x)
	lw	$2, %lo(x)($2)
	li	$3, 1
	add	$2, $2, $3
$END0:
	lui	$3, %hi(x)
	lw	$3, %lo(x)($3)
	lui	$3, %hi(x)
	sw	$2, %lo(x)($3)
	lui	$2, %hi(x)
	lw	$2, %lo(x)($2)
$END1:
	move	$sp,$fp
	lw	$fp,0($sp)
	addiu	$sp,$sp,4
	j	$31

	nop

	move	$sp,$fp
	lw	$fp,0($sp)
	addiu	$sp,$sp,4
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

