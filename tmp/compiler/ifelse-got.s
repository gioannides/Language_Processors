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

$END1:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	sw	$31,8($sp)
	move	$fp,$sp

	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 8
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END3:
	beq	$2,$0,$ELSE2
	nop
$IF2:
	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 8
	slt	$2, $2, $3
$END5:
	beq	$2,$0,$ELSE4
	nop
$IF4:
	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	lui	$3, %hi(a)
	lw	$3, %lo(a)($3)
	mult	$2, $3
	mflo	$2
	li	$3, 2
	div	$2, $3
	mflo	$2
$END6:
	move	$2,$2
	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop

	b $END4
	nop
$ELSE4:
	li	$2, -76
$END7:
	move	$2,$2
	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop

$END4:
	b $END2
	nop
$ELSE2:
	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 4
	seq	$2, $2, $3
$END9:
	beq	$2,$0,$ELSE8
	nop
$IF8:
	li	$2, 89
$END10:
	move	$2,$2
	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop

	b $END8
	nop
$ELSE8:
	li	$2, 8
$END11:
	move	$2,$2
	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop

$END8:
$END2:
	li	$2, 1
$END12:
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

