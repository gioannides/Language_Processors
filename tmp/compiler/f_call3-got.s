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
	lw	$3, 132($sp) #c
	add	$2, $2, $3
	lw	$3, 136($sp) #d
	add	$2, $2, $3
	lw	$3, 140($sp) #e
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
$END12:
$END13:
$END14:
$END15:
$END16:
$END11:
$IF10:
$END17:
$END10:
$END18:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-160
	sw	$fp,156($sp)
	sw	$31,152($sp)
	move	$fp,$sp

	li	$2, 1
$END20:
	sw	$2, 148($sp) #g

	li	$2, 7
$END21:
	sw	$2, 144($sp) #h

	li	$2, 8
$END22:
	sw	$2, 140($sp) #i

	li	$2, 3
$END23:
	sw	$2, 136($sp) #j

	li	$2, 4
$END24:
	sw	$2, 132($sp) #k

	sw	$1, 128($sp)
	sw	$2, 124($sp)
	sw	$3, 120($sp)
	sw	$4, 116($sp)
	sw	$5, 112($sp)
	sw	$6, 108($sp)
	sw	$7, 104($sp)
	sw	$8, 100($sp)
	sw	$9, 96($sp)
	sw	$10, 92($sp)
	sw	$11, 88($sp)
	sw	$12, 84($sp)
	sw	$13, 80($sp)
	sw	$14, 76($sp)
	sw	$15, 72($sp)
	sw	$16, 68($sp)
	sw	$17, 64($sp)
	sw	$18, 60($sp)
	sw	$19, 56($sp)
	sw	$20, 52($sp)
	sw	$21, 48($sp)
	sw	$22, 44($sp)
	sw	$23, 40($sp)
	sw	$24, 36($sp)
	sw	$25, 32($sp)
	lw	$2, 148($sp) #g
$END27:
	sw	$2, 4($sp) #a

	lw	$2, 144($sp) #h
$END28:
	sw	$2, 8($sp) #b

	lw	$2, 140($sp) #i
$END29:
	sw	$2, 12($sp) #c

	lw	$2, 136($sp) #j
$END30:
	sw	$2, 16($sp) #d

	lw	$2, 132($sp) #k
$END31:
	sw	$2, 20($sp) #e

	.option pic
	jal f
	nop
	move	$25, $2
	lw	$1, 128($sp)
	lw	$2, 124($sp)
	lw	$3, 120($sp)
	lw	$4, 116($sp)
	lw	$5, 112($sp)
	lw	$6, 108($sp)
	lw	$7, 104($sp)
	lw	$8, 100($sp)
	lw	$9, 96($sp)
	lw	$10, 92($sp)
	lw	$11, 88($sp)
	lw	$12, 84($sp)
	lw	$13, 80($sp)
	lw	$14, 76($sp)
	lw	$15, 72($sp)
	lw	$16, 68($sp)
	lw	$17, 64($sp)
	lw	$18, 60($sp)
	lw	$19, 56($sp)
	lw	$20, 52($sp)
	lw	$21, 48($sp)
	lw	$22, 44($sp)
	lw	$23, 40($sp)
	lw	$24, 36($sp)
	move	$2, $25
$END26:
	beq	$2,$0,$END25
	nop
$IF25:
	li	$2, 1
$END32:
	move	$2,$2
	move	$sp,$fp
	lw	$31,152($sp)
	lw	$fp,156($sp)
	addiu	$sp,$sp,160
	j	$31

	nop

$END25:
	li	$2, 0
$END33:
	move	$2,$2
	move	$sp,$fp
	lw	$31,152($sp)
	lw	$fp,156($sp)
	addiu	$sp,$sp,160
	j	$31

	nop

	move	$sp,$fp
	lw	$31,152($sp)
	lw	$fp,156($sp)
	addiu	$sp,$sp,160
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

