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
$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-128
	sw	$fp,124($sp)
	sw	$31,120($sp)
	move	$fp,$sp

	li	$2, 97
$END4:
	sb	$2, 116($sp) #c

	lb	$2, 116($sp) #c
$END6:
$FOR5:
	lb	$2, 116($sp) #c
	li	$3, 122
	slt	$2, $2, $3
$END7:
	beq	$2,$0,$END5
	nop
	li	$2, 1
$END9:
	lb	$3, 116($sp) #c
	add	$2, $2, $3
	sb	$2,116($sp) #c
	lb	$3, 116($sp) #c
	addiu	$2, $3,1
	sb	$2,116($sp) #c
$END10:
	b $FOR5
	nop
$END5:
	lb	$2, 116($sp) #c
$END11:
	move	$2,$2
	move	$sp,$fp
	lw	$31,120($sp)
	lw	$fp,124($sp)
	addiu	$sp,$sp,128
	j	$31

	nop

	move	$sp,$fp
	lw	$31,120($sp)
	lw	$fp,124($sp)
	addiu	$sp,$sp,128
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

