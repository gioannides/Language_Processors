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
	lw	$3, 28($sp) #c
	add	$2, $2, $3
	lw	$3, 32($sp) #d
	add	$2, $2, $3
	lw	$3, 36($sp) #e
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

$END2:
$END3:
$END4:
$END5:
$END6:
$END7:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-36
	sw	$fp,32($sp)
	sw	$31,28($sp)
	move	$fp,$sp

	li	$2, 1
$END8:
	sw	$2, 24($sp) #g

	li	$2, 7
$END9:
	sw	$2, 20($sp) #h

	li	$2, 8
$END10:
	sw	$2, 16($sp) #i

	li	$2, 3
$END11:
	sw	$2, 12($sp) #j

	li	$2, 4
$END12:
	sw	$2, 8($sp) #k

#VARIABLE : fNOT DECLARED!!!

	lw	$2, 24($sp) #g
$END15:
	sw	$2, 4($sp) #a

	lw	$2, 20($sp) #h
$END16:
	sw	$2, 8($sp) #b

	lw	$2, 16($sp) #i
$END17:
	sw	$2, 12($sp) #c

	lw	$2, 12($sp) #j
$END18:
	sw	$2, 16($sp) #d

	lw	$2, 8($sp) #k
$END19:
	sw	$2, 20($sp) #e
	.option pic
	jal f
	nop
$END14:
	beq	$2,$0,$END13
	nop
$IF13:
	li	$2, 1
$END20:
	move	$2,$2
	move	$sp,$fp
	lw	$31,28($sp)
	lw	$fp,32($sp)
	addiu	$sp,$sp,36
	j	$31

	nop

$END13:
	li	$2, 0
$END21:
	move	$2,$2
	move	$sp,$fp
	lw	$31,28($sp)
	lw	$fp,32($sp)
	addiu	$sp,$sp,36
	j	$31

	nop

	move	$sp,$fp
	lw	$31,28($sp)
	lw	$fp,32($sp)
	addiu	$sp,$sp,36
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

