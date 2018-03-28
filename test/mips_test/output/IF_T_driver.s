	.file	1 "IF_T_driver.c"
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
	li	$2,1			# 0x1
	sw	$2,28($fp)
	b	$L2
	nop

$L5:
	lw	$4,28($fp)
	lw	$2,%call16(IF_T)($28)
	nop
	move	$25,$2
	.reloc	1f,R_MIPS_JALR,IF_T
1:	jalr	$25
	nop

	lw	$28,16($fp)
	move	$3,$2
	lw	$2,28($fp)
	nop
	beq	$3,$2,$L3
	nop

	li	$2,1			# 0x1
	b	$L4
	nop

$L3:
	lw	$2,28($fp)
	nop
	addiu	$2,$2,1
	sw	$2,28($fp)
$L2:
	lw	$2,28($fp)
	nop
	slt	$2,$2,30
	bne	$2,$0,$L5
	nop

	move	$2,$0
$L4:
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
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
