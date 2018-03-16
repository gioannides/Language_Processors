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

$END1:
$END3:
$IF2:
$END6:
$END7:
$END5:
$ELSE2:
$END8:
$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-136
	sw	$fp,132($sp)
	sw	$31,128($sp)
	move	$fp,$sp

	sw	$0, 124($sp) #r

	li	$2, 1
	li	$3, 3
	add	$2, $2, $3
$END11:
$END10:
	lw	$2, 144($sp) #y
	lw	$3, 140($sp) #x
	sgt	$2, $2, $3
$END13:
	beq	$2,$0,$ELSE12
	nop
$IF12:
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
	lw	$2, 144($sp) #y
	li	$3, 1
	sub	$2, $2, $3
$END16:
	sw	$2, 4($sp) #x

	move	$4, $2
	lw	$2, 140($sp) #x
$END17:
	sw	$2, 8($sp) #y

	move	$5, $2
	.option pic
	jal f
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
	move	$2, $25
$END15:
	move	$2,$2
	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop

	b $END12
	nop
$ELSE12:
	lw	$2, 124($sp) #r
$END18:
	move	$2,$2
	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop

$END12:
	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
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

$END20:
$END21:
$END23:
$END24:
$END22:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-136
	sw	$fp,132($sp)
	sw	$31,128($sp)
	move	$fp,$sp

	li	$2, 3
$END26:
	sw	$2, 124($sp) #a

	li	$2, 5
$END27:
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
$END29:
	sw	$2, 4($sp) #x

	move	$4, $2
	lw	$2, 120($sp) #b
$END30:
	sw	$2, 8($sp) #y

	move	$5, $2
	.option pic
	jal f
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
$END28:
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

