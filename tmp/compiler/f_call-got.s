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
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-120
	sw $fp,116($sp)
	sw $31,112($sp)
	move $fp,$sp

	lw	$2, 124($sp) #a
	lw	$3, 128($sp) #b
	add	$2, $2, $3
$END2:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

	move $sp,$fp
	lw $31,112($sp)
	lw $fp,116($sp)
	addiu $sp,$sp,120
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

$END4:
$END5:
$END6:
$END7:
$END8:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-140
	sw $fp,136($sp)
	sw $31,132($sp)
	move $fp,$sp

	li	$2, 1
$END10:
	sw	$2,128($sp) #g

	li	$2, 1
$END11:
	sw	$2,124($sp) #h

	li	$2, 1
$END12:
	sw	$2,120($sp) #i

	li	$2, 1
$END13:
	sw	$2,116($sp) #j

	li	$2, 4
$END14:
	sw	$2,112($sp) #k

	lw	$2, 128($sp) #g
	lw	$3, 124($sp) #h
	add	$2, $2, $3
	sw	$1,108($sp)
	sw	$2,104($sp)
	sw	$3,100($sp)
	sw	$4,96($sp)
	sw	$5,92($sp)
	sw	$6,88($sp)
	sw	$7,84($sp)
	sw	$8,80($sp)
	sw	$9,76($sp)
	sw	$10,72($sp)
	sw	$11,68($sp)
	sw	$12,64($sp)
	sw	$13,60($sp)
	sw	$14,56($sp)
	sw	$15,52($sp)
	sw	$16,48($sp)
	sw	$17,44($sp)
	sw	$18,40($sp)
	sw	$19,36($sp)
	sw	$20,32($sp)
	sw	$21,28($sp)
	sw	$22,24($sp)
	sw	$23,20($sp)
	sw	$24,16($sp)
	sw	$25,12($sp)
	sw	$31,8($sp)
	lw	$3, 128($sp) #g
	li	$4, 6
	li	$5, 2
	mult	$4, $5
	mflo	$4
	add	$3, $3, $4
	li	$4, 7
	sub	$3, $3, $4
$END16:
	sw	$3, 4($sp) #a

	move	$4, $3 #load parameter 1
	lw	$3, 124($sp) #h
$END17:
	sw	$3, 8($sp) #b

	move	$5, $3 #load parameter 2
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
	move $3, $25
	add	$2, $2, $3
	lw	$3, 112($sp) #k
	add	$2, $2, $3
	lw	$3, 116($sp) #j
	add	$2, $2, $3
$END15:
	move	$2,$2
	move	$sp,$fp
	lw	$31,132($sp)
	lw	$fp,136($sp)
	addiu	$sp,$sp,140
	j	$31

	nop

	move $sp,$fp
	lw $31,132($sp)
	lw $fp,136($sp)
	addiu $sp,$sp,140
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

