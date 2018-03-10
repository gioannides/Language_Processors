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
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-4
	sw	$fp,0($sp)
	move	$fp,$sp

	li	$2, 0
$END1:
	beq	$2,$0,$END0
	nop
$IF0:
	li	$2, 5
$END3:
	beq	$2,$0,$ELSE2
	nop
$IF2:
	li	$2, 10
$END4:
	move	$sp,$fp
	lw	$fp,0($sp)
	addiu	$sp,$sp,4
	j	$31

	nop

	b $END2
	nop
$ELSE2:
	li	$2, 13
$END5:
	move	$sp,$fp
	lw	$fp,0($sp)
	addiu	$sp,$sp,4
	j	$31

	nop

$END2:
$END0:
	li	$2, 11
$END6:
	move	$sp,$fp
	lw	$fp,0($sp)
	addiu	$sp,$sp,4
	j	$31

	nop

	move	$sp,$fp
	lw	$fp,0($sp)
	addiu	$sp,$sp,4
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

