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

	sw	$0, 12($sp) #j

	li	$2, 0
$END2:
	sw	$2, 8($sp) #i

	lw	$2, 8($sp) #i
$END4:
$FOR3:
	lw	$2, 8($sp) #i
	li	$3, 10
	slt	$2, $2, $3
$END5:
	beq	$2,$0,$END3
	nop
	lw	$2, 8($sp) #i
$END6:
	lw	$3, 12($sp) #j

	add	$2, $2, $3
#df
	sw	$2,12($sp) #j

	lw	$2, 8($sp) #i
	li	$3, 5
	seq	$2, $2, $3
$END8:
	beq	$2,$0,$END7
	nop
$IF7:
	b	$END3
	nop
$END7:
	lw	$3, 8($sp) #i

	addiu	$2, $3,1
#df
	sw	$2,8($sp) #i

$END9:
	b $FOR3
	nop
$END3:
	lw	$2, 12($sp) #j
$END10:
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

