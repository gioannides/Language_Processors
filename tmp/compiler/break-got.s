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
	addiu	$sp,$sp,-28
	sw	$fp,24($sp)
	sw	$31,20($sp)
	move	$fp,$sp

	sw	$0, 16($sp) #b

	li	$2, 9
$END3:
	sw	$2, 12($sp) #a

	li	$2, 2
$END4:
	sw	$2, 8($sp) #c

$BEGIN5:
	lw	$2, 12($sp) #a
$END6:
	beq	$2,$0,$END5
	nop
$WHILE5:
	lw	$2, 16($sp) #b
$END7:
	lw	$3, 12($sp) #a

#df
	sw	$2,12($sp) #a

	li	$2, 465
$END8:
	lw	$3, 8($sp) #c

#df
	sw	$2,8($sp) #c

	b $BEGIN5
	nop
$END5:
	lw	$2, 8($sp) #c
$END9:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

