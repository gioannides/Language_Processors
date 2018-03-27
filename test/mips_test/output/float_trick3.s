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
	addiu $sp,$sp,-180
	sw $fp,176($sp)
	sw $31,172($sp)
	move $fp,$sp

	swc1	$f12,180($sp)
	sw $5,184($sp)
	sw $6,188($sp)
	sw $7,192($sp)
$BEGIN3:
	lwc1	$f2, 180($sp) #x
	nop	
	li.s	$f3, 5
	c.lt.s	$f3,$f2
	bc1f	$NOT_GT5
	nop

	li.s	$f2,1
	b	$ENDGT5
	nop	
$NOT_GT5:
	mtc1	$0,$f2
	nop

$ENDGT5:
$END4:
$BEGIN2_3:	li.s	$f1,0
	c.eq.s	$f2,$f1
	nop
	bc1t	$END3
	nop
$WHILE3:
	lwc1	$f2, 180($sp) #x
	nop	
	li.s	$f3, 1
	sub.s	$f2,$f2,$f3
$END7:
	lwc1	$f3, 180($sp) #x
	nop	
	swc1	$f2,180($sp) #x

	b $BEGIN3
	nop
$END3:
	lwc1	$f2, 180($sp) #x
	nop	
$END8:
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
	.end NOTEQUAL
	.size NOTEQUAL, .-NOTEQUAL

