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

$END2:
$END3:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-188
	sw $fp,184($sp)
	sw $31,180($sp)
	move $fp,$sp

	swc1	$f12,188($sp)
	swc1 $f14, 192($sp)
	sw $6,196($sp)
	sw $7,200($sp)
	li.s	$f2, 0
$END5:
	swc1	$f2,176($sp) #result

	li.s	$f2, 20.8
$END6:
	swc1	$f2,172($sp) #i

	lwc1	$f2, 172($sp) #i
	nop	
$END8:
$FOR7:
	lwc1	$f2, 172($sp) #i
	nop	
	li.s	$f3, 10
	c.lt.s	$f3,$f2
	bc1f	$NOT_GT10
	nop

	li.s	$f2,1
	b	$ENDGT10
	nop	
$NOT_GT10:
	mtc1	$0,$f2
	nop

$ENDGT10:
$END9:
$BEGIN2_7:	li.s	$f1,0
	c.eq.s	$f2,$f1
	nop
	bc1t	$END7
	nop
	lwc1	$f2, 188($sp) #a
	nop	
	lwc1	$f3, 192($sp) #b
	nop	
	mul.s	$f2,$f2,$f3
$END13:
$END12:
	lwc1	$f3, 176($sp) #result
	nop	
	add.s	$f2,$f2,$f3
	swc1	$f2,176($sp) #result

	lwc1	$f2, 172($sp) #i
	nop	
	lwc1	$f3, 172($sp) #i
	nop	
	li.s	$f3,-1
	add.s	$f3,$f3,$f2
	swc1	$f3,172($sp) #i

$END14:
	b $FOR7
	nop
$END7:
	lwc1	$f2, 176($sp) #result
	nop	
$END15:
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
	.end operations
	.size operations, .-operations

