	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	f
	.set	nomips16
	.set	nomicromips
	.ent	f
	.type	f, @function
f:

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

$END5:
$END6:
$END7:
$END8:
$END9:
$END10:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-144
	sw	$fp,140($sp)
	sw	$31,136($sp)
	move	$fp,$sp

	li	$2, 1
$END12:
	sw	$2, 132($sp) #g

	li	$2, 1
$END13:
	sw	$2, 128($sp) #h

	li	$2, 1
$END14:
	sw	$2, 124($sp) #i

	li	$2, 1
$END15:
	sw	$2, 120($sp) #j

	li	$2, 4
$END16:
	sw	$2, 116($sp) #k

	lw	$2, 132($sp) #g
	lw	$3, 128($sp) #h
	add	$2, $2, $3
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
	lw	$3, 132($sp) #g
	li	$4, 6
	li	$5, 2
	mult	$4, $5
	mflo	$4
	add	$3, $3, $4
	li	$4, 7
	sub	$3, $3, $4
$END18:
	sw	$3, 4($sp) #a

	move	$4, $3
	lw	$3, 128($sp) #h
$END19:
	sw	$3, 8($sp) #b

	move	$5, $3
	.option pic
	jal f
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
	move	$3, $25
	add	$2, $2, $3
	lw	$3, 116($sp) #k
	add	$2, $2, $3
	lw	$3, 120($sp) #j
	add	$2, $2, $3
$END17:
	move	$2,$2
	move	$sp,$fp
	lw	$31,136($sp)
	lw	$fp,140($sp)
	addiu	$sp,$sp,144
	j	$31

	nop

	move	$sp,$fp
	lw	$31,136($sp)
	lw	$fp,140($sp)
	addiu	$sp,$sp,144
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

