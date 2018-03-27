	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	operations
	.set	nomips16
	.set	nomicromips
	.ent	operations
	.type	operations, @function
operations:

$END2:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-184
	sw $fp,180($sp)
	sw $31,176($sp)
	move $fp,$sp

	swc1	$f12,184($sp)
	swc1 $f14, 188($sp)
	sw $6,192($sp)
	sw $7,196($sp)
	lwc1	$f2, 188($sp) #b
	nop	
	lwc1	$f3, 184($sp) #a
	nop	
	add.s	$f2,$f2,$f3
$END5:
$END4:
.set macro

	trunc.w.s	$f2,$f2,$2
.set nomacro

	mfc1	$2,$f2
	nop

	sb	$2,172($sp) #result
	lb	$2, 172($sp) #result
$END6:
	move	$2,$2
	move	$sp,$fp
	lw	$31,176($sp)
	lw	$fp,180($sp)
	addiu	$sp,$sp,184
	j	$31

	nop

	move $sp,$fp
	lw $31,176($sp)
	lw $fp,180($sp)
	addiu $sp,$sp,184
	j $31

	nop
	.set macro
	.set reorder
	.end operations
	.size operations, .-operations

