	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	NOTEQUAL
	.set	nomips16
	.set	nomicromips
	.ent	NOTEQUAL
	.type	NOTEQUAL, @function
NOTEQUAL:
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-136
	sw $fp,132($sp)
	sw $31,128($sp)
	move $fp,$sp

	swc1	$f12,136($sp)
	swc1 $f14, 140($sp)
	sw $6,144($sp)
	sw $7,148($sp)
	lwc1	$f2, 136($sp) #a
	nop	
	lwc1	$f3, 140($sp) #b
	nop	
	mul.s	$f2,$f2,$f3
	lw	$3, 144($sp) #x
	mtc1	$3,$f3
	nop

	cvt.s.w	$f3,$f3
	nop

	mul.s	$f2,$f2,$f3
$END3:
	mov.s	$f0,$f2
	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop

	move $sp,$fp
	lw $31,128($sp)
	lw $fp,132($sp)
	addiu $sp,$sp,136
	j $31

	nop
	.set macro
	.set reorder
	.end NOTEQUAL
	.size NOTEQUAL, .-NOTEQUAL

