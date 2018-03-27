	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	f
	.set	nomips16
	.set	nomicromips
	.ent	f
	.type	f, @function
f:

$END2:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-184
	sw $fp,180($sp)
	sw $31,176($sp)
	move $fp,$sp

	sw $4,184($sp)
	sw $5,188($sp)
	sw $6,192($sp)
	sw $7,196($sp)
	li.s	$f2, 1.3455
$END4:
	swc1	$f2,172($sp) #a

	lwc1	$f2, 172($sp) #a
	nop	
$END5:
	.set macro
	trunc.w.s	$f2,$f2,$2
	.set nomacro
	mfc1	$2,$f2
	nop

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
	.end f
	.size f, .-f

