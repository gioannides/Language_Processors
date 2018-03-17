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
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-120
	sw	$fp,116($sp)
	sw	$31,112($sp)
	move	$fp,$sp

	lw	$2, 124($sp) #a
	lw	$3, 128($sp) #b
	add	$2, $2, $3
$END3:
	lw	$3, 132($sp) #c
	mult	$2, $3
	mflo	$2
	lw	$3, 136($sp) #d
	lw	$4, 140($sp) #e
	lw	$5, 144($sp) #f
	mult	$4, $5
	mflo	$4
$END5:
	add	$3, $3, $4
$END4:
	add	$2, $2, $3
	lw	$3, 124($sp) #a
	lw	$4, 148($sp) #g
	mult	$3, $4
	mflo	$3
	add	$2, $2, $3
	lw	$3, 152($sp) #h
	lw	$4, 156($sp) #i
	mult	$3, $4
	mflo	$3
	add	$2, $2, $3
	lw	$3, 160($sp) #j
	add	$2, $2, $3
	lw	$3, 164($sp) #k
	add	$2, $2, $3
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
$END10:
$END11:
$END12:
$END13:
$END14:
$END15:
$END16:
$END17:
$END18:
$END7:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-164
	sw	$fp,160($sp)
	sw	$31,156($sp)
	move	$fp,$sp

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
	li	$2, 1
$END21:
	sw	$2, 4($sp) #a

	li	$2, 2
$END22:
	sw	$2, 8($sp) #b

	li	$2, 3
$END23:
	sw	$2, 12($sp) #c

	li	$2, 2
$END24:
	sw	$2, 16($sp) #d

	li	$2, 2
$END25:
	sw	$2, 20($sp) #e

	li	$2, 1
$END26:
	sw	$2, 24($sp) #f

	li	$2, 2
$END27:
	sw	$2, 28($sp) #g

	li	$2, 1
$END28:
	sw	$2, 32($sp) #h

	li	$2, 3
$END29:
	sw	$2, 36($sp) #i

	li	$2, 4
$END30:
	sw	$2, 40($sp) #j

	li	$2, 3
$END31:
	sw	$2, 44($sp) #k

	.option pic
	jal f
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
$END20:
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
	li	$2, 4
$END33:
	sw	$2, 4($sp) #a

	li	$2, 2
$END34:
	sw	$2, 8($sp) #b

	li	$2, 3
$END35:
	sw	$2, 12($sp) #c

	li	$2, 2
$END36:
	sw	$2, 16($sp) #d

	li	$2, 2
$END37:
	sw	$2, 20($sp) #e

	li	$2, 1
$END38:
	sw	$2, 24($sp) #f

	li	$2, 2
$END39:
	sw	$2, 28($sp) #g

	li	$2, 1
$END40:
	sw	$2, 32($sp) #h

	li	$2, 3
$END41:
	sw	$2, 36($sp) #i

	li	$2, 4
$END42:
	sw	$2, 40($sp) #j

	li	$2, 3
$END43:
	sw	$2, 44($sp) #k

	.option pic
	jal f
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
$END32:
	move	$2,$2
	move	$sp,$fp
	lw	$31,156($sp)
	lw	$fp,160($sp)
	addiu	$sp,$sp,164
	j	$31

	nop

	move	$sp,$fp
	lw	$31,156($sp)
	lw	$fp,160($sp)
	addiu	$sp,$sp,164
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

