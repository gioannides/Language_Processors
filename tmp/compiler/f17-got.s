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
	sw	$0, 148($sp) #x

	sw	$0, 144($sp) #y

	li	$2, 2
	sw	$2,140($sp) #acc

	li	$2, 0
	lw	$3, 148($sp) #x

	sw	$2,148($sp) #x

	li	$2, 0
	lw	$3, 144($sp) #y

	sw	$2,144($sp) #y

$BEGIN2:
	lw	$2, 148($sp) #x
	li	$3, 6
	slt	$2, $2, $3
	beq	$2,$0,$END_iter2
	nop
$WHILE2:
	li	$2, 0
	lw	$3, 144($sp) #y

	sw	$2,144($sp) #y

$BEGIN4:
	lw	$2, 144($sp) #y
	lw	$3, 148($sp) #x
	xor	$2, $2, $3
	sltu	$2, $0, $2
	beq	$2,$0,$END_iter4
	nop
$WHILE4:
	lw	$2, 140($sp) #acc
	lw	$3, 144($sp) #y
	add	$2, $2, $3
	lw	$3, 140($sp) #acc

	sw	$2,140($sp) #acc

	lw	$2, 144($sp) #y
	li	$3, 1
	add	$2, $2, $3
	lw	$3, 144($sp) #y

	sw	$2,144($sp) #y

	b $BEGIN4
	nop
$END_iter4:
	lw	$2, 148($sp) #x
	li	$3, 2
	add	$2, $2, $3
	lw	$3, 148($sp) #x

	sw	$2,148($sp) #x

	b $BEGIN2
	nop
$END_iter2:
	lw	$2, 140($sp) #acc
	lw	$3, 148($sp) #x
	sub	$2, $2, $3
	lw	$3, 144($sp) #y
	sub	$2, $2, $3
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

