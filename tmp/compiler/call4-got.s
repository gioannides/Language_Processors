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
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-120
	sw	$fp,116($sp)
	sw	$31,112($sp)
	move	$fp,$sp

	lw	$2, 124($sp) #a
$END2:
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

$END4:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-124
	sw	$fp,120($sp)
	sw	$31,116($sp)
	move	$fp,$sp

	li	$2, 5
$END6:
	sw	$2, 112($sp) #i

	sw	$1, 108($sp)
	sw	$2, 104($sp)
	sw	$3, 100($sp)
	sw	$4, 96($sp)
	sw	$5, 92($sp)
	sw	$6, 88($sp)
	sw	$7, 84($sp)
	sw	$8, 80($sp)
	sw	$9, 76($sp)
	sw	$10, 72($sp)
	sw	$11, 68($sp)
	sw	$12, 64($sp)
	sw	$13, 60($sp)
	sw	$14, 56($sp)
	sw	$15, 52($sp)
	sw	$16, 48($sp)
	sw	$17, 44($sp)
	sw	$18, 40($sp)
	sw	$19, 36($sp)
	sw	$20, 32($sp)
	sw	$21, 28($sp)
	sw	$22, 24($sp)
	sw	$23, 20($sp)
	sw	$24, 16($sp)
	sw	$25, 12($sp)
	lw	$2, 112($sp) #i
	li	$3, 3
	sub	$2, $2, $3
$END8:
	sw	$2, 4($sp) #a

	.option pic
	jal test
	nop
	move	$25, $2
	lw	$1, 108($sp)
	lw	$2, 104($sp)
	lw	$3, 100($sp)
	lw	$4, 96($sp)
	lw	$5, 92($sp)
	lw	$6, 88($sp)
	lw	$7, 84($sp)
	lw	$8, 80($sp)
	lw	$9, 76($sp)
	lw	$10, 72($sp)
	lw	$11, 68($sp)
	lw	$12, 64($sp)
	lw	$13, 60($sp)
	lw	$14, 56($sp)
	lw	$15, 52($sp)
	lw	$16, 48($sp)
	lw	$17, 44($sp)
	lw	$18, 40($sp)
	lw	$19, 36($sp)
	lw	$20, 32($sp)
	lw	$21, 28($sp)
	lw	$22, 24($sp)
	lw	$23, 20($sp)
	lw	$24, 16($sp)
	move	$2, $25
$END7:
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

