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
	addiu $sp,$sp,-140
	sw $fp,136($sp)
	sw $31,132($sp)
	move $fp,$sp

	swc1	$f12,140($sp)
	swc1 $f14, 144($sp)
	sw $6,148($sp)
	sw $7,152($sp)
	lwc1	$f2, 140($sp) #a
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
	bne $2,$0,$SHORTCIRCUIT_OR5
	nop	
	lwc1	$f3, 144($sp) #b
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
	addi	$4, $3, 1 #++
	mtc1	$4,$f4
	cvt.s.w	$f4,$f4
	swc1	$f4,144($sp) #b

	or $2,$2,$3
$SHORTCIRCUIT_OR5:
$END4:
	mtc1	$2,$f2
	cvt.s.w	$f2,$f2
	swc1	$f2,128($sp) #result

	lwc1	$f2, 144($sp) #b
	nop	
$END8:
	mov.s	$f0,$f2
	move	$sp,$fp
	lw	$31,132($sp)
	lw	$fp,136($sp)
	addiu	$sp,$sp,140
	j	$31

	nop

	move $sp,$fp
	lw $31,132($sp)
	lw $fp,136($sp)
	addiu $sp,$sp,140
	j $31

	nop
	.set macro
	.set reorder
	.end operations
	.size operations, .-operations

