	.file	1 "float_trick2.c"
	.section .mdebug.abi32
	.previous
	.nan	legacy
	.module	fp=32
	.module	nooddspreg
	.abicalls
	.text
	.align	2
	.globl	NOTEQUAL
	.set	nomips16
	.set	nomicromips
	.ent	NOTEQUAL
	.type	NOTEQUAL, @function
NOTEQUAL:
	.frame	$fp,8,$31		# vars= 0, regs= 1/0, args= 0, gp= 0
	.mask	0x40000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-8
	sw	$fp,4($sp)
	move	$fp,$sp
	swc1	$f12,8($fp)
	b	$L2
	nop

$L3:
	lwc1	$f2,8($fp)
	lui	$2,%hi($LC0)
	lwc1	$f0,%lo($LC0)($2)
	nop
	sub.s	$f0,$f2,$f0
	swc1	$f0,8($fp)
$L2:
	lwc1	$f2,8($fp)
	lui	$2,%hi($LC1)
	lwc1	$f0,%lo($LC1)($2)
	nop
	c.lt.s	$f0,$f2
	nop
	bc1t	$L3
	nop

	lwc1	$f0,8($fp)
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	j	$31
	nop

	.set	macro
	.set	reorder
	.end	NOTEQUAL
	.size	NOTEQUAL, .-NOTEQUAL
	.rdata
	.align	2
$LC0:
	.word	1065353216
	.align	2
$LC1:
	.word	1120403456
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
