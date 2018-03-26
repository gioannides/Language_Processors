	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	EQUAL
	.set	nomips16
	.set	nomicromips
	.ent	EQUAL
	.type	EQUAL, @function
EQUAL:

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
	lw	$4, 148($sp) #x
	mtc1	$4,$f4
	nop

	cvt.s.w	$f4,$f4
	nop

	sub.s	$f3,$f3,$f4
	c.eq.s	$f2,$f3
	bc1f	$NOT_EQ5
	nop

	li.s	$f2,1
	b	$ENDEQ5
	nop	
$NOT_EQ5:
	mtc1	$0,$f2
	nop

$ENDEQ5:
$END4:
	swc1	$f2,128($sp) #s

	lwc1	$f2, 128($sp) #s
	nop	
$END6:
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
	.end EQUAL
	.size EQUAL, .-EQUAL

