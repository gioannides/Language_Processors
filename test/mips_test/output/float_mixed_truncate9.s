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
	lwc1	$f2, 184($sp) #a
	nop	
	li.s	$f1,0
	c.eq.s	$f2,$f1
	bc1f	$NOT_06
	nop	
	b	$DONE_6
	nop	
$NOT_06:
	li.s	$f1,1
	c.lt.s	$f2,$f1
	bc1t	$LT_THAN16
	nop	
	b	$DONE_6
	nop	
$LT_THAN16:
	li.s	$f2,1
$DONE_6:
	cvt.w.s	$f2,$f2
	mfc1	$2,$f2
	nop	
	sne $2,$0,$2
	beq $0,$2,$SHORTCIRCUIT_AND5
	nop	
	lwc1	$f3, 188($sp) #b
	nop	
	mtc1	$2,$f2
	nop

	cvt.s.w	$f2,$f2
	nop

	li.s	$f1,0
	c.eq.s	$f3,$f1
	bc1f	$NOT_07
	nop	
	b	$DONE_7
	nop	
$NOT_07:
	li.s	$f1,1
	c.lt.s	$f3,$f1
	bc1t	$LT_THAN17
	nop	
	b	$DONE_7
	nop	
$LT_THAN17:
	li.s	$f3,1
$DONE_7:
	cvt.w.s	$f3,$f3
	mfc1	$3,$f3
	nop	
	sne $3,$0,$3
	and $2,$2,$3
$SHORTCIRCUIT_AND5:
$END4:
	mtc1	$2,$f2
	cvt.s.w	$f2,$f2
	swc1	$f2,172($sp) #result

	lwc1	$f2, 172($sp) #result
	nop	
$END8:
	mov.s	$f0,$f2
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

