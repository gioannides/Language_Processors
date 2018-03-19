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
	addiu $sp,$sp,-176
	sw $fp,172($sp)
	sw $31,168($sp)
	move $fp,$sp

	sw $4,176($sp)
	sw $5,180($sp)
	sw $6,184($sp)
	sw $7,188($sp)
	li	$2, 1
	sw	$2,164($sp) #a

	li	$2, 2
	sw	$2,160($sp) #b

	li	$2, 3
	sw	$2,156($sp) #c

	sw	$0, 152($sp) #v

	li	$2, 6
	sw	$2,148($sp) #x

	sw	$0, 144($sp) #z

	li	$2, 10
	sw	$2,140($sp) #g

	li	$2, 3
	lw	$3, 140($sp) #g

	sw	$2,140($sp) #g

	lw	$3, 156($sp) #c

	sub	$2, $3, $2
	sw	$2,156($sp) #c

	lw	$3, 160($sp) #b

	add	$2, $2, $3
	sw	$2,160($sp) #b

	lw	$3, 164($sp) #a

	sw	$2,164($sp) #a

	move	$2,$2
	move	$sp,$fp
	lw	$31,168($sp)
	lw	$fp,172($sp)
	addiu	$sp,$sp,176
	j	$31

	nop

	move $sp,$fp
	lw $31,168($sp)
	lw $fp,172($sp)
	addiu $sp,$sp,176
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

