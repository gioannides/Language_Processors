	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	mult
	.set	nomips16
	.set	nomicromips
	.ent	mult
	.type	mult, @function
mult:

$END1:
$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-124
	sw	$fp,120($sp)
	sw	$31,116($sp)
	move	$fp,$sp

	li	$2, 0
$END4:
	sw	$2, 112($sp) #c

$BEGIN5:
	lw	$2, 128($sp) #a
	li	$3, 0
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END6:
	beq	$2,$0,$END5
	nop
$WHILE5:
	lw	$2, 112($sp) #c
	lw	$3, 132($sp) #b
	add	$2, $2, $3
$END8:
	lw	$3, 112($sp) #c

	sw	$2,112($sp) #c

	lw	$2, 128($sp) #a
	li	$3, 1
	sub	$2, $2, $3
$END9:
	lw	$3, 128($sp) #a

	sw	$2,128($sp) #a

	b $BEGIN5
	nop
$END5:
	lw	$2, 112($sp) #c
$END10:
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
	.end	 mult
	.size	 mult, .-mult



	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END12:
$END13:
$END15:
$END16:
$END14:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-136
	sw	$fp,132($sp)
	sw	$31,128($sp)
	move	$fp,$sp

	li	$2, 5
$END18:
	sw	$2, 124($sp) #a

	li	$2, 7
$END19:
	sw	$2, 120($sp) #b

	sw	$1, 116($sp)
	sw	$2, 112($sp)
	sw	$3, 108($sp)
	sw	$4, 104($sp)
	sw	$5, 100($sp)
	sw	$6, 96($sp)
	sw	$7, 92($sp)
	sw	$8, 88($sp)
	sw	$9, 84($sp)
	sw	$10, 80($sp)
	sw	$11, 76($sp)
	sw	$12, 72($sp)
	sw	$13, 68($sp)
	sw	$14, 64($sp)
	sw	$15, 60($sp)
	sw	$16, 56($sp)
	sw	$17, 52($sp)
	sw	$18, 48($sp)
	sw	$19, 44($sp)
	sw	$20, 40($sp)
	sw	$21, 36($sp)
	sw	$22, 32($sp)
	sw	$23, 28($sp)
	sw	$24, 24($sp)
	sw	$25, 20($sp)
	lw	$2, 124($sp) #a
$END21:
	sw	$2, 4($sp) #a

	lw	$2, 120($sp) #b
$END22:
	sw	$2, 8($sp) #b

	.option pic
	jal mult
	nop
	move	$25, $2
	lw	$1, 116($sp)
	lw	$2, 112($sp)
	lw	$3, 108($sp)
	lw	$4, 104($sp)
	lw	$5, 100($sp)
	lw	$6, 96($sp)
	lw	$7, 92($sp)
	lw	$8, 88($sp)
	lw	$9, 84($sp)
	lw	$10, 80($sp)
	lw	$11, 76($sp)
	lw	$12, 72($sp)
	lw	$13, 68($sp)
	lw	$14, 64($sp)
	lw	$15, 60($sp)
	lw	$16, 56($sp)
	lw	$17, 52($sp)
	lw	$18, 48($sp)
	lw	$19, 44($sp)
	lw	$20, 40($sp)
	lw	$21, 36($sp)
	lw	$22, 32($sp)
	lw	$23, 28($sp)
	lw	$24, 24($sp)
	move	$2, $25
$END20:
	move	$2,$2
	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop

	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

