	.file	1 "float_mixed_driver.c"
	.section .mdebug.abi32
	.previous
	.nan	legacy
	.module	fp=32
	.module	nooddspreg
	.abicalls
	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:
	.frame	$fp,64,$31		# vars= 32, regs= 2/0, args= 16, gp= 8
	.mask	0xc0000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-64
	sw	$31,60($sp)
	sw	$fp,56($sp)
	move	$fp,$sp
	lui	$28,%hi(__gnu_local_gp)
	addiu	$28,$28,%lo(__gnu_local_gp)
	.cprestore	16
	lui	$2,%hi($LC0)
	lwc1	$f0,%lo($LC0)($2)
	nop
	swc1	$f0,28($fp)
	lui	$2,%hi($LC1)
	lwc1	$f0,%lo($LC1)($2)
	nop
	swc1	$f0,32($fp)
	lwc1	$f0,32($fp)
	nop
	swc1	$f0,36($fp)
	li	$2,3			# 0x3
	sw	$2,40($fp)
	lw	$2,40($fp)
	nop
	sw	$2,44($fp)
	lwc1	$f0,28($fp)
	nop
	swc1	$f0,48($fp)
	lw	$2,44($fp)
	nop
	mtc1	$2,$f0
	nop
	cvt.d.w	$f0,$f0
	lw	$2,44($fp)
	nop
	bgez	$2,$L2
	nop

	lui	$2,%hi($LC2)
	lwc1	$f2,%lo($LC2+4)($2)
	nop
	lwc1	$f3,%lo($LC2)($2)
	nop
	add.d	$f0,$f0,$f2
$L2:
	cvt.s.d	$f0,$f0
	lwc1	$f2,36($fp)
	nop
	add.s	$f0,$f2,$f0
	swc1	$f0,36($fp)
	lwc1	$f0,36($fp)
	lwc1	$f2,48($fp)
	nop
	add.s	$f0,$f2,$f0
	swc1	$f0,48($fp)
	lwc1	$f0,48($fp)
	nop
	swc1	$f0,52($fp)
	lw	$2,40($fp)
	nop
	move	$6,$2
	lwc1	$f14,32($fp)
	lwc1	$f12,28($fp)
	lw	$2,%call16(EQUAL)($28)
	nop
	move	$25,$2
	.reloc	1f,R_MIPS_JALR,EQUAL
1:	jalr	$25
	nop

	lw	$28,16($fp)
	mov.s	$f2,$f0
	lwc1	$f0,52($fp)
	nop
	c.eq.s	$f2,$f0
	nop
	bc1f	$L3
	nop

	move	$2,$0
	b	$L4
	nop

$L3:
	li	$2,75			# 0x4b
$L4:
	move	$sp,$fp
	lw	$31,60($sp)
	lw	$fp,56($sp)
	addiu	$sp,$sp,64
	j	$31
	nop

	.set	macro
	.set	reorder
	.end	main
	.size	main, .-main
	.rdata
	.align	2
$LC0:
	.word	1109512946
	.align	2
$LC1:
	.word	1075188859
	.align	3
$LC2:
	.word	1106247680
	.word	0
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
