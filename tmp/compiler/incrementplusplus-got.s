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

$END1:
$END2:
$END3:
$END4:
$END5:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-20
	sw	$fp,16($sp)
	sw	$31,12($sp)
	move	$fp,$sp

	li	$2, 0
$END6:
	sw	$2, 8($sp) #b

	lw	$3, 8($sp) #b

	addiu	$2, $3,-1
#df
	sw	$2,8($sp) #b

$END7:
	lw	$3, 8($sp) #b

	addiu	$2, $3,-1
#df
	sw	$2,8($sp) #b

$END8:
	lw	$3, 8($sp) #b

	addiu	$2, $3,-1
#df
	sw	$2,8($sp) #b

$END9:
	lw	$2, 8($sp) #b
$END10:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

