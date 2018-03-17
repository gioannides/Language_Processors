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
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-120
	sw	$fp,116($sp)
	sw	$31,112($sp)
	move	$fp,$sp

	li	$2, 122
	li	$3, 6
	li	$4, 7
	add	$3, $3, $4
$END4:
	add	$2, $2, $3
	li	$3, 322
	add	$2, $2, $3
	li	$3, 1
	add	$2, $2, $3
$END3:
	li	$3, 12
	li	$4, 22
	li	$5, 12
	li	$6, 89
	add	$5, $5, $6
$END7:
	add	$4, $4, $5
	li	$5, 34
	add	$4, $4, $5
$END6:
	div	$3, $4
	mflo	$3
	li	$4, 1
	add	$3, $3, $4
$END5:
	mult	$2, $3
	mflo	$2
$END2:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

