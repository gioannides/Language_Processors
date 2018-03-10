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
	addiu	$sp,$sp,-8
	sw	$fp,4($sp)
	move	$fp,$sp

	li	$2, 0
$END2:
	sw	$2, 0($sp) #b

	lw	$3, 0($sp) #b

	addiu	$2, $3,-1
#df
	sw	$2,0($sp) #b

$END3:
	lw	$3, 0($sp) #b

	addiu	$2, $3,-1
#df
	sw	$2,0($sp) #b

$END4:
	lw	$3, 0($sp) #b

	addiu	$2, $3,-1
#df
	sw	$2,0($sp) #b

$END5:
	lw	$2, 0($sp) #b
$END6:
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

