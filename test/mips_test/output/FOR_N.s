	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	FOR_N
	.set	nomips16
	.set	nomicromips
	.ent	FOR_N
	.type	FOR_N, @function
FOR_N:
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-136
	sw $fp,132($sp)
	sw $31,128($sp)
	move $fp,$sp

	sw $4,136($sp)
	sw $5,140($sp)
	sw $6,144($sp)
	sw $7,148($sp)
$BEGIN3:
	lw	$2, 136($sp) #i
	li	$3, 11
	slt	$2, $2, $3
$END4:
$BEGIN23:	beq	$2,$0,$END3
	nop
$WHILE3:
	lw	$2, 136($sp) #i
	li	$3, 1
	add	$2, $2, $3
$END6:
	lw	$3, 136($sp) #i
	sw	$2,136($sp) #i

	b $BEGIN3
	nop
$END3:
	lw	$2, 136($sp) #i
$END7:
	move	$2,$2
	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop

	move $sp,$fp
	lw $31,128($sp)
	lw $fp,132($sp)
	addiu $sp,$sp,136
	j $31

	nop
	.set macro
	.set reorder
	.end FOR_N
	.size FOR_N, .-FOR_N

