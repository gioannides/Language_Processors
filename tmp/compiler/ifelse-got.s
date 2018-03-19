	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls



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

$IF1:
$IF3:
$ELSE3:
$END_sel3:
$ELSE1:
$IF6:
$ELSE6:
$END_sel6:
$END_sel1:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-148
	sw $fp,144($sp)
	sw $31,140($sp)
	move $fp,$sp

	sw $4,148($sp)
	sw $5,152($sp)
	sw $6,156($sp)
	sw $7,160($sp)
	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 8
	xor	$2, $2, $3
	sltu	$2, $0, $2
	beq	$2,$0,$ELSE10
	nop
$IF10:
	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 8
	slt	$2, $2, $3
	beq	$2,$0,$ELSE12
	nop
$IF12:
	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	lui	$3, %hi(a)
	lw	$3, %lo(a)($3)
	mult	$2, $3
	mflo	$2
	li	$3, 2
	div	$2, $3
	mflo	$2
	move	$2,$2
	move	$sp,$fp
	lw	$31,140($sp)
	lw	$fp,144($sp)
	addiu	$sp,$sp,148
	j	$31

	nop

	b $END_sel12
	nop
$ELSE12:
	li	$2, 76
	sub	$2,$0,$2#-
	move	$2,$2
	move	$sp,$fp
	lw	$31,140($sp)
	lw	$fp,144($sp)
	addiu	$sp,$sp,148
	j	$31

	nop

$END_sel12:
	b $END_sel10
	nop
$ELSE10:
	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 4
	seq	$2, $2, $3
	beq	$2,$0,$ELSE15
	nop
$IF15:
	li	$2, 89
	move	$2,$2
	move	$sp,$fp
	lw	$31,140($sp)
	lw	$fp,144($sp)
	addiu	$sp,$sp,148
	j	$31

	nop

	b $END_sel15
	nop
$ELSE15:
	li	$2, 8
	move	$2,$2
	move	$sp,$fp
	lw	$31,140($sp)
	lw	$fp,144($sp)
	addiu	$sp,$sp,148
	j	$31

	nop

$END_sel15:
$END_sel10:
	li	$2, 1
	move	$2,$2
	move	$sp,$fp
	lw	$31,140($sp)
	lw	$fp,144($sp)
	addiu	$sp,$sp,148
	j	$31

	nop

	move $sp,$fp
	lw $31,140($sp)
	lw $fp,144($sp)
	addiu $sp,$sp,148
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

