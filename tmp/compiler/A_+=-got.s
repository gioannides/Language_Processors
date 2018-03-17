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
	addiu	$sp,$sp,-148
	sw	$fp,144($sp)
	sw	$31,140($sp)
	move	$fp,$sp

	li	$2, 1
$END7:
	sw	$2, 136($sp) #a

	li	$2, 2
$END8:
	sw	$2, 132($sp) #b

	li	$2, 3
$END9:
	sw	$2, 128($sp) #c

	sw	$0, 124($sp) #v

	li	$2, 6
$END10:
	sw	$2, 120($sp) #x

	sw	$0, 116($sp) #z

	li	$2, 10
$END11:
	sw	$2, 112($sp) #g

	li	$2, 3
$END12:
	lw	$3, 112($sp) #g

	sw	$2,112($sp) #g

	lw	$3, 128($sp) #c

	sub	$2, $3, $2
	sw	$2,128($sp) #c

	lw	$3, 132($sp) #b

	add	$2, $2, $3
	sw	$2,132($sp) #b

	lw	$3, 136($sp) #a

	sw	$2,136($sp) #a

	move	$2,$2
	move	$sp,$fp
	lw	$31,140($sp)
	lw	$fp,144($sp)
	addiu	$sp,$sp,148
	j	$31

	nop

	move	$sp,$fp
	lw	$31,140($sp)
	lw	$fp,144($sp)
	addiu	$sp,$sp,148
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

