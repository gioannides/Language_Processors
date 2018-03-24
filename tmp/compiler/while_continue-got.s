	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls



	.data
	.globl	x
	.align	2
	.type	x, @object
	.size	x, 4
x:
	.word	5
#0
#5
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0
#0


	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END3:
$END4:
$END5:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-148
	sw $fp,144($sp)
	sw $31,140($sp)
	move $fp,$sp

	sw $4,148($sp)
	sw $5,152($sp)
	sw $6,156($sp)
	sw $7,160($sp)
	li	$2, 0
$END7:
	sw	$2,136($sp) #y

	li	$2, 0
$END8:
	sw	$2,132($sp) #z

	li	$2, 1
$END9:
	sw	$2,128($sp) #x

$BEGIN10:
	lw	$2, 128($sp) #x
	li	$3, 3
	slt	$2, $2, $3
$END11:
$BEGIN210:	beq	$2,$0,$END10
	nop
$WHILE10:
	lw	$2, 128($sp) #x
	li	$3, 1
	add	$2, $2, $3
$END13:
	lw	$3, 128($sp) #x
	sw	$2,128($sp) #x

	lw	$2, 128($sp) #x
	li	$3, 2
	slt	$2, $2, $3
$END15:
	beq	$2,$0,$END14
	nop
$IF14:
	lw	$2, 132($sp) #z
	li	$3, 0
	seq	$2, $2, $3
$END18:
	beq	$2,$0,$END17
	nop
$IF17:
	lw	$2, 128($sp) #x
	li	$3, 3
	slt	$2, $2, $3
$END20:
	b $BEGIN210
	nop
$END17:
	lw	$2, 128($sp) #x
	li	$3, 3
	slt	$2, $2, $3
$END21:
	b $BEGIN210
	nop
$END14:
	lw	$2, 136($sp) #y
	lw	$3, 128($sp) #x
	add	$2, $2, $3
$END22:
	lw	$3, 136($sp) #y
	sw	$2,136($sp) #y

	b $BEGIN10
	nop
$END10:
	lw	$2, 136($sp) #y
$END23:
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
	.end main
	.size main, .-main

