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
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-180
	sw $fp,176($sp)
	sw $31,172($sp)
	move $fp,$sp

	swc1	$f12,180($sp)
	swc1 $f14, 184($sp)
	sw $6,188($sp)
	sw $7,192($sp)
	lwc1	$f2, 180($sp) #a
	nop	
	lwc1	$f3, 184($sp) #b
	nop	
	lwc1	$f4, 188($sp) #c
	nop	
	mul.s	$f3,$f3,$f4
	lwc1	$f4, 192($sp) #d
	nop	
	div.s	$f3,$f3,$f4
	add.s	$f2,$f2,$f3
$END4:
$END3:
	mov.s	$f0,$f2
	move	$sp,$fp
	lw	$31,172($sp)
	lw	$fp,176($sp)
	addiu	$sp,$sp,180
	j	$31

	nop

	move $sp,$fp
	lw $31,172($sp)
	lw $fp,176($sp)
	addiu $sp,$sp,180
	j $31

	nop
	.set macro
	.set reorder
	.end f
	.size f, .-f

