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
$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-20
	sw	$fp,16($sp)
	sw	$31,12($sp)
	move	$fp,$sp

	li	$2, 9
$END4:
	sw	$2, 8($sp) #x

d:

	lw	$2, 8($sp) #x
	li	$3, 9
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END6:
	beq	$2,$0,$END5
	nop
$IF5:
	lw	$3, 8($sp) #x

	addiu	$2, $3,1
#df
	sw	$2,8($sp) #x

$END8:
	b	d
	nop
$END5:
	lw	$2, 8($sp) #x
$END9:
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

