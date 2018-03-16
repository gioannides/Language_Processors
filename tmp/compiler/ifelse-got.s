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

$END3:
$IF2:
$END6:
$IF5:
$END8:
$ELSE5:
$END10:
$END5:
$ELSE2:
$END12:
$IF11:
$END14:
$ELSE11:
$END16:
$END11:
$END2:
$END17:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-120
	sw	$fp,116($sp)
	sw	$31,112($sp)
	move	$fp,$sp

	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 8
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END20:
	beq	$2,$0,$ELSE19
	nop
$IF19:
	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 8
	slt	$2, $2, $3
$END23:
	beq	$2,$0,$ELSE22
	nop
$IF22:
	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	lui	$3, %hi(a)
	lw	$3, %lo(a)($3)
	mult	$2, $3
	mflo	$2
	li	$3, 2
	div	$2, $3
	mflo	$2
$END25:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

	b $END22
	nop
$ELSE22:
	li	$2, 76
	sub	$2,$0,$2#-
$END27:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

$END22:
	b $END19
	nop
$ELSE19:
	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 4
	seq	$2, $2, $3
$END29:
	beq	$2,$0,$ELSE28
	nop
$IF28:
	li	$2, 89
$END31:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

	b $END28
	nop
$ELSE28:
	li	$2, 8
$END33:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

$END28:
$END19:
	li	$2, 1
$END34:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

