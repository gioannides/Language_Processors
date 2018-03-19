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
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-172
	sw $fp,168($sp)
	sw $31,164($sp)
	move $fp,$sp

	sw $4,172($sp)
	sw $5,176($sp)
	sw $6,180($sp)
	sw $7,184($sp)
	li	$2, 1
	sw	$2,160($sp) #g

	li	$2, 7
	sw	$2,156($sp) #h

	li	$2, 8
	sw	$2,152($sp) #i

	li	$2, 3
	sw	$2,148($sp) #j

	li	$2, 4
	sw	$2,144($sp) #k

	sw $1,140($sp)
	sw $2,136($sp)
	sw $3,132($sp)
	sw $4,128($sp)
	sw $5,124($sp)
	sw $6,120($sp)
	sw $7,116($sp)
	sw $8,112($sp)
	sw $9,108($sp)
	sw $10,104($sp)
	sw $11,100($sp)
	sw $12,96($sp)
	sw $13,92($sp)
	sw $14,88($sp)
	sw $15,84($sp)
	sw $16,80($sp)
	sw $17,76($sp)
	sw $18,72($sp)
	sw $19,68($sp)
	sw $20,64($sp)
	sw $21,60($sp)
	sw $22,56($sp)
	sw $23,52($sp)
	sw $24,48($sp)
	sw $25,44($sp)
	lw	$2, 160($sp) #g
	sw	$2, 0($sp) #a

	move	$4, $2 #load parameter 1
	lw	$2, 156($sp) #h
	sw	$2, 4($sp) #b

	move	$5, $2 #load parameter 2
	lw	$2, 152($sp) #i
	sw	$2, 8($sp) #c

	move	$6, $2 #load parameter 3
	lw	$2, 148($sp) #j
	sw	$2, 12($sp) #d

	move	$7, $2 #load parameter 4
	lw	$2, 144($sp) #k
	sw	$2, 16($sp) #e

	.option pic
	jal f
	nop
	move	$25, $2
	lw $1,140($sp)
	lw $2,136($sp)
	lw $3,132($sp)
	lw $4,128($sp)
	lw $5,124($sp)
	lw $6,120($sp)
	lw $7,116($sp)
	lw $8,112($sp)
	lw $9,108($sp)
	lw $10,104($sp)
	lw $11,100($sp)
	lw $12,96($sp)
	lw $13,92($sp)
	lw $14,88($sp)
	lw $15,84($sp)
	lw $16,80($sp)
	lw $17,76($sp)
	lw $18,72($sp)
	lw $19,68($sp)
	lw $20,64($sp)
	lw $21,60($sp)
	lw $22,56($sp)
	lw $23,52($sp)
	lw $24,48($sp)
	move $2, $25
	lw	$3, 160($sp) #g

	sw	$2,160($sp) #g

	lw	$2, 160($sp) #g
	move	$2,$2
	move	$sp,$fp
	lw	$31,164($sp)
	lw	$fp,168($sp)
	addiu	$sp,$sp,172
	j	$31

	nop

	move $sp,$fp
	lw $31,164($sp)
	lw $fp,168($sp)
	addiu $sp,$sp,172
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

