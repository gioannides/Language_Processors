	.file	1 "float_call_driver.c"
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
	.frame	$fp,48,$31		# vars= 16, regs= 2/0, args= 16, gp= 8
	.mask	0xc0000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-48
	sw	$31,44($sp)
	sw	$fp,40($sp)
	move	$fp,$sp
	lui	$28,%hi(__gnu_local_gp)
	addiu	$28,$28,%lo(__gnu_local_gp)
	.cprestore	16
	lui	$2,%hi($LC0)
	lwc1	$f0,%lo($LC0)($2)
	nop
	swc1	$f0,24($fp)
	lui	$2,%hi($LC1)
	lwc1	$f0,%lo($LC1)($2)
	nop
	swc1	$f0,28($fp)
	lui	$2,%hi($LC2)
	lwc1	$f0,%lo($LC2)($2)
	nop
	swc1	$f0,32($fp)
	lui	$2,%hi($LC3)
	lwc1	$f0,%lo($LC3)($2)
	nop
	swc1	$f0,36($fp)
	lw	$7,36($fp)
	lw	$6,32($fp)
	lwc1	$f14,28($fp)
	lwc1	$f12,24($fp)
	lw	$2,%call16(f)($28)
	nop
	move	$25,$2
	.reloc	1f,R_MIPS_JALR,f
1:	jalr	$25
	nop

	lw	$28,16($fp)
	mov.s	$f4,$f0
	lwc1	$f2,28($fp)
	lwc1	$f0,32($fp)
	nop
	mul.s	$f2,$f2,$f0
	lwc1	$f0,36($fp)
	nop
	div.s	$f2,$f2,$f0
	lwc1	$f0,24($fp)
	nop
	add.s	$f0,$f2,$f0
	c.eq.s	$f4,$f0
	nop
	bc1f	$L2
	nop

	move	$2,$0
	b	$L3
	nop

$L2:
	li	$2,75			# 0x4b
$L3:
	move	$sp,$fp
	lw	$31,44($sp)
	lw	$fp,40($sp)
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
	.word	1067869798
	.align	2
$LC1:
	.word	1055018451
	.align	2
$LC2:
	.word	1079823565
	.align	2
$LC3:
	.word	1083317420
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
