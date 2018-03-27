	.file	1 "float_funct_driver.c"
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
	.frame	$fp,48,$31		# vars= 8, regs= 2/2, args= 16, gp= 8
	.mask	0xc0000000,-12
	.fmask	0x00300000,-8
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-48
	sw	$31,36($sp)
	sw	$fp,32($sp)
	swc1	$f20,44($sp)
	swc1	$f21,40($sp)
	move	$fp,$sp
	lui	$28,%hi(__gnu_local_gp)
	addiu	$28,$28,%lo(__gnu_local_gp)
	.cprestore	16
	li	$2,4			# 0x4
	sw	$2,24($fp)
	lui	$2,%hi($LC0)
	lwc1	$f0,%lo($LC0)($2)
	nop
	swc1	$f0,28($fp)
	lw	$2,24($fp)
	nop
	addiu	$2,$2,1
	sw	$2,24($fp)
	lw	$2,24($fp)
	nop
	mtc1	$2,$f0
	nop
	cvt.s.w	$f0,$f0
	swc1	$f0,28($fp)
	lw	$2,24($fp)
	nop
	mtc1	$2,$f0
	nop
	cvt.s.w	$f2,$f0
	lwc1	$f0,28($fp)
	nop
	add.s	$f20,$f2,$f0
	lw	$2,%call16(f)($28)
	nop
	move	$25,$2
	.reloc	1f,R_MIPS_JALR,f
1:	jalr	$25
	nop

	lw	$28,16($fp)
	li	$2,1			# 0x1
	c.eq.s	$f20,$f0
	nop
	bc1t	$L2
	nop

	move	$2,$0
$L2:
	andi	$2,$2,0x00ff
	move	$sp,$fp
	lw	$31,36($sp)
	lw	$fp,32($sp)
	lwc1	$f20,44($sp)
	nop
	lwc1	$f21,40($sp)
	addiu	$sp,$sp,48
	j	$31
	nop

	.set	macro
	.set	reorder
	.end	main
	.size	main, .-main
	.rdata
	.align	2
$LC0:
	.word	1087897600
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
