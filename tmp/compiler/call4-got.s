	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	test
	.set	nomips16
	.set	nomicromips
	.ent	test
	.type	test, @function
test:

$END1:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-120
	sw	$fp,116($sp)
	sw	$31,112($sp)
	move	$fp,$sp

	lw	$2, 124($sp) #a
$END3:
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
	.end	 test
	.size	 test, .-test



	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END5:
$END7:
$END6:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-128
	sw	$fp,124($sp)
	sw	$31,120($sp)
	move	$fp,$sp

	li	$2, 5
$END9:
	sw	$2, 116($sp) #i

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
	lw	$2, 116($sp) #i
	li	$3, 3
	sub	$2, $2, $3
$END11:
	sw	$2, 4($sp) #a

	.option pic
	jal test
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
$END10:
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

