	.file	1 "ATOF_driver.c"
	.section .mdebug.abi32
	.previous
	.nan	legacy
	.module	fp=32
	.module	nooddspreg
	.abicalls
	.rdata
	.align	2
$LC1:
	.ascii	"3.14\000"
	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:
	.frame	$fp,40,$31		# vars= 8, regs= 2/0, args= 16, gp= 8
	.mask	0xc0000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-40
	sw	$31,36($sp)
	sw	$fp,32($sp)
	move	$fp,$sp
	lui	$28,%hi(__gnu_local_gp)
	addiu	$28,$28,%lo(__gnu_local_gp)
	.cprestore	16
	lui	$2,%hi($LC0)
	lwc1	$f0,%lo($LC0+4)($2)
	nop
	lwc1	$f1,%lo($LC0)($2)
	nop
	swc1	$f0,28($fp)
	swc1	$f1,24($fp)
	lui	$2,%hi($LC1)
	addiu	$4,$2,%lo($LC1)
	lw	$2,%call16(ATOF)($28)
	nop
	move	$25,$2
	.reloc	1f,R_MIPS_JALR,ATOF
1:	jalr	$25
	nop

	lw	$28,16($fp)
	mov.d	$f2,$f0
	lwc1	$f0,28($fp)
	nop
	lwc1	$f1,24($fp)
	nop
	c.eq.d	$f2,$f0
	nop
	bc1f	$L2
	nop

	move	$2,$0
	b	$L3
	nop

$L2:
	li	$2,1			# 0x1
$L3:
	move	$sp,$fp
	lw	$31,36($sp)
	lw	$fp,32($sp)
	addiu	$sp,$sp,40
	j	$31
	nop

	.set	macro
	.set	reorder
	.end	main
	.size	main, .-main
	.rdata
	.align	3
$LC0:
	.word	1074339512
	.word	1374389535
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
