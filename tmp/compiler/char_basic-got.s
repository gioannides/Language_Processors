	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls

FunctDef

new function
	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END2:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-144
	sw $fp,140($sp)
	sw $31,136($sp)
	move $fp,$sp

	sw $4,144($sp)
	sw $5,148($sp)
	sw $6,152($sp)
	sw $7,156($sp)
	sw	$0, 132($sp) #k

	li	$2, 56
$END4:
	sb	$2,128($sp) #z
	lb	$2, 128($sp) #z
$END5:
	move	$2,$2
	move	$sp,$fp
	lw	$31,136($sp)
	lw	$fp,140($sp)
	addiu	$sp,$sp,144
	j	$31

	nop

	move $sp,$fp
	lw $31,136($sp)
	lw $fp,140($sp)
	addiu $sp,$sp,144
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

