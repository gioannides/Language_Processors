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

 max_offset = 16
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-256
	sw $fp,252($sp)
	sw $31,248($sp)
	move $fp,$sp

	sw $4,256($sp)
	sw $5,260($sp)
	sw $6,264($sp)
	sw $7,268($sp)
$BEGIN3:
	lw	$2, 256($sp) #i
$END4:
$BEGIN2_3:	beq	$2,$0,$END3
	nop
$WHILE3:
	lw	$2, 256($sp) #i
	li	$3, 1
	sub	$2, $2, $3
$END6:
	lw	$3, 256($sp) #i
	sw	$2,256($sp) #i

	b $BEGIN3
	nop
$END3:
	lw	$2, 256($sp) #i
$END7:
	move	$2,$2
	move	$sp,$fp
	lw	$31,248($sp)
	lw	$fp,252($sp)
	addiu	$sp,$sp,256
	j	$31

	nop

	move $sp,$fp
	lw $31,248($sp)
	lw $fp,252($sp)
	addiu $sp,$sp,256
	j $31

	nop
	.set macro
	.set reorder
	.end FOR_N
	.size FOR_N, .-FOR_N

