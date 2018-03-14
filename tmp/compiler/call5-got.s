	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	test_add
	.set	nomips16
	.set	nomicromips
	.ent	test_add
	.type	test_add, @function
test_add:

$END1:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-120
	sw	$fp,116($sp)
	sw	$31,112($sp)
	move	$fp,$sp

	lw	$2, 124($sp) #a
	lw	$3, 128($sp) #b
	add	$2, $2, $3
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
	.end	 test_add
	.size	 test_add, .-test_add



	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END6:
$END7:
$END5:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-128
	sw	$fp,124($sp)
	sw	$31,120($sp)
	move	$fp,$sp

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
	li	$2, 4
$END10:
	sw	$2, 4($sp) #a

	li	$2, 54
$END11:
	sw	$2, 8($sp) #b

	.option pic
	jal test_add
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
$END9:
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

