	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	multiplyNumbers
	.set	nomips16
	.set	nomicromips
	.ent	multiplyNumbers
	.type	multiplyNumbers, @function
multiplyNumbers:

$END2:
$IF1:
$END3:
$ELSE1:
$END4:
$END1:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-120
	sw	$fp,116($sp)
	sw	$31,112($sp)
	move	$fp,$sp

	lw	$2, 124($sp) #n
	li	$3, 1
	sge	$2, $2, $3
$END7:
	beq	$2,$0,$ELSE6
	nop
$IF6:
	lw	$2, 124($sp) #n
	sw	$1, 120($sp)
	sw	$2, 116($sp)
	sw	$3, 112($sp)
	sw	$4, 108($sp)
	sw	$5, 104($sp)
	sw	$6, 100($sp)
	sw	$7, 96($sp)
	sw	$8, 92($sp)
	sw	$9, 88($sp)
	sw	$10, 84($sp)
	sw	$11, 80($sp)
	sw	$12, 76($sp)
	sw	$13, 72($sp)
	sw	$14, 68($sp)
	sw	$15, 64($sp)
	sw	$16, 60($sp)
	sw	$17, 56($sp)
	sw	$18, 52($sp)
	sw	$19, 48($sp)
	sw	$20, 44($sp)
	sw	$21, 40($sp)
	sw	$22, 36($sp)
	sw	$23, 32($sp)
	sw	$24, 28($sp)
	sw	$25, 24($sp)
	lw	$3, 124($sp) #n
	li	$4, 1
	sub	$3, $3, $4
$END9:
	sw	$3, 4($sp) #n

	.option pic
	jal multiplyNumbers
	nop
	move	$25, $2
	lw	$1, 120($sp)
	lw	$2, 116($sp)
	lw	$3, 112($sp)
	lw	$4, 108($sp)
	lw	$5, 104($sp)
	lw	$6, 100($sp)
	lw	$7, 96($sp)
	lw	$8, 92($sp)
	lw	$9, 88($sp)
	lw	$10, 84($sp)
	lw	$11, 80($sp)
	lw	$12, 76($sp)
	lw	$13, 72($sp)
	lw	$14, 68($sp)
	lw	$15, 64($sp)
	lw	$16, 60($sp)
	lw	$17, 56($sp)
	lw	$18, 52($sp)
	lw	$19, 48($sp)
	lw	$20, 44($sp)
	lw	$21, 40($sp)
	lw	$22, 36($sp)
	lw	$23, 32($sp)
	lw	$24, 28($sp)
	move	$3, $25
	mult	$2, $3
	mflo	$2
$END8:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

	b $END6
	nop
$ELSE6:
	li	$2, 1
$END10:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

$END6:
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 multiplyNumbers
	.size	 multiplyNumbers, .-multiplyNumbers



	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END12:
$END14:
$END13:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-128
	sw	$fp,124($sp)
	sw	$31,120($sp)
	move	$fp,$sp

	li	$2, 3
$END16:
	sw	$2, 116($sp) #n

	sw	$1, 112($sp)
	sw	$2, 108($sp)
	sw	$3, 104($sp)
	sw	$4, 100($sp)
	sw	$5, 96($sp)
	sw	$6, 92($sp)
	sw	$7, 88($sp)
	sw	$8, 84($sp)
	sw	$9, 80($sp)
	sw	$10, 76($sp)
	sw	$11, 72($sp)
	sw	$12, 68($sp)
	sw	$13, 64($sp)
	sw	$14, 60($sp)
	sw	$15, 56($sp)
	sw	$16, 52($sp)
	sw	$17, 48($sp)
	sw	$18, 44($sp)
	sw	$19, 40($sp)
	sw	$20, 36($sp)
	sw	$21, 32($sp)
	sw	$22, 28($sp)
	sw	$23, 24($sp)
	sw	$24, 20($sp)
	sw	$25, 16($sp)
	lw	$2, 116($sp) #n
$END18:
	sw	$2, 4($sp) #n

	.option pic
	jal multiplyNumbers
	nop
	move	$25, $2
	lw	$1, 112($sp)
	lw	$2, 108($sp)
	lw	$3, 104($sp)
	lw	$4, 100($sp)
	lw	$5, 96($sp)
	lw	$6, 92($sp)
	lw	$7, 88($sp)
	lw	$8, 84($sp)
	lw	$9, 80($sp)
	lw	$10, 76($sp)
	lw	$11, 72($sp)
	lw	$12, 68($sp)
	lw	$13, 64($sp)
	lw	$14, 60($sp)
	lw	$15, 56($sp)
	lw	$16, 52($sp)
	lw	$17, 48($sp)
	lw	$18, 44($sp)
	lw	$19, 40($sp)
	lw	$20, 36($sp)
	lw	$21, 32($sp)
	lw	$22, 28($sp)
	lw	$23, 24($sp)
	lw	$24, 20($sp)
	move	$2, $25
$END17:
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

