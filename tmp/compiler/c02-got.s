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
$END3:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-28
	sw	$fp,24($sp)
	sw	$31,20($sp)
	move	$fp,$sp

	li	$2, 88
$END4:
	sw	$2, 16($sp) #x

	li	$2, 98
$END5:
	sw	$2, 12($sp) #y

	sw	$0, 8($sp) #z

	lw	$2, 12($sp) #y
$END6:
	lw	$3, 8($sp) #z

	addu	$2, $2, $3
#df
	sw	$2,8($sp) #z

	lw	$2, 12($sp) #y
$END7:
	lw	$3, 8($sp) #z

	subu	$2, $3, $2
#df
	sw	$2,8($sp) #z

	lw	$2, 8($sp) #z
$END8:
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

