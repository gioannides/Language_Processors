	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	func
	.set	nomips16
	.set	nomicromips
	.ent	func
	.type	func, @function
func:
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
	lw	$2, 184($sp) #h1
	lw	$3, 180($sp) #p1
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
	.end func
	.size func, .-func



	.text
	.align	2
	.globl	gunv
	.set	nomips16
	.set	nomicromips
	.ent	gunv
	.type	gunv, @function
gunv:
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
	lw	$2, 172($sp) #h
	lw	$3, 180($sp) #p1
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
	.end gunv
	.size gunv, .-gunv



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
	addiu $sp,$sp,-196
	sw $fp,192($sp)
	sw $31,188($sp)
	move $fp,$sp

	sw $4,196($sp)
	sw $5,200($sp)
	sw $6,204($sp)
	sw $7,208($sp)
	li	$2, 1
	sw	$2,184($sp) #x

	li	$2, 2
	sw	$2,180($sp) #y

	li	$2, 3
	sw	$2,176($sp) #z

	li	$2, 4
	sw	$2,172($sp) #a

	li	$2, 5
	sw	$2,168($sp) #f

	sb	$0, 164($sp) #yu

	sw $1,160($sp)
	sw $2,156($sp)
	sw $3,152($sp)
	sw $4,148($sp)
	sw $5,144($sp)
	sw $6,140($sp)
	sw $7,136($sp)
	sw $8,132($sp)
	sw $9,128($sp)
	sw $10,124($sp)
	sw $11,120($sp)
	sw $12,116($sp)
	sw $13,112($sp)
	sw $14,108($sp)
	sw $15,104($sp)
	sw $16,100($sp)
	sw $17,96($sp)
	sw $18,92($sp)
	sw $19,88($sp)
	sw $20,84($sp)
	sw $21,80($sp)
	sw $22,76($sp)
	sw $23,72($sp)
	sw $24,68($sp)
	sw $25,64($sp)
	lb	$2, 164($sp) #yu
	sb	$2, 0($sp) #r
	move	$4, $2 #load parameter 1
	lw	$2, 180($sp) #y
	sw	$2, 4($sp) #t

	move	$5, $2 #load parameter 2
	lw	$2, 176($sp) #z
	sw	$2, 8($sp) #w

	move	$6, $2 #load parameter 3
	lw	$2, 172($sp) #a
	sw	$2, 12($sp) #j

	move	$7, $2 #load parameter 4
	lw	$2, 168($sp) #f
	sw	$2, 16($sp) #o

	lw	$2, 172($sp) #a
	sw	$2, 20($sp) #p

	lw	$2, 184($sp) #x
	sw	$2, 24($sp) #h

	lw	$2, 184($sp) #x
	sw	$2, 28($sp) #o1

	lw	$2, 184($sp) #x
	sw	$2, 32($sp) #p1

	lw	$2, 168($sp) #f
	sw	$2, 36($sp) #h1

	.option pic
	jal gunv
	nop
	move	$25, $2
	lw $1,160($sp)
	lw $2,156($sp)
	lw $3,152($sp)
	lw $4,148($sp)
	lw $5,144($sp)
	lw $6,140($sp)
	lw $7,136($sp)
	lw $8,132($sp)
	lw $9,128($sp)
	lw $10,124($sp)
	lw $11,120($sp)
	lw $12,116($sp)
	lw $13,112($sp)
	lw $14,108($sp)
	lw $15,104($sp)
	lw $16,100($sp)
	lw $17,96($sp)
	lw $18,92($sp)
	lw $19,88($sp)
	lw $20,84($sp)
	lw $21,80($sp)
	lw $22,76($sp)
	lw $23,72($sp)
	lw $24,68($sp)
	move $2, $25
	sw $1,160($sp)
	sw $2,156($sp)
	sw $3,152($sp)
	sw $4,148($sp)
	sw $5,144($sp)
	sw $6,140($sp)
	sw $7,136($sp)
	sw $8,132($sp)
	sw $9,128($sp)
	sw $10,124($sp)
	sw $11,120($sp)
	sw $12,116($sp)
	sw $13,112($sp)
	sw $14,108($sp)
	sw $15,104($sp)
	sw $16,100($sp)
	sw $17,96($sp)
	sw $18,92($sp)
	sw $19,88($sp)
	sw $20,84($sp)
	sw $21,80($sp)
	sw $22,76($sp)
	sw $23,72($sp)
	sw $24,68($sp)
	sw $25,64($sp)
	lb	$2, 164($sp) #yu
	sb	$2, 0($sp) #r
	move	$4, $2 #load parameter 1
	lw	$2, 180($sp) #y
	sw	$2, 4($sp) #t

	move	$5, $2 #load parameter 2
	lw	$2, 176($sp) #z
	sw	$2, 8($sp) #w

	move	$6, $2 #load parameter 3
	lw	$2, 172($sp) #a
	sw	$2, 12($sp) #j

	move	$7, $2 #load parameter 4
	lw	$2, 168($sp) #f
	sw	$2, 16($sp) #o

	lw	$2, 172($sp) #a
	sw	$2, 20($sp) #p

	lw	$2, 184($sp) #x
	sw	$2, 24($sp) #h

	lw	$2, 184($sp) #x
	sw	$2, 28($sp) #o1

	lw	$2, 184($sp) #x
	sw	$2, 32($sp) #p1

	lw	$2, 168($sp) #f
	sw	$2, 36($sp) #h1

	.option pic
	jal func
	nop
	move	$25, $2
	lw $1,160($sp)
	lw $2,156($sp)
	lw $3,152($sp)
	lw $4,148($sp)
	lw $5,144($sp)
	lw $6,140($sp)
	lw $7,136($sp)
	lw $8,132($sp)
	lw $9,128($sp)
	lw $10,124($sp)
	lw $11,120($sp)
	lw $12,116($sp)
	lw $13,112($sp)
	lw $14,108($sp)
	lw $15,104($sp)
	lw $16,100($sp)
	lw $17,96($sp)
	lw $18,92($sp)
	lw $19,88($sp)
	lw $20,84($sp)
	lw $21,80($sp)
	lw $22,76($sp)
	lw $23,72($sp)
	lw $24,68($sp)
	move $2, $25
	sw $1,160($sp)
	sw $2,156($sp)
	sw $3,152($sp)
	sw $4,148($sp)
	sw $5,144($sp)
	sw $6,140($sp)
	sw $7,136($sp)
	sw $8,132($sp)
	sw $9,128($sp)
	sw $10,124($sp)
	sw $11,120($sp)
	sw $12,116($sp)
	sw $13,112($sp)
	sw $14,108($sp)
	sw $15,104($sp)
	sw $16,100($sp)
	sw $17,96($sp)
	sw $18,92($sp)
	sw $19,88($sp)
	sw $20,84($sp)
	sw $21,80($sp)
	sw $22,76($sp)
	sw $23,72($sp)
	sw $24,68($sp)
	sw $25,64($sp)
	lb	$2, 164($sp) #yu
	sb	$2, 0($sp) #r
	move	$4, $2 #load parameter 1
	lw	$2, 180($sp) #y
	sw	$2, 4($sp) #t

	move	$5, $2 #load parameter 2
	lw	$2, 176($sp) #z
	sw	$2, 8($sp) #w

	move	$6, $2 #load parameter 3
	lw	$2, 172($sp) #a
	sw	$2, 12($sp) #j

	move	$7, $2 #load parameter 4
	lw	$2, 168($sp) #f
	sw	$2, 16($sp) #o

	lw	$2, 172($sp) #a
	sw	$2, 20($sp) #p

	lw	$2, 184($sp) #x
	sw	$2, 24($sp) #h

	lw	$2, 184($sp) #x
	sw	$2, 28($sp) #o1

	lw	$2, 184($sp) #x
	sw	$2, 32($sp) #p1

	lw	$2, 168($sp) #f
	sw	$2, 36($sp) #h1

	.option pic
	jal gunv
	nop
	move	$25, $2
	lw $1,160($sp)
	lw $2,156($sp)
	lw $3,152($sp)
	lw $4,148($sp)
	lw $5,144($sp)
	lw $6,140($sp)
	lw $7,136($sp)
	lw $8,132($sp)
	lw $9,128($sp)
	lw $10,124($sp)
	lw $11,120($sp)
	lw $12,116($sp)
	lw $13,112($sp)
	lw $14,108($sp)
	lw $15,104($sp)
	lw $16,100($sp)
	lw $17,96($sp)
	lw $18,92($sp)
	lw $19,88($sp)
	lw $20,84($sp)
	lw $21,80($sp)
	lw $22,76($sp)
	lw $23,72($sp)
	lw $24,68($sp)
	move $2, $25
	sw $1,160($sp)
	sw $2,156($sp)
	sw $3,152($sp)
	sw $4,148($sp)
	sw $5,144($sp)
	sw $6,140($sp)
	sw $7,136($sp)
	sw $8,132($sp)
	sw $9,128($sp)
	sw $10,124($sp)
	sw $11,120($sp)
	sw $12,116($sp)
	sw $13,112($sp)
	sw $14,108($sp)
	sw $15,104($sp)
	sw $16,100($sp)
	sw $17,96($sp)
	sw $18,92($sp)
	sw $19,88($sp)
	sw $20,84($sp)
	sw $21,80($sp)
	sw $22,76($sp)
	sw $23,72($sp)
	sw $24,68($sp)
	sw $25,64($sp)
	lb	$2, 164($sp) #yu
	sb	$2, 0($sp) #r
	move	$4, $2 #load parameter 1
	lw	$2, 180($sp) #y
	sw	$2, 4($sp) #t

	move	$5, $2 #load parameter 2
	lw	$2, 176($sp) #z
	sw	$2, 8($sp) #w

	move	$6, $2 #load parameter 3
	lw	$2, 172($sp) #a
	sw	$2, 12($sp) #j

	move	$7, $2 #load parameter 4
	lw	$2, 168($sp) #f
	sw	$2, 16($sp) #o

	lw	$2, 172($sp) #a
	sw	$2, 20($sp) #p

	lw	$2, 184($sp) #x
	sw	$2, 24($sp) #h

	lw	$2, 184($sp) #x
	sw	$2, 28($sp) #o1

	lw	$2, 184($sp) #x
	sw	$2, 32($sp) #p1

	lw	$2, 168($sp) #f
	sw	$2, 36($sp) #h1

	.option pic
	jal gunv
	nop
	move	$25, $2
	lw $1,160($sp)
	lw $2,156($sp)
	lw $3,152($sp)
	lw $4,148($sp)
	lw $5,144($sp)
	lw $6,140($sp)
	lw $7,136($sp)
	lw $8,132($sp)
	lw $9,128($sp)
	lw $10,124($sp)
	lw $11,120($sp)
	lw $12,116($sp)
	lw $13,112($sp)
	lw $14,108($sp)
	lw $15,104($sp)
	lw $16,100($sp)
	lw $17,96($sp)
	lw $18,92($sp)
	lw $19,88($sp)
	lw $20,84($sp)
	lw $21,80($sp)
	lw $22,76($sp)
	lw $23,72($sp)
	lw $24,68($sp)
	move $2, $25
	move $sp,$fp
	lw $31,188($sp)
	lw $fp,192($sp)
	addiu $sp,$sp,196
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main



	.text
	.align	2
	.globl	functd
	.set	nomips16
	.set	nomicromips
	.ent	functd
	.type	functd, @function
functd:
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
	sw	$0, 140($sp) #d

	move $sp,$fp
	lw $31,144($sp)
	lw $fp,148($sp)
	addiu $sp,$sp,152
	j $31

	nop
	.set macro
	.set reorder
	.end functd
	.size functd, .-functd

