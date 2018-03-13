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
	sw	$31,16($sp)
	move	$fp,$sp

	li	$2, 0
$END3:
	sw	$2, 12($sp) #x

	li	$2, 0
$END4:
	sw	$2, 8($sp) #y

start:

	lw	$2, 12($sp) #x
	li	$3, 10
	slt	$2, $2, $3
$END6:
	beq	$2,$0,$END5
	nop
$IF5:
	lw	$2, 8($sp) #y
	lw	$3, 12($sp) #x
	add	$2, $2, $3
$END7:
	lw	$3, 8($sp) #y

#df
	sw	$2,8($sp) #y

	b	start
	nop
$END5:
	lw	$2, 8($sp) #y
$END8:
	move	$2,$2
	move	$sp,$fp
	lw	$31,16($sp)
	lw	$fp,20($sp)
	addiu	$sp,$sp,24
	j	$31

	nop

	move	$sp,$fp
	lw	$31,16($sp)
	lw	$fp,20($sp)
	addiu	$sp,$sp,24
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

