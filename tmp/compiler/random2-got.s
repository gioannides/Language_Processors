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

$END0:
$END1:
$END2:
$END3:
$END4:
$END5:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-36
	sw	$fp,32($sp)
	sw	$31,28($sp)
	move	$fp,$sp

	li	$2, 9
$END6:
	sw	$2, 24($sp) #x

	li	$2, 7
$END7:
	sw	$2, 20($sp) #a

	li	$2, 8
$END8:
	sw	$2, 16($sp) #b

	li	$2, 98
$END9:
	sw	$2, 12($sp) #d

	li	$2, 115
$END10:
	sw	$2, 8($sp) #g

	li	$2, 9
$END11:
	lw	$3, 16($sp) #b

	add	$2, $2, $3
#df
	sw	$2,16($sp) #b

	lw	$3, 20($sp) #a

	sub	$2, $3, $2
#df
	sw	$2,20($sp) #a

	lw	$2, 24($sp) #x
	li	$3, 4
$END13:
	lw	$4, 20($sp) #a

	add	$3, $3, $4
#df
	sw	$2,20($sp) #a

	add	$2, $2, $3
$END12:
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

