	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	test
	.set	nomips16
	.set	nomicromips
	.ent	test
	.type	test, @function
test:
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-148
	sw $fp,144($sp)
	sw $31,140($sp)
	move $fp,$sp

	sw $4,148($sp)
	sw $5,152($sp)
	sw $6,156($sp)
	sw $7,160($sp)
	lw	$2, 148($sp) #a
	move	$2,$2
	move	$sp,$fp
	lw	$31,140($sp)
	lw	$fp,144($sp)
	addiu	$sp,$sp,148
	j	$31

	nop

	move $sp,$fp
	lw $31,140($sp)
	lw $fp,144($sp)
	addiu $sp,$sp,148
	j $31

	nop
	.set macro
	.set reorder
	.end test
	.size test, .-test



	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-152
	sw $fp,148($sp)
	sw $31,144($sp)
	move $fp,$sp

	sw $4,152($sp)
	sw $5,156($sp)
	sw $6,160($sp)
	sw $7,164($sp)
	li	$2, 5
	sw	$2,140($sp) #i

	sw $1,136($sp)
	sw $2,132($sp)
	sw $3,128($sp)
	sw $4,124($sp)
	sw $5,120($sp)
	sw $6,116($sp)
	sw $7,112($sp)
	sw $8,108($sp)
	sw $9,104($sp)
	sw $10,100($sp)
	sw $11,96($sp)
	sw $12,92($sp)
	sw $13,88($sp)
	sw $14,84($sp)
	sw $15,80($sp)
	sw $16,76($sp)
	sw $17,72($sp)
	sw $18,68($sp)
	sw $19,64($sp)
	sw $20,60($sp)
	sw $21,56($sp)
	sw $22,52($sp)
	sw $23,48($sp)
	sw $24,44($sp)
	sw $25,40($sp)
	lw	$2, 140($sp) #i
	li	$3, 3
	sub	$2, $2, $3
	sw	$2, 0($sp) #a

	move	$4, $2 #load parameter 1
	.option pic
	jal test
	nop
	move	$25, $2
	lw $1,136($sp)
	lw $2,132($sp)
	lw $3,128($sp)
	lw $4,124($sp)
	lw $5,120($sp)
	lw $6,116($sp)
	lw $7,112($sp)
	lw $8,108($sp)
	lw $9,104($sp)
	lw $10,100($sp)
	lw $11,96($sp)
	lw $12,92($sp)
	lw $13,88($sp)
	lw $14,84($sp)
	lw $15,80($sp)
	lw $16,76($sp)
	lw $17,72($sp)
	lw $18,68($sp)
	lw $19,64($sp)
	lw $20,60($sp)
	lw $21,56($sp)
	lw $22,52($sp)
	lw $23,48($sp)
	lw $24,44($sp)
	move $2, $25
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

