	.file	1 "float_mixed_truncate6.c"
	.section .mdebug.abi32
	.previous
	.nan	legacy
	.module	fp=xx
	.module	nooddspreg
	.abicalls
	.text
	.align	2
	.globl	operations
	.set	nomips16
	.set	nomicromips
	.ent	operations
	.type	operations, @function
operations:
	.frame	$fp,16,$31		# vars= 8, regs= 1/0, args= 0, gp= 0
	.mask	0x40000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	move	$fp,$sp
	swc1	$f12,16($fp)
	swc1	$f14,20($fp)
	lwc1	$f2,16($fp)
	lwc1	$f0,20($fp)
	sub.s	$f0,$f2,$f0
	swc1	$f0,16($fp)
	lwc1	$f0,16($fp)
	trunc.w.s $f0,$f0
	mfc1	$2,$f0
	sw	$2,4($fp)
	lw	$2,4($fp)
	move	$sp,$fp
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31
	nop

	.set	macro
	.set	reorder
	.end	operations
	.size	operations, .-operations
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
