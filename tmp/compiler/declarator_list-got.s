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
$END2:
$END3:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-140
	sw	$fp,136($sp)
	sw	$31,132($sp)
	move	$fp,$sp

	sw	$0, 128($sp) #a

	sw	$0, 124($sp) #b

	li	$2, 8
$END5:
	sw	$2, 120($sp) #c

	li	$2, 9
$END6:
	sw	$2, 116($sp) #d

	li	$2, 828
$END7:
	sw	$2, 112($sp) #g

	lw	$2, 128($sp) #a
	lw	$3, 124($sp) #b
	add	$2, $2, $3
	lw	$3, 120($sp) #c
	add	$2, $2, $3
$END8:
	move	$2,$2
	move	$sp,$fp
	lw	$31,132($sp)
	lw	$fp,136($sp)
	addiu	$sp,$sp,140
	j	$31

	nop

	move	$sp,$fp
	lw	$31,132($sp)
	lw	$fp,136($sp)
	addiu	$sp,$sp,140
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

