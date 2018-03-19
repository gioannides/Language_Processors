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
	addiu $sp,$sp,-164
	sw $fp,160($sp)
	sw $31,156($sp)
	move $fp,$sp

	sw $4,164($sp)
	sw $5,168($sp)
	sw $6,172($sp)
	sw $7,176($sp)
	sw	$0, 152($sp) #i

	sw	$0, 148($sp) #j

	sw	$0, 144($sp) #k

	sw	$0, 140($sp) #l

	li	$2, 1
	lw	$3, 152($sp) #i

	sw	$2,152($sp) #i

	li	$2, 2
	lw	$3, 148($sp) #j

	sw	$2,148($sp) #j

	li	$2, 3
	lw	$3, 144($sp) #k

	sw	$2,144($sp) #k

	li	$2, 57
	lw	$3, 140($sp) #l

	sw	$2,140($sp) #l

	lw	$2, 140($sp) #l
	move	$2,$2
	move	$sp,$fp
	lw	$31,156($sp)
	lw	$fp,160($sp)
	addiu	$sp,$sp,164
	j	$31

	nop

	move $sp,$fp
	lw $31,156($sp)
	lw $fp,160($sp)
	addiu $sp,$sp,164
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
	addiu $sp,$sp,-164
	sw $fp,160($sp)
	sw $31,156($sp)
	move $fp,$sp

	sw $4,164($sp)
	sw $5,168($sp)
	sw $6,172($sp)
	sw $7,176($sp)
	sw	$0, 152($sp) #i

	sw	$0, 148($sp) #j

	sw	$0, 144($sp) #k

	sw	$0, 140($sp) #l

	li	$2, 1
	lw	$3, 152($sp) #i

	sw	$2,152($sp) #i

	li	$2, 2
	lw	$3, 148($sp) #j

	sw	$2,148($sp) #j

	li	$2, 3
	lw	$3, 144($sp) #k

	sw	$2,144($sp) #k

	li	$2, 57
	lw	$3, 140($sp) #l

	sw	$2,140($sp) #l

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
	.option pic
	jal f
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
	lw	$31,156($sp)
	lw	$fp,160($sp)
	addiu	$sp,$sp,164
	j	$31

	nop

	move $sp,$fp
	lw $31,156($sp)
	lw $fp,160($sp)
	addiu $sp,$sp,164
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

