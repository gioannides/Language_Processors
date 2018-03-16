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
$END4:
$END5:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-136
	sw	$fp,132($sp)
	sw	$31,128($sp)
	move	$fp,$sp

	li	$2, 88
$END7:
	sw	$2, 124($sp) #x

	li	$2, 98
$END8:
	sw	$2, 120($sp) #y

	sw	$0, 116($sp) #z

	lw	$2, 120($sp) #y
$END9:
	lw	$3, 116($sp) #z

	addu	$2, $2, $3
	sw	$2,116($sp) #z

	lw	$2, 120($sp) #y
$END10:
	lw	$3, 116($sp) #z

	subu	$2, $3, $2
	sw	$2,116($sp) #z

	lw	$2, 116($sp) #z
$END11:
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

