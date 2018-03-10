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
$END1:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	move	$fp,$sp

	li	$2, 88
$END2:
	sw	$2, 0($sp) #x

	li	$2, 98
$END3:
	sw	$2, 4($sp) #y

	sw	$0, 8($sp) #z

	lw	$2, 4($sp) #y
$END4:
	lw	$3, 8($sp) #z

	addu	$2, $2, $3
#df
	sw	$2,8($sp) #z

	lw	$2, 4($sp) #y
$END5:
	lw	$3, 8($sp) #z

	subu	$2, $3, $2
#df
	sw	$2,8($sp) #z

	lw	$2, 8($sp) #z
$END6:
	move	$sp,$fp
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop

	move	$sp,$fp
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

