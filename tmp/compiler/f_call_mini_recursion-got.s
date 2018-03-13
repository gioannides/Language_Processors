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
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	sw	$31,8($sp)
	move	$fp,$sp

	lw	$2, 24($sp) #y
	lw	$3, 20($sp) #x
	slt	$2, $2, $3
$END1:
	beq	$2,$0,$ELSE0
	nop
$IF0:
#VARIABLE : fNOT DECLARED!!!

	lw	$2, 24($sp) #y
	li	$3, 1
	add	$2, $2, $3
$END3:
	sw	$2, 4($sp) #x

	lw	$2, 20($sp) #x
$END4:
	sw	$2, 8($sp) #y
	.option pic
	jal f
	nop
$END2:
	move	$2,$2
	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop

	b $END0
	nop
$ELSE0:
	lw	$2, 24($sp) #y
	lw	$3, 20($sp) #x
	add	$2, $2, $3
$END5:
	move	$2,$2
	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop

$END0:
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
$END9:
$END10:
$END8:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-32
	sw	$fp,28($sp)
	sw	$31,24($sp)
	move	$fp,$sp

	li	$2, 3
$END11:
	sw	$2, 20($sp) #a

	li	$2, 5
$END12:
	sw	$2, 16($sp) #b

#VARIABLE : fNOT DECLARED!!!

	lw	$2, 20($sp) #a
$END14:
	sw	$2, 4($sp) #x

	lw	$2, 16($sp) #b
$END15:
	sw	$2, 8($sp) #y
	.option pic
	jal f
	nop
$END13:
	move	$2,$2
	move	$sp,$fp
	lw	$31,24($sp)
	lw	$fp,28($sp)
	addiu	$sp,$sp,32
	j	$31

	nop

	move	$sp,$fp
	lw	$31,24($sp)
	lw	$fp,28($sp)
	addiu	$sp,$sp,32
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

