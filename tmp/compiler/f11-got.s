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
	li	$2, 99
	sw	$2,148($sp) #n

	li	$2, 0
	sw	$2,144($sp) #acc

	lw	$2, 148($sp) #n
	sw	$2,140($sp) #t

$BEGIN2:
	lw	$2, 140($sp) #t
	lw	$3, 148($sp) #n
	slt	$2, $2, $3
	sne $2,$0,$2
	bne $2,$0,$SHORTCIRCUIT_OR8
	nop	
	lw	$3, 144($sp) #acc
	li	$4, 99
	slt	$3, $3, $4
	sne $3,$0,$3
	or $2,$2,$3
$SHORTCIRCUIT_OR8:
	beq	$2,$0,$END_iter2
	nop
$WHILE2:
	lw	$2, 144($sp) #acc
	lw	$3, 140($sp) #t
	add	$2, $2, $3
	lw	$3, 144($sp) #acc

	sw	$2,144($sp) #acc

	b $BEGIN2
	nop
$END_iter2:
	lw	$2, 144($sp) #acc
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

