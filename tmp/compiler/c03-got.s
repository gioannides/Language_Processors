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
$END2:
$END3:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-128
	sw	$fp,124($sp)
	sw	$31,120($sp)
	move	$fp,$sp

	li	$2, 7
$END5:
	sw	$2, 116($sp) #a

	li	$2, 8
$END6:
	sw	$2, 112($sp) #b

	li	$2, 9
$END7:
	lw	$3, 112($sp) #b

	add	$2, $2, $3
	sw	$2,112($sp) #b

	lw	$3, 116($sp) #a

	sub	$2, $3, $2
	sw	$2,116($sp) #a

	li	$2, 8
$END9:
	lw	$3, 112($sp) #b

	add	$2, $2, $3
	sw	$2,112($sp) #b

	lw	$3, 116($sp) #a

	div	$3,$2
	mflo	$2
	sw	$2,116($sp) #a

$END8:
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

