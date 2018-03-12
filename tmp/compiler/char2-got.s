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
	addiu	$sp,$sp,-32
	sw	$fp,28($sp)
	sw	$31,24($sp)
	move	$fp,$sp

	sw	$0, 20($sp) #k

	li	$2, 90
	li	$3, 8
	li	$4, 5
	seq	$3, $3, $4
$END5:
	add	$2, $2, $3
$END4:
	sb	$2, 16($sp) #z

	li	$2, 2
	li	$3, 5
	sle	$2, $2, $3
$END6:
	sb	$2, 12($sp) #x

	li	$2, 7
$END7:
	sw	$2, 8($sp) #y

	lb	$2, 16($sp) #z
$END8:
	lw	$3, 20($sp) #k

#df
	sw	$2,20($sp) #k

	lw	$2, 20($sp) #k
$END9:
	move	$2,$2
	move	$sp,$fp
	lw	$31,24($sp)
	lw	$fp,28($sp)
	addiu	$sp,$sp,32
	j	$31

	nop

	move	$sp,$fp
	lw	$31,24($sp)
	lw	$fp,28($sp)
	addiu	$sp,$sp,32
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

