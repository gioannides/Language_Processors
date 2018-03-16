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
$END3:
$END4:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-144
	sw	$fp,140($sp)
	sw	$31,136($sp)
	move	$fp,$sp

	sw	$0, 132($sp) #a

	sw	$0, 128($sp) #b

	li	$2, 8
$END6:
	sw	$2, 124($sp) #c

	li	$2, 9
$END7:
	sw	$2, 120($sp) #d

	li	$2, 828
$END8:
	sw	$2, 116($sp) #g

	lw	$2, 132($sp) #a
	lw	$3, 128($sp) #b
	add	$2, $2, $3
	lw	$3, 124($sp) #c
	add	$2, $2, $3
$END9:
	move	$2,$2
	move	$sp,$fp
	lw	$31,136($sp)
	lw	$fp,140($sp)
	addiu	$sp,$sp,144
	j	$31

	nop

	move	$sp,$fp
	lw	$31,136($sp)
	lw	$fp,140($sp)
	addiu	$sp,$sp,144
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

