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
	addiu	$sp,$sp,-5
	sw	$fp,1($sp)
	move	$fp,$sp

	li	$2, 97
$END1:
	sb	$2, 0($sp) #c

	lb	$2, 0($sp) #c
$END3:
$FOR2:
	lb	$2, 0($sp) #c
	li	$3, 122
	slt	$2, $2, $3
$END4:
	beq	$2,$0,$END2
	nop
 # this is the problem++
	lb	$3, 0($sp) #c
	addiu	$2, $3,1
#df
	sb	$2, 0($sp) #c
$END5:
	li	$2, 1
$END6:
	lb	$3, 0($sp) #c
	add	$2, $2, $3
#df
	sb	$2, 0($sp) #c
	b $FOR2
	nop
$END2:
	lb	$2, 0($sp) #c
$END7:
	move	$sp,$fp
	lw	$fp,1($sp)
	addiu	$sp,$sp,5
	j	$31

	nop

	move	$sp,$fp
	lw	$fp,1($sp)
	addiu	$sp,$sp,5
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

