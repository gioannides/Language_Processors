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
	addiu	$sp,$sp,-136
	sw	$fp,132($sp)
	sw	$31,128($sp)
	move	$fp,$sp

	li	$2, 8
$END6:
	sw	$2, 124($sp) #a

	li	$2, 67
$END7:
	sw	$2, 120($sp) #b

	sw	$0, 116($sp) #z

	lw	$2, 120($sp) #b
$END8:
	lw	$3, 124($sp) #a

	add	$2, $2, $3
	sw	$2,124($sp) #a

	lw	$3, 116($sp) #z

	sw	$2,116($sp) #z

	lw	$2, 124($sp) #a
	lw	$3, 116($sp) #z
	add	$2, $2, $3
$END9:
	move	$2,$2
	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop

	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

