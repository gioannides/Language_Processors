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

$IF1:
$IF3:
$IF5:
$END_sel5:
$END_sel3:
$END_sel1:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-156
	sw $fp,152($sp)
	sw $31,148($sp)
	move $fp,$sp

	sw $4,156($sp)
	sw $5,160($sp)
	sw $6,164($sp)
	sw $7,168($sp)
	sw	$0, 144($sp) #a

	li	$2, 8
	sw	$2,140($sp) #b

	lw	$2, 144($sp) #a
	lw	$3, 140($sp) #b
	slt	$2, $2, $3
	beq	$2,$0,$END_sel8
	nop
$IF8:
	lw	$2, 144($sp) #a
	li	$3, 1
	sub	$2, $2, $3
	lw	$3, 144($sp) #a

	sw	$2,144($sp) #a

	lw	$2, 144($sp) #a
	lw	$3, 140($sp) #b
	sgt	$2, $2, $3
	beq	$2,$0,$END_sel10
	nop
$IF10:
	lw	$2, 140($sp) #b
	li	$3, 3
	add	$2, $2, $3
	lw	$3, 140($sp) #b

	sw	$2,140($sp) #b

	lw	$2, 144($sp) #a
	lw	$3, 140($sp) #b
	seq	$2, $2, $3
	beq	$2,$0,$END_sel12
	nop
$IF12:
	lw	$2, 144($sp) #a
	lw	$3, 140($sp) #b
	mult	$2, $3
	mflo	$2
	move	$2,$2
	move	$sp,$fp
	lw	$31,148($sp)
	lw	$fp,152($sp)
	addiu	$sp,$sp,156
	j	$31

	nop

$END_sel12:
$END_sel10:
	lw	$2, 140($sp) #b
	move	$2,$2
	move	$sp,$fp
	lw	$31,148($sp)
	lw	$fp,152($sp)
	addiu	$sp,$sp,156
	j	$31

	nop

$END_sel8:
	li	$2, 13
	move	$2,$2
	move	$sp,$fp
	lw	$31,148($sp)
	lw	$fp,152($sp)
	addiu	$sp,$sp,156
	j	$31

	nop

	move $sp,$fp
	lw $31,148($sp)
	lw $fp,152($sp)
	addiu $sp,$sp,156
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

