	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls



	.data
	.globl	x
	.align	2
	.type	x, @object
	.size	x, 4
x:
	.word	5
#0
#5
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
	addiu $sp,$sp,-156
	sw $fp,152($sp)
	sw $31,148($sp)
	move $fp,$sp

	sw $4,156($sp)
	sw $5,160($sp)
	sw $6,164($sp)
	sw $7,168($sp)
	sw	$0, 144($sp) #z

	li	$2, 0
	sw	$2,140($sp) #y

	lw	$2, 140($sp) #y
	lui	$3, %hi(x)
	lw	$3, %lo(x)($3)
	add	$2, $2, $3
	lw	$3, 140($sp) #y

	sw	$2,140($sp) #y

	li	$2, 0
	lw	$3, 144($sp) #z

	sw	$2,144($sp) #z

$FOR2:
	lw	$2, 144($sp) #z
	li	$3, 10
	slt	$2, $2, $3
	beq	$2,$0,$END_iter2
	nop
	li	$2, 9
	sw	$2,136($sp) #x

	lw	$2, 140($sp) #y
	lw	$3, 136($sp) #x
	add	$2, $2, $3
	lw	$3, 140($sp) #y

	sw	$2,140($sp) #y

	lw	$2, 144($sp) #z
	li	$3, 1
	add	$2, $2, $3
	lw	$3, 144($sp) #z

	sw	$2,144($sp) #z

	b $FOR2
	nop
$END_iter2:
	lw	$2, 140($sp) #y
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

