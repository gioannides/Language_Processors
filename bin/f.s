	.file 1 "f.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls



	.data
	.globl	array
	.align	2
	.type	array, @object
	.size	array, 92
array:
	.word	0
	.space	88


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
	addiu $sp,$sp,-268
	sw $fp,264($sp)
	sw $31,260($sp)
	move $fp,$sp

	sw $4,268($sp)
	sw $5,272($sp)
	sw $6,276($sp)
	sw $7,280($sp)
	li	$2, 0

	sw	$2,256($sp) #x

	li	$2, 0

	sw	$2,252($sp) #i

	li	$2, 0

	sw	$2,248($sp) #sum

$FOR10:
$BEGIN2_10:#	beq	$2,$0,$END10
	nop
	lw	$2, 256($sp) #x
	li	$3, 21
	sge	$2, $2, $3

	beq	$2,$0,$ELSE12
	nop
$IF12:
	b	$END10
	nop
	b $END12
	nop
$ELSE12:
	lw	$2, 256($sp) #x
	lw	$3, 256($sp) #x
	addi	$3, $3, 1 #++
	sw	$3,256($sp) #x

	li	$2, 1

	sw $25, 264($sp)

	move $25, $3
	li $24, 4
	mul $25,$24,$25
	lui $3, %hi(array)
	la $3, %lo(array)($3)
	add $3, $3, $25 #correct offset
	lw $3, 0($3)
	lui	$3, %hi(array)
	la $3, %lo(array)($3)
	add $3, $3, $25
	sw $2, 0($3)
	lw $25, 264($sp)
$END12:
	b $FOR10
	nop
$END10:
	lw	$2, 248($sp) #sum
	lw	$3, 256($sp) #x
	add	$2, $2, $3

	move	$2,$2
	move	$sp,$fp
	lw	$31,260($sp)
	lw	$fp,264($sp)
	addiu	$sp,$sp,268
	j	$31

	nop

	move $sp,$fp
	lw $31,260($sp)
	lw $fp,264($sp)
	addiu $sp,$sp,268
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main
