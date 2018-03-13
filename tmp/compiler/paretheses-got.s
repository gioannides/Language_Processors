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

$END0:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	sw	$31,8($sp)
	move	$fp,$sp

	li	$2, 122
	li	$3, 6
	li	$4, 7
	add	$3, $3, $4
$END3:
	add	$2, $2, $3
	li	$3, 322
	add	$2, $2, $3
	li	$3, 1
	add	$2, $2, $3
$END2:
	li	$3, 12
	li	$4, 22
	li	$5, 12
	li	$6, 89
	add	$5, $5, $6
$END6:
	add	$4, $4, $5
	li	$5, 34
	add	$4, $4, $5
$END5:
	div	$3, $4
	mflo	$3
	li	$4, 1
	add	$3, $3, $4
$END4:
	mult	$2, $3
	mflo	$2
$END1:
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

