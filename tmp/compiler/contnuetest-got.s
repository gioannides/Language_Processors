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
	addiu $sp,$sp,-156
	sw $fp,152($sp)
	sw $31,148($sp)
	move $fp,$sp

	sw $4,156($sp)
	sw $5,160($sp)
	sw $6,164($sp)
	sw $7,168($sp)
	li	$2, 0
	sw	$2,144($sp) #j

	sw	$0, 140($sp) #i

	lw	$2, 140($sp) #i
$FOR2:
	lw	$2, 140($sp) #i
	li	$3, 10
	slt	$2, $2, $3
	beq	$2,$0,$END_iter2
	nop
	lw	$2, 140($sp) #i
	li	$3, 5
	seq	$2, $2, $3
	beq	$2,$0,$END_sel4
	nop
$IF4:
	lw	$2, 140($sp) #i
	addi	$3, $2, 1 #++
	sw	$3,140($sp) #i

	b $FOR2
	nop
$END_sel4:
	lw	$2, 140($sp) #i
	lw	$3, 144($sp) #j

	add	$2, $2, $3
	sw	$2,144($sp) #j

	lw	$2, 140($sp) #i
	addi	$3, $2, 1 #++
	sw	$3,140($sp) #i

	b $FOR2
	nop
$END_iter2:
	lw	$2, 144($sp) #j
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

