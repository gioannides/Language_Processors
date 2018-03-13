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

$END0:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	sw	$31,8($sp)
	move	$fp,$sp

	lw	$2, 20($sp) #a
	lw	$3, 24($sp) #b
	add	$2, $2, $3
$END2:
	lw	$3, 28($sp) #c
	mult	$2, $3
	mflo	$2
	lw	$3, 32($sp) #d
	lw	$4, 36($sp) #e
	lw	$5, 40($sp) #f
	mult	$4, $5
	mflo	$4
$END4:
	add	$3, $3, $4
$END3:
	add	$2, $2, $3
	lw	$3, 20($sp) #a
	lw	$4, 44($sp) #g
	mult	$3, $4
	mflo	$3
	add	$2, $2, $3
	lw	$3, 48($sp) #h
	lw	$4, 52($sp) #i
	mult	$3, $4
	mflo	$3
	add	$2, $2, $3
	lw	$3, 56($sp) #j
	add	$2, $2, $3
	lw	$3, 60($sp) #k
	add	$2, $2, $3
$END1:
	move	$2,$2
	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop

	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
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

$END6:
$END7:
$END8:
$END9:
$END10:
$END11:
$END12:
$END13:
$END14:
$END15:
$END16:
$END5:
$END18:
$END19:
$END20:
$END21:
$END22:
$END23:
$END24:
$END25:
$END26:
$END27:
$END28:
$END17:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-60
	sw	$fp,56($sp)
	sw	$31,52($sp)
	move	$fp,$sp

#VARIABLE : fNOT DECLARED!!!

	li	$2, 1
$END30:
	sw	$2, 4($sp) #a

	li	$2, 2
$END31:
	sw	$2, 8($sp) #b

	li	$2, 3
$END32:
	sw	$2, 12($sp) #c

	li	$2, 2
$END33:
	sw	$2, 16($sp) #d

	li	$2, 2
$END34:
	sw	$2, 20($sp) #e

	li	$2, 1
$END35:
	sw	$2, 24($sp) #f

	li	$2, 2
$END36:
	sw	$2, 28($sp) #g

	li	$2, 1
$END37:
	sw	$2, 32($sp) #h

	li	$2, 3
$END38:
	sw	$2, 36($sp) #i

	li	$2, 4
$END39:
	sw	$2, 40($sp) #j

	li	$2, 3
$END40:
	sw	$2, 44($sp) #k
	.option pic
	jal f
	nop
$END29:
#VARIABLE : fNOT DECLARED!!!

	li	$2, 1
	li	$3, 2
	add	$2, $2, $3
	li	$3, 4
	add	$2, $2, $3
$END42:
	sw	$2, 4($sp) #a

	li	$2, 2
$END43:
	sw	$2, 8($sp) #b

	li	$2, 3
$END44:
	sw	$2, 12($sp) #c

	li	$2, 2
$END45:
	sw	$2, 16($sp) #d

	li	$2, 2
$END46:
	sw	$2, 20($sp) #e

	li	$2, 1
$END47:
	sw	$2, 24($sp) #f

	li	$2, 2
$END48:
	sw	$2, 28($sp) #g

	li	$2, 1
$END49:
	sw	$2, 32($sp) #h

	li	$2, 3
$END50:
	sw	$2, 36($sp) #i

	li	$2, 4
$END51:
	sw	$2, 40($sp) #j

	li	$2, 3
$END52:
	sw	$2, 44($sp) #k
	.option pic
	jal f
	nop
$END41:
	move	$2,$2
	move	$sp,$fp
	lw	$31,52($sp)
	lw	$fp,56($sp)
	addiu	$sp,$sp,60
	j	$31

	nop

	move	$sp,$fp
	lw	$31,52($sp)
	lw	$fp,56($sp)
	addiu	$sp,$sp,60
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

