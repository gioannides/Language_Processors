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
#0
#8
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0


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
$ELSE5:
$END5:
$ELSE2:
$END10:
$IF9:
$ELSE9:
$END9:
$END2:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-120
	sw $fp,116($sp)
	sw $31,112($sp)
	move $fp,$sp

	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 8
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END15:
	beq	$2,$0,$ELSE14
	nop
$IF14:
	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 8
	slt	$2, $2, $3
$END18:
	beq	$2,$0,$ELSE17
	nop
$IF17:
	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	lui	$3, %hi(a)
	lw	$3, %lo(a)($3)
	mult	$2, $3
	mflo	$2
	li	$3, 2
	div	$2, $3
	mflo	$2
$END20:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

	b $END17
	nop
$ELSE17:
	li	$2, 76
	sub	$2,$0,$2#-
$END22:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

$END17:
	b $END14
	nop
$ELSE14:
	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 4
	seq	$2, $2, $3
$END24:
	beq	$2,$0,$ELSE23
	nop
$IF23:
	li	$2, 89
$END26:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

	b $END23
	nop
$ELSE23:
	li	$2, 8
$END28:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

$END23:
$END14:
	li	$2, 1
$END29:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

	move $sp,$fp
	lw $31,112($sp)
	lw $fp,116($sp)
	addiu $sp,$sp,120
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

