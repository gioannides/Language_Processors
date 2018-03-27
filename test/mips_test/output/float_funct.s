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

$END2:
$END3:
$END4:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-188
	sw $fp,184($sp)
	sw $31,180($sp)
	move $fp,$sp

	sw $4,188($sp)
	sw $5,192($sp)
	sw $6,196($sp)
	sw $7,200($sp)
	li	$2, 4
$END6:
	sw	$2,176($sp) #z

	li.s	$f2, 6.75
$END7:
	swc1	$f2,172($sp) #x

	lw	$3, 176($sp) #z
	addiu	$2, $3,1
	sw	$2,176($sp) #z

$END8:
	lwc1	$f3, 172($sp) #x
	nop	
	mtc1	$2,$f2
	cvt.s.w	$f2,$f2
	swc1	$f2,172($sp) #x

	lw	$2, 176($sp) #z
	lwc1	$f3, 172($sp) #x
	nop	
	mtc1	$2,$f2
	nop

	cvt.s.w	$f2,$f2
	nop

	add.s	$f2,$f2,$f3
$END9:
	mov.s	$f0,$f2
	move	$sp,$fp
	lw	$31,180($sp)
	lw	$fp,184($sp)
	addiu	$sp,$sp,188
	j	$31

	nop

	move $sp,$fp
	lw $31,180($sp)
	lw $fp,184($sp)
	addiu $sp,$sp,188
	j $31

	nop
	.set macro
	.set reorder
	.end f
	.size f, .-f

