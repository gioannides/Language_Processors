	.file	1 "float_SWITCH_driver.c"
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
	swc1	$f0,28($fp)
	lui	$2,%hi($LC1)
	lwc1	$f0,%lo($LC1)($2)
	nop
	swc1	$f0,32($fp)
	sw	$0,24($fp)
	li	$2,20			# 0x14
	sw	$2,36($fp)
	lw	$2,36($fp)
	li	$3,2			# 0x2
	beq	$2,$3,$L3
	nop

	li	$3,3			# 0x3
	beq	$2,$3,$L4
	nop

	li	$3,1			# 0x1
	bne	$2,$3,$L9
	nop

	lwc1	$f0,32($fp)
	nop
	swc1	$f0,24($fp)
	b	$L6
	nop

$L3:
	lwc1	$f0,28($fp)
	nop
	swc1	$f0,24($fp)
	b	$L6
	nop

$L4:
	lwc1	$f2,28($fp)
	lwc1	$f0,32($fp)
	nop
	add.s	$f0,$f2,$f0
	swc1	$f0,24($fp)
	b	$L6
	nop

$L9:
	lui	$2,%hi($LC2)
	lwc1	$f0,%lo($LC2)($2)
	nop
	swc1	$f0,24($fp)
	nop
$L6:
	lwc1	$f14,32($fp)
	lwc1	$f12,28($fp)
	lw	$2,%call16(operations)($28)
	nop
	move	$25,$2
	.reloc	1f,R_MIPS_JALR,operations
1:	jalr	$25
	nop

	lw	$28,16($fp)
	mov.s	$f2,$f0
	lwc1	$f0,24($fp)
	nop
	c.eq.s	$f2,$f0
	nop
	bc1f	$L7
	nop

	move	$2,$0
	b	$L8
	nop

$L7:
	li	$2,75			# 0x4b
$L8:
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
	.word	1109512946
	.align	2
$LC1:
	.word	1051763671
	.align	2
$LC2:
	.word	1083304837
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
