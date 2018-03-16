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
$END5:
$END6:
$END7:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-144
	sw	$fp,140($sp)
	sw	$31,136($sp)
	move	$fp,$sp

	li	$2, 9
$END9:
	sw	$2, 132($sp) #x

	li	$2, 7
$END10:
	sw	$2, 128($sp) #a

	li	$2, 8
$END11:
	sw	$2, 124($sp) #b

	li	$2, 98
$END12:
	sw	$2, 120($sp) #d

	li	$2, 115
$END13:
	sw	$2, 116($sp) #g

	li	$2, 9
$END14:
	lw	$3, 124($sp) #b

	add	$2, $2, $3
	sw	$2,124($sp) #b

	lw	$3, 128($sp) #a

	sub	$2, $3, $2
	sw	$2,128($sp) #a

	lw	$2, 132($sp) #x
	li	$3, 4
$END16:
	lw	$4, 128($sp) #a

	add	$3, $3, $4
	sw	$3,128($sp) #a

	add	$2, $2, $3
$END15:
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

