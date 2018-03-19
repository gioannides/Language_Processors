	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	test_add
	.set	nomips16
	.set	nomicromips
	.ent	test_add
	.type	test_add, @function
test_add:
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
	lw	$3, 152($sp) #b
	add	$2, $2, $3
	lw	$3, 156($sp) #c
	add	$2, $2, $3
	lw	$3, 160($sp) #d
	add	$2, $2, $3
	lw	$3, 164($sp) #e
	add	$2, $2, $3
	lw	$3, 168($sp) #f
	add	$2, $2, $3
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
	.end test_add
	.size test_add, .-test_add



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
	addiu $sp,$sp,-156
	sw $fp,152($sp)
	sw $31,148($sp)
	move $fp,$sp

	sw $4,156($sp)
	sw $5,160($sp)
	sw $6,164($sp)
	sw $7,168($sp)
	li	$2, 5
	sw	$2,144($sp) #i

	li	$2, 10
	sw	$2,140($sp) #z

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
	lw	$2, 144($sp) #i
	sw	$2, 0($sp) #a

	move	$4, $2 #load parameter 1
	lw	$2, 140($sp) #z
	sw	$2, 4($sp) #b

	move	$5, $2 #load parameter 2
	li	$2, 3
	sw	$2, 8($sp) #c

	move	$6, $2 #load parameter 3
	li	$2, 4
	sw	$2, 12($sp) #d

	move	$7, $2 #load parameter 4
	li	$2, 5
	sw	$2, 16($sp) #e

	li	$2, 6
	sw	$2, 20($sp) #f

	.option pic
	jal test_add
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
	lw	$31,148($sp)
	lw	$fp,152($sp)
	addiu	$sp,$sp,156
	j	$31

	nop

	move $sp,$fp
	lw $31,148($sp)
	lw $fp,152($sp)
	addiu $sp,$sp,156
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

