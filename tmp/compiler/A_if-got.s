	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls



	.data
	.globl	f
	.align	2
	.type	f, @object
	.size	f, 4
f:
	.word	6
#0
#6
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0


	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$IF1:
$IF3:
$IF5:
$END_sel5:
$END_sel3:
$END_sel1:
$IF7:
$IF9:
$END_sel9:
$IF10:
$IF12:
$ELSE12:
$IF14:
$ELSE14:
$END_sel14:
$END_sel12:
$END_sel10:
$END_sel7:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-152
	sw $fp,148($sp)
	sw $31,144($sp)
	move $fp,$sp

	sw $4,152($sp)
	sw $5,156($sp)
	sw $6,160($sp)
	sw $7,164($sp)
	li	$2, 1
	sw	$2,140($sp) #x

	lw	$2, 140($sp) #x
	li	$3, 1
	seq	$2, $2, $3
	beq	$2,$0,$END_sel18
	nop
$IF18:
	lw	$2, 140($sp) #x
	li	$3, 2
	xor	$2, $2, $3
	sltu	$2, $0, $2
	beq	$2,$0,$END_sel20
	nop
$IF20:
	lw	$2, 140($sp) #x
	li	$3, 3
	xor	$2, $2, $3
	sltu	$2, $0, $2
	beq	$2,$0,$END_sel22
	nop
$IF22:
	li	$2, 3
	move	$2,$2
	move	$sp,$fp
	lw	$31,144($sp)
	lw	$fp,148($sp)
	addiu	$sp,$sp,152
	j	$31

	nop

$END_sel22:
$END_sel20:
$END_sel18:
	lw	$2, 140($sp) #x
	li	$3, 1
	xor	$2, $2, $3
	sltu	$2, $0, $2
	beq	$2,$0,$END_sel24
	nop
$IF24:
	lw	$2, 140($sp) #x
	li	$3, 4
	seq	$2, $2, $3
	beq	$2,$0,$END_sel26
	nop
$IF26:
	li	$2, 4
	move	$2,$2
	move	$sp,$fp
	lw	$31,144($sp)
	lw	$fp,148($sp)
	addiu	$sp,$sp,152
	j	$31

	nop

$END_sel26:
	lw	$2, 140($sp) #x
	li	$3, 5
	xor	$2, $2, $3
	sltu	$2, $0, $2
	beq	$2,$0,$END_sel27
	nop
$IF27:
	lw	$2, 140($sp) #x
	li	$3, 6
	seq	$2, $2, $3
	beq	$2,$0,$ELSE29
	nop
$IF29:
	li	$2, 6
	move	$2,$2
	move	$sp,$fp
	lw	$31,144($sp)
	lw	$fp,148($sp)
	addiu	$sp,$sp,152
	j	$31

	nop

	b $END_sel29
	nop
$ELSE29:
	lw	$2, 140($sp) #x
	li	$3, 7
	xor	$2, $2, $3
	sltu	$2, $0, $2
	beq	$2,$0,$ELSE31
	nop
$IF31:
	li	$2, 7
	move	$2,$2
	move	$sp,$fp
	lw	$31,144($sp)
	lw	$fp,148($sp)
	addiu	$sp,$sp,152
	j	$31

	nop

	b $END_sel31
	nop
$ELSE31:
	li	$2, 1
	move	$2,$2
	move	$sp,$fp
	lw	$31,144($sp)
	lw	$fp,148($sp)
	addiu	$sp,$sp,152
	j	$31

	nop

$END_sel31:
$END_sel29:
$END_sel27:
$END_sel24:
	li	$2, 99
	move	$2,$2
	move	$sp,$fp
	lw	$31,144($sp)
	lw	$fp,148($sp)
	addiu	$sp,$sp,152
	j	$31

	nop

	move $sp,$fp
	lw $31,144($sp)
	lw $fp,148($sp)
	addiu $sp,$sp,152
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

