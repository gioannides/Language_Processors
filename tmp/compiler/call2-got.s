	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


$END0:

	.data
	.globl	de
	.align	2
	.type	de, @object
	.size	de, 4
de:
	.word	1


	.text
	.align	2
	.globl	f
	.set	nomips16
	.set	nomicromips
	.ent	f
	.type	f, @function
f:

$END2:
$END3:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-120
	sw	$fp,116($sp)
	sw	$31,112($sp)
	move	$fp,$sp

	li	$2, 3
$END5:
	lui	$3, %hi(de)
	lw	$3, %lo(de)($3)
	lui	$3, %hi(de)
	sw	$2, %lo(de)($3)
	li	$2, 1
$END6:
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
	.end	 f
	.size	 f, .-f



	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END8:
$END9:
$END10:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-120
	sw	$fp,116($sp)
	sw	$31,112($sp)
	move	$fp,$sp

	li	$2, 5
$END12:
	sw	$1, -4($sp)
	sw	$2, -8($sp)
	sw	$3, -12($sp)
	sw	$4, -16($sp)
	sw	$5, -20($sp)
	sw	$6, -24($sp)
	sw	$7, -28($sp)
	sw	$8, -32($sp)
	sw	$9, -36($sp)
	sw	$10, -40($sp)
	sw	$11, -44($sp)
	sw	$12, -48($sp)
	sw	$13, -52($sp)
	sw	$14, -56($sp)
	sw	$15, -60($sp)
	sw	$16, -64($sp)
	sw	$17, -68($sp)
	sw	$18, -72($sp)
	sw	$19, -76($sp)
	sw	$20, -80($sp)
	sw	$21, -84($sp)
	sw	$22, -88($sp)
	sw	$23, -92($sp)
	sw	$24, -96($sp)
	sw	$25, -100($sp)
	.option pic
	jal f
	nop
	move	$25, $2
	lw	$1, -4($sp)
	lw	$2, -8($sp)
	lw	$3, -12($sp)
	lw	$4, -16($sp)
	lw	$5, -20($sp)
	lw	$6, -24($sp)
	lw	$7, -28($sp)
	lw	$8, -32($sp)
	lw	$9, -36($sp)
	lw	$10, -40($sp)
	lw	$11, -44($sp)
	lw	$12, -48($sp)
	lw	$13, -52($sp)
	lw	$14, -56($sp)
	lw	$15, -60($sp)
	lw	$16, -64($sp)
	lw	$17, -68($sp)
	lw	$18, -72($sp)
	lw	$19, -76($sp)
	lw	$20, -80($sp)
	lw	$21, -84($sp)
	lw	$22, -88($sp)
	lw	$23, -92($sp)
	lw	$24, -96($sp)
	move	$2, $25
$END13:
	lui	$2, %hi(de)
	lw	$2, %lo(de)($2)
$END14:
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

