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
$ELSE1:
$END_sel1:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-172
	sw $fp,168($sp)
	sw $31,164($sp)
	move $fp,$sp

	sw $4,172($sp)
	sw $5,176($sp)
	sw $6,180($sp)
	sw $7,184($sp)
	li	$2, 20
	sw	$2,160($sp) #x

	li	$2, 7
	sw	$2,156($sp) #a

	li	$2, 8
	sw	$2,152($sp) #b

	li	$2, 98
	sw	$2,148($sp) #d

	li	$2, 115
	sb	$2,144($sp) #g
	li	$2, 9
	lw	$3, 152($sp) #b

	add	$2, $2, $3
	sw	$2,152($sp) #b

	lw	$3, 156($sp) #a

	sub	$2, $3, $2
	sw	$2,156($sp) #a

	lw	$2, 160($sp) #x
	li	$3, 1
	sub	$3,$0,$3#-
	xor	$2, $2, $3
	sltu	$2, $0, $2
	beq	$2,$0,$ELSE5
	nop
$IF5:
	li	$2, 0
	sw	$2,140($sp) #i

	lw	$2, 140($sp) #i
$FOR7:
	lw	$2, 140($sp) #i
	li	$3, 10
	slt	$2, $2, $3
	beq	$2,$0,$END_iter7
	nop
	lw	$2, 160($sp) #x
	addi	$3, $2, -1 #--
	sw	$3,160($sp) #x

	lw	$3, 140($sp) #i

	addiu	$2, $3,1
	sw	$2,140($sp) #i

	b $FOR7
	nop
$END_iter7:
	b $END_sel5
	nop
$ELSE5:
	li	$2, 1
	sub	$2,$0,$2#-
	move	$2,$2
	move	$sp,$fp
	lw	$31,164($sp)
	lw	$fp,168($sp)
	addiu	$sp,$sp,172
	j	$31

	nop

$END_sel5:
	lw	$2, 160($sp) #x
	move	$2,$2
	move	$sp,$fp
	lw	$31,164($sp)
	lw	$fp,168($sp)
	addiu	$sp,$sp,172
	j	$31

	nop

	move $sp,$fp
	lw $31,164($sp)
	lw $fp,168($sp)
	addiu $sp,$sp,172
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

