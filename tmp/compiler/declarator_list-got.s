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
$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-24
	sw	$fp,20($sp)
	move	$fp,$sp

	sw	$0, 0($sp) #a

	sw	$0, 4($sp) #b

	li	$2, 8
$END3:
	sw	$2, 8($sp) #c

	li	$2, 9
$END4:
	sw	$2, 12($sp) #d

	li	$2, 828
$END5:
	sw	$2, 16($sp) #g

	lw	$2, 0($sp) #a
	lw	$3, 4($sp) #b
	add	$2, $2, $3
	lw	$3, 8($sp) #c
	add	$2, $2, $3
$END6:
	move	$sp,$fp
	lw	$fp,20($sp)
	addiu	$sp,$sp,24
	j	$31

	nop

	move	$sp,$fp
	lw	$fp,20($sp)
	addiu	$sp,$sp,24
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

