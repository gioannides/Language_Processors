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
	addiu	$sp,$sp,-20
	sw	$fp,16($sp)
	sw	$31,12($sp)
	move	$fp,$sp

	li	$2, 7
$END2:
	sw	$2, 8($sp) #x

$FOR3:
	li	$2, 0
$END4:
	beq	$2,$0,$END3
	nop
	lw	$2, 8($sp) #x
	li	$3, 5
	add	$2, $2, $3
$END5:
	lw	$3, 8($sp) #x

#df
	sw	$2,8($sp) #x

	b $FOR3
	nop
$END3:
	lw	$2, 8($sp) #x
$END6:
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

