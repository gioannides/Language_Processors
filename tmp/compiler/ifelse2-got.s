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
$IF2:
$ELSE2:
$END_sel2:
$END_sel1:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-160
	sw $fp,156($sp)
	sw $31,152($sp)
	move $fp,$sp

	sw $4,160($sp)
	sw $5,164($sp)
	sw $6,168($sp)
	sw $7,172($sp)
	li	$2, 0
	sw	$2,148($sp) #a

	li	$2, 0
	sw	$2,144($sp) #b

	li	$2, 3
	sw	$2,140($sp) #x

	lw	$2, 148($sp) #a
	beq	$2,$0,$END_sel4
	nop
$IF4:
	lw	$2, 144($sp) #b
	beq	$2,$0,$ELSE5
	nop
$IF5:
	li	$2, 5
	lw	$3, 140($sp) #x

	sw	$2,140($sp) #x

	b $END_sel5
	nop
$ELSE5:
	li	$2, 10
	lw	$3, 140($sp) #x

	sw	$2,140($sp) #x

$END_sel5:
$END_sel4:
	lw	$2, 140($sp) #x
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

