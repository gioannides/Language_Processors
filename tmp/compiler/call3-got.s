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
	lw	$3, 132($sp) #c
	add	$2, $2, $3
	lw	$3, 136($sp) #d
	add	$2, $2, $3
	lw	$3, 140($sp) #e
	add	$2, $2, $3
	lw	$3, 144($sp) #f
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

$END5:
$END6:
$END8:
$END9:
$END10:
$END11:
$END12:
$END13:
$END7:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-152
	sw	$fp,148($sp)
	sw	$31,144($sp)
	move	$fp,$sp

	li	$2, 5
$END15:
	sw	$2, 140($sp) #i

	li	$2, 10
$END16:
	sw	$2, 136($sp) #z

	sw	$1, 132($sp)
	sw	$2, 128($sp)
	sw	$3, 124($sp)
	sw	$4, 120($sp)
	sw	$5, 116($sp)
	sw	$6, 112($sp)
	sw	$7, 108($sp)
	sw	$8, 104($sp)
	sw	$9, 100($sp)
	sw	$10, 96($sp)
	sw	$11, 92($sp)
	sw	$12, 88($sp)
	sw	$13, 84($sp)
	sw	$14, 80($sp)
	sw	$15, 76($sp)
	sw	$16, 72($sp)
	sw	$17, 68($sp)
	sw	$18, 64($sp)
	sw	$19, 60($sp)
	sw	$20, 56($sp)
	sw	$21, 52($sp)
	sw	$22, 48($sp)
	sw	$23, 44($sp)
	sw	$24, 40($sp)
	sw	$25, 36($sp)
	lw	$2, 140($sp) #i
$END18:
	sw	$2, 4($sp) #a

	lw	$2, 136($sp) #z
$END19:
	sw	$2, 8($sp) #b

	li	$2, 3
$END20:
	sw	$2, 12($sp) #c

	li	$2, 4
$END21:
	sw	$2, 16($sp) #d

	li	$2, 5
$END22:
	sw	$2, 20($sp) #e

	li	$2, 6
$END23:
	sw	$2, 24($sp) #f

	.option pic
	jal test_add
	nop
	move	$25, $2
	lw	$1, 132($sp)
	lw	$2, 128($sp)
	lw	$3, 124($sp)
	lw	$4, 120($sp)
	lw	$5, 116($sp)
	lw	$6, 112($sp)
	lw	$7, 108($sp)
	lw	$8, 104($sp)
	lw	$9, 100($sp)
	lw	$10, 96($sp)
	lw	$11, 92($sp)
	lw	$12, 88($sp)
	lw	$13, 84($sp)
	lw	$14, 80($sp)
	lw	$15, 76($sp)
	lw	$16, 72($sp)
	lw	$17, 68($sp)
	lw	$18, 64($sp)
	lw	$19, 60($sp)
	lw	$20, 56($sp)
	lw	$21, 52($sp)
	lw	$22, 48($sp)
	lw	$23, 44($sp)
	lw	$24, 40($sp)
	move	$2, $25
$END17:
	move	$2,$2
	move	$sp,$fp
	lw	$31,144($sp)
	lw	$fp,148($sp)
	addiu	$sp,$sp,152
	j	$31

	nop

	move	$sp,$fp
	lw	$31,144($sp)
	lw	$fp,148($sp)
	addiu	$sp,$sp,152
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

