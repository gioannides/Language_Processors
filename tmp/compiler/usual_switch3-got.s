	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END0:
$END1:
$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-28
	sw	$fp,24($sp)
	sw	$31,20($sp)
	move	$fp,$sp

	li	$2, 8
$END3:
	sw	$2, 16($sp) #x

	li	$2, 9
$END4:
	sw	$2, 12($sp) #y

	li	$2, 88
$END5:
	sw	$2, 8($sp) #z

	lw	$2, 16($sp) #x
$END7:
	li	$3, 1
$END9:
	beq	$2,$3,$CASE8
	nop
	li	$3, 2
$END11:
	beq	$2,$3,$CASE10
	nop
	lw	$3, 16($sp) #x
$END12:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

	li	$3, 4
$END14:
	beq	$2,$3,$CASE13
	nop
	lw	$3, 16($sp) #x
$END15:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

	li	$3, 8
$END17:
	beq	$2,$3,$CASE16
	nop
	lw	$3, 16($sp) #x
$END18:
	move	$2,$3
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE8:
	li	$2, 21
$END19:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

$CASE10:
	li	$2, 55
$END20:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	lw	$2, 16($sp) #x
$END21:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE13:
	li	$2, 66
$END22:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	lw	$2, 16($sp) #x
$END23:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$CASE16:
	li	$2, 87
$END24:
	lw	$3, 16($sp) #x

#df
	sw	$2,16($sp) #x

	lw	$2, 16($sp) #x
$END25:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

$END6:
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

