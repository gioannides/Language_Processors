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
$END1:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-24
	sw	$fp,20($sp)
	sw	$31,16($sp)
	move	$fp,$sp

	li	$2, 1
$END2:
	sw	$2, 12($sp) #x

	li	$2, 0
$END3:
	sw	$2, 8($sp) #y

	lw	$2, 12($sp) #x
$END5:
$FOR4:
	lw	$2, 12($sp) #x
	li	$3, 50
	sle	$2, $2, $3
$END6:
	beq	$2,$0,$END4
	nop
	lw	$2, 12($sp) #x
	li	$3, 33
	seq	$2, $2, $3
$END8:
	beq	$2,$0,$END7
	nop
$IF7:
	lw	$3, 12($sp) #x

	addiu	$2, $3,1
#df
	sw	$2,12($sp) #x

$END9:
	b $FOR4
	nop
$END7:
	lw	$3, 8($sp) #y

	addiu	$2, $3,1
#df
	sw	$2,8($sp) #y

$END10:
	lw	$3, 12($sp) #x

	addiu	$2, $3,1
#df
	sw	$2,12($sp) #x

$END11:
	b $FOR4
	nop
$END4:
	lw	$2, 8($sp) #y
$END12:
	move	$2,$2
	move	$sp,$fp
	lw	$31,16($sp)
	lw	$fp,20($sp)
	addiu	$sp,$sp,24
	j	$31

	nop

	move	$sp,$fp
	lw	$31,16($sp)
	lw	$fp,20($sp)
	addiu	$sp,$sp,24
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

