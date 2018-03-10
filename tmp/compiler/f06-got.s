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
	addiu	$sp,$sp,-8
	sw	$fp,4($sp)
	move	$fp,$sp

	sw	$0, 0($sp) #x

	li	$2, 5
$END0:
	lw	$3, 0($sp) #x

#df
	sw	$2,0($sp) #x

	lw	$2, 0($sp) #x
	lw	$3, 0($sp) #x
	mult	$2, $3
	mflo	$2
$END1:
	lw	$3, 0($sp) #x

#df
	sw	$2,0($sp) #x

	lw	$2, 0($sp) #x
$END2:
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	j	$31

	nop

	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

