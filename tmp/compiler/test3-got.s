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

