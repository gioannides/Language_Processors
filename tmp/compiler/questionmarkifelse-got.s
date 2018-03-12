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
	.word	8


	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

	beq	$2,$0,$END1
	nop
$IF1:
$END2:
	b $END1
	nop
$ELSE1:
$END3:
$END1:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	sw	$31,8($sp)
	move	$fp,$sp

	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 0
	slt	$2, $2, $3
$END5:
	beq	$2,$0,$END4
	nop
$IF4:
	li	$2, 0
$END6:
	lui	$3, %hi(a)
	lw	$3, %lo(a)($3)
	lui	$3, %hi(a)
	sw	$2, %lo(a)($3)
	b $END4
	nop
$ELSE4:
	seq	$2, $2, $3
$END7:
$END4:
	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
$END8:
	move	$2,$2
	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop

	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

