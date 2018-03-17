	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


$END0:

	.data
	.globl	a
	.align	2
	.type	a, @object
	.size	a, 4
a:
	.word	3
#0
#3
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

$END2:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-124
	sw $fp,120($sp)
	sw $31,116($sp)
	move $fp,$sp

	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 97
	add	$2, $2, $3
$END4:
	sw	$2,112($sp) #x

$DO5:
$DO7:
$DO9:
	li	$2, 1
$END11:
	lw	$3, 112($sp) #x

	add	$2, $2, $3
	sw	$2,112($sp) #x

	li	$2, 0
$END12:
	beq	$2,$0,$END9
	nop
	b $DO9
	nop
$END9:
	li	$2, 2
$END13:
	lw	$3, 112($sp) #x

	sub	$2, $3, $2
	sw	$2,112($sp) #x

	lw	$2, 112($sp) #x
	li	$3, 50
	sgt	$2, $2, $3
$END14:
	beq	$2,$0,$END7
	nop
	b $DO7
	nop
$END7:
	lw	$2, 112($sp) #x
	li	$3, 1
	sub	$2, $2, $3
$END15:
	lw	$3, 112($sp) #x

	sw	$2,112($sp) #x

	lw	$2, 112($sp) #x
	li	$3, 1
	sgt	$2, $2, $3
$END16:
	beq	$2,$0,$END5
	nop
	b $DO5
	nop
$END5:
	lw	$2, 112($sp) #x
$END17:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

	move $sp,$fp
	lw $31,116($sp)
	lw $fp,120($sp)
	addiu $sp,$sp,124
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

