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
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-160
	sw $fp,156($sp)
	sw $31,152($sp)
	move $fp,$sp

	sw $4,160($sp)
	sw $5,164($sp)
	sw $6,168($sp)
	sw $7,172($sp)
	sw	$0, 148($sp) #b

	li	$2, 9
	sw	$2,144($sp) #a

	li	$2, 2
	sw	$2,140($sp) #c

$BEGIN2:
	lw	$2, 144($sp) #a
	beq	$2,$0,$END_iter2
	nop
$WHILE2:
	lw	$2, 148($sp) #b
	lw	$3, 144($sp) #a

	sw	$2,144($sp) #a

	li	$2, 465
	lw	$3, 140($sp) #c

	sw	$2,140($sp) #c

	b $BEGIN2
	nop
$END_iter2:
	lw	$2, 140($sp) #c
	move	$2,$2
	move	$sp,$fp
	lw	$31,152($sp)
	lw	$fp,156($sp)
	addiu	$sp,$sp,160
	j	$31

	nop

	move $sp,$fp
	lw $31,152($sp)
	lw $fp,156($sp)
	addiu $sp,$sp,160
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

