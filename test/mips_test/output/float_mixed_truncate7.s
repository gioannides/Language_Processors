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
	lwc1	$f3, 144($sp) #b
	nop	
	add.s	$f2,$f2,$f3
	lwc1	$f3, 144($sp) #b
	nop	
	lwc1	$f4, 144($sp) #b
	nop	
	mul.s	$f3,$f3,$f4
	lwc1	$f4, 140($sp) #a
	nop	
	lwc1	$f5, 144($sp) #b
	nop	
	c.eq.s	$f4,$f5
	bc1t	$NOT_EQ8
	nop

	li.s	$f4,1
	b	$ENDEQ8
	nop	
$NOT_EQ8:
	mtc1	$0,$f4
	nop

$ENDEQ8:
$END7:
	lwc1	$f5, 144($sp) #b
	nop	
	mul.s	$f4,$f4,$f5
$END6:
	div.s	$f3,$f3,$f4
	sub.s	$f2,$f2,$f3
$END5:
$END4:
	swc1	$f2,128($sp) #result

	lwc1	$f2, 128($sp) #result
	nop	
$END9:
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

