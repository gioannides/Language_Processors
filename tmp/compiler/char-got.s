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
	addiu	$sp,$sp,-20
	sw	$fp,16($sp)
	sw	$31,12($sp)
	move	$fp,$sp

	li	$2, 97
$END1:
	sb	$2, 8($sp) #c

	lb	$2, 8($sp) #c
$END3:
$FOR2:
	lb	$2, 8($sp) #c
	li	$3, 122
	slt	$2, $2, $3
$END4:
	beq	$2,$0,$END2
	nop
	li	$2, 1
$END5:
	lb	$3, 8($sp) #c
	add	$2, $2, $3
#df
	sb	$2, 8($sp) #c
	lb	$3, 8($sp) #c
	addiu	$2, $3,1
#df
	sb	$2, 8($sp) #c
$END6:
	b $FOR2
	nop
$END2:
	lb	$2, 8($sp) #c
$END7:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

