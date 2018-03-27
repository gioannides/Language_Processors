	.file	1 "cast_to_int_driver.c"
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
	lwc1	$f0,%lo($LC0)($2)
	nop
	swc1	$f0,24($fp)
	lwc1	$f0,24($fp)
	nop
	.set	macro
	trunc.w.s $f0,$f0,$2
	.set	nomacro
	mfc1	$2,$f0
	nop
	sw	$2,28($fp)
	lw	$2,%call16(f)($28)
	nop
	move	$25,$2
	.reloc	1f,R_MIPS_JALR,f
1:	jalr	$25
	nop

	lw	$28,16($fp)
	move	$3,$2
	lw	$2,28($fp)
	nop
	xor	$2,$3,$2
	sltu	$2,$2,1
	andi	$2,$2,0x00ff
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
	.align	2
$LC0:
	.word	1068251480
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
