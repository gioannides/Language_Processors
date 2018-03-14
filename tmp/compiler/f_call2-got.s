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
$END4:
	lw	$3, 132($sp) #c
	mult	$2, $3
	mflo	$2
	lw	$3, 136($sp) #d
	lw	$4, 140($sp) #e
	lw	$5, 144($sp) #f
	mult	$4, $5
	mflo	$4
$END6:
	add	$3, $3, $4
$END5:
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
$END19:
$END8:
$END21:
$END22:
$END23:
$END24:
$END25:
$END26:
$END27:
$END28:
$END29:
$END30:
$END31:
$END20:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-164
	sw	$fp,160($sp)
	sw	$31,156($sp)
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
	li	$2, 1
$END34:
	sw	$2, 4($sp) #a

	li	$2, 2
$END35:
	sw	$2, 8($sp) #b

	li	$2, 3
$END36:
	sw	$2, 12($sp) #c

	li	$2, 2
$END37:
	sw	$2, 16($sp) #d

	li	$2, 2
$END38:
	sw	$2, 20($sp) #e

	li	$2, 1
$END39:
	sw	$2, 24($sp) #f

	li	$2, 2
$END40:
	sw	$2, 28($sp) #g

	li	$2, 1
$END41:
	sw	$2, 32($sp) #h

	li	$2, 3
$END42:
	sw	$2, 36($sp) #i

	li	$2, 4
$END43:
	sw	$2, 40($sp) #j

	li	$2, 3
$END44:
	sw	$2, 44($sp) #k

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
$END33:
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
$END46:
	sw	$2, 4($sp) #a

	li	$2, 2
$END47:
	sw	$2, 8($sp) #b

	li	$2, 3
$END48:
	sw	$2, 12($sp) #c

	li	$2, 2
$END49:
	sw	$2, 16($sp) #d

	li	$2, 2
$END50:
	sw	$2, 20($sp) #e

	li	$2, 1
$END51:
	sw	$2, 24($sp) #f

	li	$2, 2
$END52:
	sw	$2, 28($sp) #g

	li	$2, 1
$END53:
	sw	$2, 32($sp) #h

	li	$2, 3
$END54:
	sw	$2, 36($sp) #i

	li	$2, 4
$END55:
	sw	$2, 40($sp) #j

	li	$2, 3
$END56:
	sw	$2, 44($sp) #k

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
$END45:
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

