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

$END1:
$END2:
$END3:
$END4:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-136
	sw $fp,132($sp)
	sw $31,128($sp)
	move $fp,$sp

	li	$2, 890
$END6:
	sw	$2,124($sp) #h

	li	$2, 0
$END7:
	sw	$2,120($sp) #y

	li	$2, 65
$END8:
	sb	$2,116($sp) #c
	lw	$2, 120($sp) #y
	lb	$3, 116($sp) #c
	lw	$4, 124($sp) #h
	sne	$3,$0,$3
	beq	$3,$0,$SHORTCIRCUIT0
	sne	$4,$0,$4
$SHORTCIRCUIT0:
	and	$3,$3,$4
	sne	$2,$0,$2
	bne	$2,$0,$SHORTCIRCUIT1
	sne	$3,$0,$3
$SHORTCIRCUIT1:
	or	$2,$2,$3
$END9:
	sw	$2,112($sp) #x

	lw	$2, 112($sp) #x
$END10:
	move	$2,$2
	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop

	move $sp,$fp
	lw $31,128($sp)
	lw $fp,132($sp)
	addiu $sp,$sp,136
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

