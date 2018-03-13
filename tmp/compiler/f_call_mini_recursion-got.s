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
	addiu	$sp,$sp,-20
	sw	$fp,16($sp)
	sw	$31,12($sp)
	move	$fp,$sp

	li	$2, 1
$END1:
	sw	$2, 8($sp) #r

	lw	$2, 28($sp) #y
	lw	$3, 24($sp) #x
	slt	$2, $2, $3
$END3:
	beq	$2,$0,$ELSE2
	nop
$IF2:
#VARIABLE : fNOT DECLARED!!!

	lw	$2, 28($sp) #y
	li	$3, 1
	add	$2, $2, $3
$END5:
	sw	$2, 4($sp) #x

	lw	$2, 24($sp) #x
$END6:
	sw	$2, 8($sp) #y
	.option pic
	jal f
	nop
$END4:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

	b $END2
	nop
$ELSE2:
	lw	$2, 28($sp) #y
	lw	$3, 24($sp) #x
	add	$2, $2, $3
$END7:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

$END2:
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
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
$END11:
$END12:
$END10:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-32
	sw	$fp,28($sp)
	sw	$31,24($sp)
	move	$fp,$sp

	li	$2, 3
$END13:
	sw	$2, 20($sp) #a

	li	$2, 5
$END14:
	sw	$2, 16($sp) #b

#VARIABLE : fNOT DECLARED!!!

	lw	$2, 20($sp) #a
$END16:
	sw	$2, 4($sp) #x

	lw	$2, 16($sp) #b
$END17:
	sw	$2, 8($sp) #y
	.option pic
	jal f
	nop
$END15:
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

