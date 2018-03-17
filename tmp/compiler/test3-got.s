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
$END5:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-136
	sw $fp,132($sp)
	sw $31,128($sp)
	move $fp,$sp

	li	$2, 7
$END7:
	sw	$2,124($sp) #a

	li	$2, 8
$END8:
	sw	$2,120($sp) #b

	li	$2, 98
$END9:
	sw	$2,116($sp) #d

	li	$2, 115
$END10:
	sb	$2,112($sp) #g
	li	$2, 9
$END11:
	lw	$3, 120($sp) #b

	add	$2, $2, $3
	sw	$2,120($sp) #b

	lw	$3, 124($sp) #a

	sub	$2, $3, $2
	sw	$2,124($sp) #a

	li	$2, 8
$END17:
	lw	$3, 120($sp) #b

	add	$2, $2, $3
	sw	$2,120($sp) #b

$END16:
	lw	$3, 124($sp) #a

	mult	$2,$3
	mflo	$2
	sw	$2,124($sp) #a

$END15:
	lw	$3, 120($sp) #b

	and	$2, $2, $3
	sw	$2,120($sp) #b

$END14:
	lw	$3, 116($sp) #d

	or	$2, $2, $3
	sw	$2,116($sp) #d

$END13:
	lb	$3, 112($sp) #g
	div	$3,$2
	mflo	$2
	sb	$2,112($sp) #g
$END12:
	move	$2,$2
	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop

	move $sp,$fp
	lw $31,128($sp)
	lw $fp,132($sp)
	addiu $sp,$sp,136
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

