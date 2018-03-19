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
	mult	$2, $3
	mflo	$2
	lw	$3, 160($sp) #d
	lw	$4, 164($sp) #e
	lw	$5, 168($sp) #f
	mult	$4, $5
	mflo	$4
	add	$3, $3, $4
	add	$2, $2, $3
	lw	$3, 148($sp) #a
	lw	$4, 172($sp) #g
	mult	$3, $4
	mflo	$3
	add	$2, $2, $3
	lw	$3, 176($sp) #h
	lw	$4, 180($sp) #i
	mult	$3, $4
	mflo	$3
	add	$2, $2, $3
	lw	$3, 184($sp) #j
	add	$2, $2, $3
	lw	$3, 188($sp) #k
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
	addiu $sp,$sp,-176
	sw $fp,172($sp)
	sw $31,168($sp)
	move $fp,$sp

	sw $4,176($sp)
	sw $5,180($sp)
	sw $6,184($sp)
	sw $7,188($sp)
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
	li	$2, 1
	sw	$2, 0($sp) #a

	move	$4, $2 #load parameter 1
	li	$2, 2
	sw	$2, 4($sp) #b

	move	$5, $2 #load parameter 2
	li	$2, 3
	sw	$2, 8($sp) #c

	move	$6, $2 #load parameter 3
	li	$2, 2
	sw	$2, 12($sp) #d

	move	$7, $2 #load parameter 4
	li	$2, 2
	sw	$2, 16($sp) #e

	li	$2, 1
	sw	$2, 20($sp) #f

	li	$2, 2
	sw	$2, 24($sp) #g

	li	$2, 1
	sw	$2, 28($sp) #h

	li	$2, 3
	sw	$2, 32($sp) #i

	li	$2, 4
	sw	$2, 36($sp) #j

	li	$2, 3
	sw	$2, 40($sp) #k

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
	move $2, $25
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
	li	$2, 4
	sw	$2, 0($sp) #a

	move	$4, $2 #load parameter 1
	li	$2, 2
	sw	$2, 4($sp) #b

	move	$5, $2 #load parameter 2
	li	$2, 3
	sw	$2, 8($sp) #c

	move	$6, $2 #load parameter 3
	li	$2, 2
	sw	$2, 12($sp) #d

	move	$7, $2 #load parameter 4
	li	$2, 2
	sw	$2, 16($sp) #e

	li	$2, 1
	sw	$2, 20($sp) #f

	li	$2, 2
	sw	$2, 24($sp) #g

	li	$2, 1
	sw	$2, 28($sp) #h

	li	$2, 3
	sw	$2, 32($sp) #i

	li	$2, 4
	sw	$2, 36($sp) #j

	li	$2, 3
	sw	$2, 40($sp) #k

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
	move $2, $25
	move	$2,$2
	move	$sp,$fp
	lw	$31,168($sp)
	lw	$fp,172($sp)
	addiu	$sp,$sp,176
	j	$31

	nop

	move $sp,$fp
	lw $31,168($sp)
	lw $fp,172($sp)
	addiu $sp,$sp,176
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

