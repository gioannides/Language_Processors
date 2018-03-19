	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls



	.data
	.globl	a
	.align	2
	.type	a, @object
	.size	a, 4
a:
	.word	3
#0
#3
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0


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
	addiu $sp,$sp,-168
	sw $fp,164($sp)
	sw $31,160($sp)
	move $fp,$sp

	sw $4,168($sp)
	sw $5,172($sp)
	sw $6,176($sp)
	sw $7,180($sp)
	li	$2, 0
	sw	$2,156($sp) #b

	li	$2, 0
	sw	$2,152($sp) #j

	li	$2, 0
	sw	$2,148($sp) #k

	li	$2, 100
	sw	$2,144($sp) #x

	li	$2, 0
	sw	$2,140($sp) #i

	li	$2, 1
	lui	$3, %hi(a)
	lw	$3, %lo(a)($3)
	add	$2, $2, $3
	lui	$3, %hi(a)
	sw	$2, %lo(a)($3)
	lw	$3, 156($sp) #b

	sw	$2,156($sp) #b

	lw	$2, 156($sp) #b
	move	$2,$2
	move	$sp,$fp
	lw	$31,160($sp)
	lw	$fp,164($sp)
	addiu	$sp,$sp,168
	j	$31

	nop

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

