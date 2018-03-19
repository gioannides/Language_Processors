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
$IF3:
$ELSE3:
$END_sel3:
$END_sel2:
$END_sel1:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-168
	sw $fp,164($sp)
	sw $31,160($sp)
	move $fp,$sp

	sw $4,168($sp)
	sw $5,172($sp)
	sw $6,176($sp)
	sw $7,180($sp)
	li	$2, 9
	sw	$2,156($sp) #x

	li	$2, 7
	sw	$2,152($sp) #a

	li	$2, 8
	sw	$2,148($sp) #b

	li	$2, 98
	sw	$2,144($sp) #d

	li	$2, 115
	sb	$2,140($sp) #g
	li	$2, 9
	lw	$3, 148($sp) #b

	add	$2, $2, $3
	sw	$2,148($sp) #b

	lw	$3, 152($sp) #a

	sub	$2, $3, $2
	sw	$2,152($sp) #a

	lw	$2, 156($sp) #x
	li	$3, 1
	sgt	$2, $2, $3
	beq	$2,$0,$END_sel5
	nop
$IF5:
	lw	$2, 156($sp) #x
	li	$3, 1
	sgt	$2, $2, $3
	beq	$2,$0,$END_sel6
	nop
$IF6:
	lw	$2, 156($sp) #x
	li	$3, 2
	sgt	$2, $2, $3
	beq	$2,$0,$ELSE7
	nop
$IF7:
	li	$2, 88
	move	$2,$2
	move	$sp,$fp
	lw	$31,160($sp)
	lw	$fp,164($sp)
	addiu	$sp,$sp,168
	j	$31

	nop

	b $END_sel7
	nop
$ELSE7:
	li	$2, 8
	lw	$3, 148($sp) #b

	add	$2, $2, $3
	sw	$2,148($sp) #b

	lw	$3, 152($sp) #a

	mult	$2,$3
	mflo	$2
	sw	$2,152($sp) #a

	lw	$3, 148($sp) #b

	and	$2, $2, $3
	sw	$2,148($sp) #b

	lw	$3, 144($sp) #d

	or	$2, $2, $3
	sw	$2,144($sp) #d

	lb	$3, 140($sp) #g
	div	$3,$2
	mflo	$2
	sb	$2,140($sp) #g
	move	$2,$2
	move	$sp,$fp
	lw	$31,160($sp)
	lw	$fp,164($sp)
	addiu	$sp,$sp,168
	j	$31

	nop

$END_sel7:
$END_sel6:
$END_sel5:
	move $sp,$fp
	lw $31,160($sp)
	lw $fp,164($sp)
	addiu $sp,$sp,168
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

