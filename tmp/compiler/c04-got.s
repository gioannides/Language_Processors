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
$END3:
$END4:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-136
	sw	$fp,132($sp)
	sw	$31,128($sp)
	move	$fp,$sp

	sw	$0, 124($sp) #k

	li	$2, 1
	li	$3, 2
	add	$2, $2, $3
	li	$3, 3
	add	$2, $2, $3
	li	$3, 4
	add	$2, $2, $3
	li	$3, 5
	add	$2, $2, $3
	li	$3, 6
	add	$2, $2, $3
$END6:
	sw	$2, 120($sp) #x

	lw	$2, 120($sp) #x
	li	$3, 3
	div	$2, $3
	mflo	$2
$END7:
	sw	$2, 116($sp) #y

	lw	$2, 116($sp) #y
	li	$3, 8
	lw	$4, 120($sp) #x
	mult	$3, $4
	mflo	$3
	add	$2, $2, $3
$END8:
	sw	$2, 112($sp) #z

	lw	$2, 112($sp) #z
$END9:
	lw	$3, 124($sp) #k

	sw	$2,124($sp) #k

	lw	$2, 124($sp) #k
$END10:
	move	$2,$2
	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop

	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

