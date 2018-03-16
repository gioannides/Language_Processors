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
$END6:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-152
	sw	$fp,148($sp)
	sw	$31,144($sp)
	move	$fp,$sp

	li	$2, 1
$END8:
	sw	$2, 140($sp) #a

	li	$2, 2
$END9:
	sw	$2, 136($sp) #b

	li	$2, 3
$END10:
	sw	$2, 132($sp) #c

	sw	$0, 128($sp) #v

	li	$2, 6
$END11:
	sw	$2, 124($sp) #x

	sw	$0, 120($sp) #z

	li	$2, 10
$END12:
	sw	$2, 116($sp) #g

	li	$2, 3
$END13:
	lw	$3, 116($sp) #g

	sw	$2,116($sp) #g

	lw	$3, 132($sp) #c

	sub	$2, $3, $2
	sw	$2,132($sp) #c

	lw	$3, 136($sp) #b

	add	$2, $2, $3
	sw	$2,136($sp) #b

	lw	$3, 140($sp) #a

	sw	$2,140($sp) #a

	move	$2,$2
	move	$sp,$fp
	lw	$31,144($sp)
	lw	$fp,148($sp)
	addiu	$sp,$sp,152
	j	$31

	nop

	move	$sp,$fp
	lw	$31,144($sp)
	lw	$fp,148($sp)
	addiu	$sp,$sp,152
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

