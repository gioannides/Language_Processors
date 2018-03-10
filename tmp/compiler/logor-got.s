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
$END1:
$END2:
$END3:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-17
	sw	$fp,13($sp)
	move	$fp,$sp

	li	$2, 890
$END4:
	sw	$2, 0($sp) #h

	li	$2, 0
$END5:
	sw	$2, 4($sp) #y

	li	$2, 65
$END6:
	sb	$2, 8($sp) #c

	lw	$2, 4($sp) #y
	lb	$3, 8($sp) #c
	lw	$4, 0($sp) #h
	sne	$3,$0,$3
	sne	$4,$0,$4
	and	$3,$3,$4
	sne	$2,$0,$2
	sne	$3,$0,$3
	or	$2,$2,$3
$END7:
	sw	$2, 9($sp) #x

	lw	$2, 9($sp) #x
$END8:
	move	$sp,$fp
	lw	$fp,13($sp)
	addiu	$sp,$sp,17
	j	$31

	nop

	move	$sp,$fp
	lw	$fp,13($sp)
	addiu	$sp,$sp,17
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

