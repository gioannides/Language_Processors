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
	sw	$0, 152($sp) #k

	li	$2, 1
	li	$3, 2
	add	$2, $2, $3
	li	$3, 3
	add	$2, $2, $3
	li	$3, 4
	add	$2, $2, $3
	li	$3, 5
	add	$2, $2, $3
	li	$3, 6
	add	$2, $2, $3
	sw	$2,148($sp) #x

	lw	$2, 148($sp) #x
	li	$3, 3
	div	$2, $3
	mflo	$2
	sw	$2,144($sp) #y

	lw	$2, 144($sp) #y
	li	$3, 8
	lw	$4, 148($sp) #x
	multu	$3, $4
	mflo	$3
	addu	$2, $2, $3
	sw	$2,140($sp) #z

	lw	$2, 140($sp) #z
	lw	$3, 152($sp) #k

	sw	$2,152($sp) #k

	lw	$2, 152($sp) #k
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
