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

$END3:
$IF2:
$ELSE2:
$END2:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-180
	sw $fp,176($sp)
	sw $31,172($sp)
	move $fp,$sp

	sw $4,180($sp)
	sw $5,184($sp)
	sw $6,188($sp)
	sw $7,192($sp)
	lw	$2, 180($sp) #a
	li.s	$f3, 0
	mtc1	$2,$f2
	nop

	cvt.s.w	$f2,$f2
	nop

	c.eq.s	$f2,$f3
	bc1t	$_EQ9
	nop

	li.s	$f2,1
	b	$ENDEQ9
	nop	
$_EQ9:
	mtc1	$0,$f2
	nop

$ENDEQ9:
$END8:
	li.s	$f1,0
	c.eq.s	$f2,$f1
	nop
	bc1t	$ELSE7
	nop
$IF7:
	lwc1	$f2, 184($sp) #b
	nop	
	sw $1, 156($sp)
	sw $2, 152($sp)
	sw $3, 148($sp)
	sw $4, 144($sp)
	sw $5, 140($sp)
	sw $6, 136($sp)
	sw $7, 132($sp)
	sw $8, 128($sp)
	sw $9, 124($sp)
	sw $10, 120($sp)
	sw $11, 116($sp)
	sw $12, 112($sp)
	sw $13, 108($sp)
	sw $14, 104($sp)
	sw $15, 100($sp)
	sw $16, 96($sp)
	sw $17, 92($sp)
	sw $18, 88($sp)
	sw $19, 84($sp)
	sw $20, 80($sp)
	sw $21, 76($sp)
	sw $22, 72($sp)
	sw $23, 68($sp)
	sw $24, 64($sp)
	swc1 $f10, 60($sp)
	swc1 $f11, 56($sp)
	swc1 $f12, 52($sp)
	swc1 $f13, 48($sp)
	swc1 $f14, 44($sp)
	swc1 $f15, 40($sp)
	swc1 $f16, 36($sp)
	swc1 $f17, 32($sp)
	swc1 $f18, 28($sp)
	swc1 $f19, 24($sp)
	swc1 $f20, 20($sp)
	lw	$3, 180($sp) #a
	li.s	$f4, 1
	mtc1	$3,$f3
	nop

	cvt.s.w	$f3,$f3
	nop

	sub.s	$f3,$f3,$f4
$END12:
# merge

	sw	$3, 0($sp) #a 0

	move	$4, $3 #load parameter 1
	mov.s	$f12, $f3 #load parameter 1
	lwc1	$f3, 184($sp) #b
	nop	
$END13:
# merge

	swc1	$f3, 4($sp) #b 4

	move	$5, $3 #load parameter 2
	mov.s	$f14, $f3 #load parameter 2
	.option pic
	la $25,operations
	jalr $25
	nop
	move	$25, $2
	lw $1,156($sp)
	lw $2,152($sp)
	lw $3,148($sp)
	lw $4,144($sp)
	lw $5,140($sp)
	lw $6,136($sp)
	lw $7,132($sp)
	lw $8,128($sp)
	lw $9,124($sp)
	lw $10,120($sp)
	lw $11,116($sp)
	lw $12,112($sp)
	lw $13,108($sp)
	lw $14,104($sp)
	lw $15,100($sp)
	lw $16,96($sp)
	lw $17,92($sp)
	lw $18,88($sp)
	lw $19,84($sp)
	lw $20,80($sp)
	lw $21,76($sp)
	lw $22,72($sp)
	lw $23,68($sp)
	lw $24,64($sp)
	lwc1 $f10, 60($sp)
	lwc1 $f11, 56($sp)
	lwc1 $f12, 52($sp)
	lwc1 $f13, 48($sp)
	lwc1 $f14, 44($sp)
	lwc1 $f15, 40($sp)
	lwc1 $f16, 36($sp)
	lwc1 $f17, 32($sp)
	lwc1 $f18, 28($sp)
	lwc1 $f19, 24($sp)
	lwc1 $f20, 20($sp)
	move $3, $25
	add.s	$f2,$f2,$f3
$END11:
	mov.s	$f0,$f2
	move	$sp,$fp
	lw	$31,172($sp)
	lw	$fp,176($sp)
	addiu	$sp,$sp,180
	j	$31

	nop

	b $END7
	nop
$ELSE7:
	li.s	$f2, 1
$END15:
	mov.s	$f0,$f2
	move	$sp,$fp
	lw	$31,172($sp)
	lw	$fp,176($sp)
	addiu	$sp,$sp,180
	j	$31

	nop

$END7:
	move $sp,$fp
	lw $31,172($sp)
	lw $fp,176($sp)
	addiu $sp,$sp,180
	j $31

	nop
	.set macro
	.set reorder
	.end operations
	.size operations, .-operations

