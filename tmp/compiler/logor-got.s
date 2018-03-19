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
	addiu $sp,$sp,-164
	sw $fp,160($sp)
	sw $31,156($sp)
	move $fp,$sp

	sw $4,164($sp)
	sw $5,168($sp)
	sw $6,172($sp)
	sw $7,176($sp)
	li	$2, 890
	sw	$2,152($sp) #h

	li	$2, 0
	sw	$2,148($sp) #y

	li	$2, 65
	sb	$2,144($sp) #c
	lw	$2, 148($sp) #y
	sne $2,$0,$2
	bne $2,$0,$SHORTCIRCUIT_OR9
	nop	
	lb	$3, 144($sp) #c
	sne $3,$0,$3
	beq $0,$3,$SHORTCIRCUIT_AND10
	nop	
	lw	$4, 152($sp) #h
	sne $4,$0,$4
	and $3,$3,$4
$SHORTCIRCUIT_AND10:
	sne $3,$0,$3
	or $2,$2,$3
$SHORTCIRCUIT_OR9:
	sw	$2,140($sp) #x

	lw	$2, 140($sp) #x
	move	$2,$2
	move	$sp,$fp
	lw	$31,156($sp)
	lw	$fp,160($sp)
	addiu	$sp,$sp,164
	j	$31

	nop

	move $sp,$fp
	lw $31,156($sp)
	lw $fp,160($sp)
	addiu $sp,$sp,164
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

