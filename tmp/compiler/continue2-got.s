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

	li	$2, 0
$END2:
	sw	$2, 12($sp) #y

	sw	$0, 8($sp) #x

	li	$2, 0
$END4:
	lw	$3, 8($sp) #x

#df
	sw	$2,8($sp) #x

$FOR3:
	lw	$2, 8($sp) #x
	li	$3, 10
	slt	$2, $2, $3
$END5:
	beq	$2,$0,$END3
	nop
	lw	$2, 8($sp) #x
	li	$3, 5
	seq	$2, $2, $3
$END7:
	beq	$2,$0,$END6
	nop
$IF6:
	lw	$3, 8($sp) #x

	addiu	$2, $3,1
#df
	sw	$2,8($sp) #x

$END8:
	b $FOR3
	nop
$END6:
	lw	$2, 12($sp) #y
	lw	$3, 8($sp) #x
	add	$2, $2, $3
$END9:
	lw	$3, 12($sp) #y

#df
	sw	$2,12($sp) #y

	lw	$3, 8($sp) #x

	addiu	$2, $3,1
#df
	sw	$2,8($sp) #x

$END10:
	b $FOR3
	nop
$END3:
	lw	$2, 12($sp) #y
$END11:
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

