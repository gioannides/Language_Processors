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
	li.s	$f2, 0
$END4:
	swc1	$f2,172($sp) #result

$DO5:
	lwc1	$f2, 184($sp) #a
	nop	
	lwc1	$f3, 188($sp) #b
	nop	
	mul.s	$f2,$f2,$f3
$END8:
$END7:
	lwc1	$f3, 172($sp) #result
	nop	
	add.s	$f2,$f2,$f3
	swc1	$f2,172($sp) #result

	lwc1	$f2, 184($sp) #a
	nop	
	lwc1	$f3, 184($sp) #a
	nop	
	li.s	$f3,-1
	add.s	$f3,$f3,$f2
	swc1	$f3,184($sp) #a

$END9:
	lwc1	$f2, 184($sp) #a
	nop	
$END11:
	lwc1	$f3, 188($sp) #b
	nop	
	c.lt.s	$f3,$f2
	bc1f	$NOT_GT12
	nop

	li.s	$f2,1
	b	$ENDGT12
	nop	
$NOT_GT12:
	mtc1	$0,$f2
	nop

$ENDGT12:
	li.s	$f1,0
	c.eq.s	$f2,$f1
	bc1f	$NOT_014
	nop	
	b	$DONE_14
	nop	
$NOT_014:
	li.s	$f1,1
	c.lt.s	$f2,$f1
	bc1t	$LT_THAN114
	nop	
	b	$DONE_14
	nop	
$LT_THAN114:
	li.s	$f2,1
$DONE_14:
	cvt.w.s	$f2,$f2
	mfc1	$2,$f2
	nop	
	sne $2,$0,$2
	beq $0,$2,$SHORTCIRCUIT_AND13
	nop	
	lwc1	$f3, 188($sp) #b
	nop	
	lwc1	$f4, 184($sp) #a
	nop	
	c.lt.s	$f3,$f4
	bc1f	$NOT_LT16
	nop

	li.s	$f3,1
	b	$ENDLT16
	nop	
$NOT_LT16:
	mtc1	$0,$f3
	nop

$ENDLT16:
$END15:
	mtc1	$2,$f2
	nop

	cvt.s.w	$f2,$f2
	nop

	li.s	$f1,0
	c.eq.s	$f3,$f1
	bc1f	$NOT_017
	nop	
	b	$DONE_17
	nop	
$NOT_017:
	li.s	$f1,1
	c.lt.s	$f3,$f1
	bc1t	$LT_THAN117
	nop	
	b	$DONE_17
	nop	
$LT_THAN117:
	li.s	$f3,1
$DONE_17:
	cvt.w.s	$f3,$f3
	mfc1	$3,$f3
	nop	
	sne $3,$0,$3
	and $2,$2,$3
$SHORTCIRCUIT_AND13:
$END10:
$BEGIN2_5:	beq	$2,$0,$END5
	nop
	b $DO5
	nop
$END5:
	lwc1	$f2, 172($sp) #result
	nop	
$END18:
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

