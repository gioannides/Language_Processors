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
$END3:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-132
	sw $fp,128($sp)
	sw $31,124($sp)
	move $fp,$sp

	li	$2, 99
$END5:
	sw	$2,120($sp) #n

	li	$2, 0
$END6:
	sw	$2,116($sp) #acc

	lw	$2, 120($sp) #n
$END7:
	sw	$2,112($sp) #t

$BEGIN8:
	lw	$2, 112($sp) #t
	lw	$3, 120($sp) #n
	slt	$2, $2, $3
	lw	$3, 116($sp) #acc
	li	$4, 99
	slt	$3, $3, $4
	sne	$2,$0,$2
	bne	$2,$0,$SHORTCIRCUIT0
	sne	$3,$0,$3
$SHORTCIRCUIT0:
	or	$2,$2,$3
$END9:
	beq	$2,$0,$END8
	nop
$WHILE8:
	lw	$2, 116($sp) #acc
	lw	$3, 112($sp) #t
	add	$2, $2, $3
$END11:
	lw	$3, 116($sp) #acc

	sw	$2,116($sp) #acc

	b $BEGIN8
	nop
$END8:
	lw	$2, 116($sp) #acc
$END12:
	move	$2,$2
	move	$sp,$fp
	lw	$31,124($sp)
	lw	$fp,128($sp)
	addiu	$sp,$sp,132
	j	$31

	nop

	move $sp,$fp
	lw $31,124($sp)
	lw $fp,128($sp)
	addiu $sp,$sp,132
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

