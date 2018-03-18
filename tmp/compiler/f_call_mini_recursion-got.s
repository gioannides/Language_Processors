	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	f
	.set	nomips16
	.set	nomicromips
	.ent	f
	.type	f, @function
f:

$END1:
$END3:
$IF2:
$ELSE2:
$END2:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-124
	sw $fp,120($sp)
	sw $31,116($sp)
	move $fp,$sp

	sw	$0, 112($sp) #r

	li	$2, 1
	li	$3, 3
	add	$2, $2, $3
$END7:
$END6:
	lw	$3, 112($sp) #r

	sw	$2,112($sp) #r

	lw	$2, 132($sp) #y
	lw	$3, 128($sp) #x
	sgt	$2, $2, $3
$END9:
	beq	$2,$0,$ELSE8
	nop
$IF8:
	sw $1,108($sp)
	sw $2,104($sp)
	sw $3,100($sp)
	sw $4,96($sp)
	sw $5,92($sp)
	sw $6,88($sp)
	sw $7,84($sp)
	sw $8,80($sp)
	sw $9,76($sp)
	sw $10,72($sp)
	sw $11,68($sp)
	sw $12,64($sp)
	sw $13,60($sp)
	sw $14,56($sp)
	sw $15,52($sp)
	sw $16,48($sp)
	sw $17,44($sp)
	sw $18,40($sp)
	sw $19,36($sp)
	sw $20,32($sp)
	sw $21,28($sp)
	sw $22,24($sp)
	sw $23,20($sp)
	sw $24,16($sp)
	sw $25,12($sp)
	sw $31,8($sp)
	lw	$2, 132($sp) #y
	li	$3, 1
	sub	$2, $2, $3
$END12:
	sw	$2, 4($sp) #x

	move	$4, $2 #load parameter 1
	lw	$2, 128($sp) #x
$END13:
	sw	$2, 8($sp) #y

	move	$5, $2 #load parameter 2
	.option pic
	jal f
	nop
	move	$25, $2
	lw $1,108($sp)
	lw $2,104($sp)
	lw $3,100($sp)
	lw $4,96($sp)
	lw $5,92($sp)
	lw $6,88($sp)
	lw $7,84($sp)
	lw $8,80($sp)
	lw $9,76($sp)
	lw $10,72($sp)
	lw $11,68($sp)
	lw $12,64($sp)
	lw $13,60($sp)
	lw $14,56($sp)
	lw $15,52($sp)
	lw $16,48($sp)
	lw $17,44($sp)
	lw $18,40($sp)
	lw $19,36($sp)
	lw $20,32($sp)
	lw $21,28($sp)
	lw $22,24($sp)
	lw $23,20($sp)
	lw $24,16($sp)
	lw $31,12($sp)
	move $2, $25
$END11:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

	b $END8
	nop
$ELSE8:
	lw	$2, 112($sp) #r
$END14:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

$END8:
	move $sp,$fp
	lw $31,116($sp)
	lw $fp,120($sp)
	addiu $sp,$sp,124
	j $31

	nop
	.set macro
	.set reorder
	.end f
	.size f, .-f



	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END16:
$END17:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-128
	sw $fp,124($sp)
	sw $31,120($sp)
	move $fp,$sp

	li	$2, 3
$END19:
	sw	$2,116($sp) #a

	li	$2, 5
$END20:
	sw	$2,112($sp) #b

	sw $1,108($sp)
	sw $2,104($sp)
	sw $3,100($sp)
	sw $4,96($sp)
	sw $5,92($sp)
	sw $6,88($sp)
	sw $7,84($sp)
	sw $8,80($sp)
	sw $9,76($sp)
	sw $10,72($sp)
	sw $11,68($sp)
	sw $12,64($sp)
	sw $13,60($sp)
	sw $14,56($sp)
	sw $15,52($sp)
	sw $16,48($sp)
	sw $17,44($sp)
	sw $18,40($sp)
	sw $19,36($sp)
	sw $20,32($sp)
	sw $21,28($sp)
	sw $22,24($sp)
	sw $23,20($sp)
	sw $24,16($sp)
	sw $25,12($sp)
	sw $31,8($sp)
	lw	$2, 116($sp) #a
$END22:
	sw	$2, 4($sp) #x

	move	$4, $2 #load parameter 1
	lw	$2, 112($sp) #b
$END23:
	sw	$2, 8($sp) #y

	move	$5, $2 #load parameter 2
	.option pic
	jal f
	nop
	move	$25, $2
	lw $1,108($sp)
	lw $2,104($sp)
	lw $3,100($sp)
	lw $4,96($sp)
	lw $5,92($sp)
	lw $6,88($sp)
	lw $7,84($sp)
	lw $8,80($sp)
	lw $9,76($sp)
	lw $10,72($sp)
	lw $11,68($sp)
	lw $12,64($sp)
	lw $13,60($sp)
	lw $14,56($sp)
	lw $15,52($sp)
	lw $16,48($sp)
	lw $17,44($sp)
	lw $18,40($sp)
	lw $19,36($sp)
	lw $20,32($sp)
	lw $21,28($sp)
	lw $22,24($sp)
	lw $23,20($sp)
	lw $24,16($sp)
	lw $31,12($sp)
	move $2, $25
$END21:
	move	$2,$2
	move	$sp,$fp
	lw	$31,120($sp)
	lw	$fp,124($sp)
	addiu	$sp,$sp,128
	j	$31

	nop

	move $sp,$fp
	lw $31,120($sp)
	lw $fp,124($sp)
	addiu $sp,$sp,128
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

