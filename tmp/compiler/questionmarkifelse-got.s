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

	beq	$2,$0,$ELSE2
	nop
$IF2:
$END3:
	b $END2
	nop
$ELSE2:
$END4:
	b $END2
	nop
$END2:
$END5:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-120
	sw	$fp,116($sp)
	sw	$31,112($sp)
	move	$fp,$sp

	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 0
	slt	$2, $2, $3
$END8:
	beq	$2,$0,$ELSE7
	nop
$IF7:
	li	$2, 0
$END9:
	lui	$3, %hi(a)
	lw	$3, %lo(a)($3)
	lui	$3, %hi(a)
	sw	$2, %lo(a)($3)
	b $END7
	nop
$ELSE7:
	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 9
	seq	$2, $2, $3
$END10:
	b $END7
	nop
$END7:
	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
$END11:
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

