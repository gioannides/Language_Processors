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
$END4:
$END6:
$IF5:
$END8:
$ELSE5:
$END10:
$END5:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-192
	sw $fp,188($sp)
	sw $31,184($sp)
	move $fp,$sp

	sw $4,192($sp)
	sw $5,196($sp)
	sw $6,200($sp)
	sw $7,204($sp)
	li.s	$f2, 3.456
$END12:
	swc1	$f2,180($sp) #x

	li.s	$f2, 0.455
$END13:
	swc1	$f2,176($sp) #y

	li.s	$f2, 0
$END14:
	swc1	$f2,172($sp) #z

	lwc1	$f2, 172($sp) #z
	nop	
	li.s	$f1,0
	c.eq.s	$f2,$f1
	bc1f	$NOT_019
	nop	
	b	$DONE_19
	nop	
$NOT_019:
	li.s	$f1,1
	c.lt.s	$f2,$f1
	bc1t	$LT_THAN119
	nop	
	b	$DONE_19
	nop	
$LT_THAN119:
	li.s	$f2,1
$DONE_19:
	cvt.w.s	$f2,$f2
	mfc1	$2,$f2
	nop	
	sne $2,$0,$2
	bne $2,$0,$SHORTCIRCUIT_OR18
	nop	
	lwc1	$f3, 176($sp) #y
	nop	
	mtc1	$2,$f2
	nop

	cvt.s.w	$f2,$f2
	nop

	li.s	$f1,0
	c.eq.s	$f3,$f1
	bc1f	$NOT_020
	nop	
	b	$DONE_20
	nop	
$NOT_020:
	li.s	$f1,1
	c.lt.s	$f3,$f1
	bc1t	$LT_THAN120
	nop	
	b	$DONE_20
	nop	
$LT_THAN120:
	li.s	$f3,1
$DONE_20:
	cvt.w.s	$f3,$f3
	mfc1	$3,$f3
	nop	
	sne $3,$0,$3
	or $2,$2,$3
$SHORTCIRCUIT_OR18:
$END17:
	sne $2,$0,$2
	beq $0,$2,$SHORTCIRCUIT_AND21
	nop	
	lwc1	$f4, 176($sp) #y
	nop	
	li.s	$f3,1
	add.s	$f3,$f3,$f4
	swc1	$f3,176($sp) #y

	mtc1	$2,$f2
	nop

	cvt.s.w	$f2,$f2
	nop

	li.s	$f1,0
	c.eq.s	$f3,$f1
	bc1f	$NOT_022
	nop	
	b	$DONE_22
	nop	
$NOT_022:
	li.s	$f1,1
	c.lt.s	$f3,$f1
	bc1t	$LT_THAN122
	nop	
	b	$DONE_22
	nop	
$LT_THAN122:
	li.s	$f3,1
$DONE_22:
	cvt.w.s	$f3,$f3
	mfc1	$3,$f3
	nop	
	sne $3,$0,$3
	and $2,$2,$3
$SHORTCIRCUIT_AND21:
$END16:
	beq	$2,$0,$ELSE15
	nop
$IF15:
	lwc1	$f2, 172($sp) #z
	nop	
$END24:
	b $END15
	nop
$ELSE15:
	lwc1	$f2, 172($sp) #z
	nop	
$END26:
$END15:
	lwc1	$f2, 176($sp) #y
	nop	
$END27:
	mov.s	$f0,$f2
	move	$sp,$fp
	lw	$31,184($sp)
	lw	$fp,188($sp)
	addiu	$sp,$sp,192
	j	$31

	nop

	move $sp,$fp
	lw $31,184($sp)
	lw $fp,188($sp)
	addiu $sp,$sp,192
	j $31

	nop
	.set macro
	.set reorder
	.end f
	.size f, .-f

