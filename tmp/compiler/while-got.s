	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


$END0:

	.data
	.globl	a
	.align	2
	.type	a, @object
	.size	a, 4
a:
	.word	3


	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-124
	sw	$fp,120($sp)
	sw	$31,116($sp)
	move	$fp,$sp

	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 97
	add	$2, $2, $3
$END4:
	sw	$2, 112($sp) #x

$BEGIN5:
	lw	$2, 112($sp) #x
	li	$3, 0
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END6:
	beq	$2,$0,$END5
	nop
$WHILE5:
	lw	$2, 112($sp) #x
	li	$3, 1
	sub	$2, $2, $3
$END8:
	lw	$3, 112($sp) #x

	sw	$2,112($sp) #x

	b $BEGIN5
	nop
$END5:
	lw	$2, 112($sp) #x
$END9:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

