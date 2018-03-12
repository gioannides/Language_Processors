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

$END0:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-24
	sw	$fp,20($sp)
	sw	$31,16($sp)
	move	$fp,$sp

	sw	$0, 12($sp) #a

	li	$2, 8
$END1:
	sw	$2, 8($sp) #b

	lw	$2, 12($sp) #a
	lw	$3, 8($sp) #b
	slt	$2, $2, $3
$END3:
	beq	$2,$0,$END2
	nop
$IF2:
	lw	$2, 12($sp) #a
	li	$3, 1
	sub	$2, $2, $3
$END4:
	lw	$3, 12($sp) #a

#df
	sw	$2,12($sp) #a

	lw	$2, 12($sp) #a
	lw	$3, 8($sp) #b
	sgt	$2, $2, $3
$END6:
	beq	$2,$0,$END5
	nop
$IF5:
	lw	$2, 8($sp) #b
	li	$3, 3
	add	$2, $2, $3
$END7:
	lw	$3, 8($sp) #b

#df
	sw	$2,8($sp) #b

	lw	$2, 12($sp) #a
	lw	$3, 8($sp) #b
	seq	$2, $2, $3
$END9:
	beq	$2,$0,$END8
	nop
$IF8:
	lw	$2, 12($sp) #a
	lw	$3, 8($sp) #b
	mult	$2, $3
	mflo	$2
$END10:
	move	$2,$2
	move	$sp,$fp
	lw	$31,16($sp)
	lw	$fp,20($sp)
	addiu	$sp,$sp,24
	j	$31

	nop

$END8:
$END5:
	lw	$2, 8($sp) #b
$END11:
	move	$2,$2
	move	$sp,$fp
	lw	$31,16($sp)
	lw	$fp,20($sp)
	addiu	$sp,$sp,24
	j	$31

	nop

$END2:
	li	$2, 13
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

