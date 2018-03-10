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


	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END1:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-8
	sw	$fp,4($sp)
	move	$fp,$sp

	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 97
	add	$2, $2, $3
$END2:
	sw	$2, 0($sp) #x

$DO3:
$DO4:
$DO5:
	li	$2, 1
$END6:
	lw	$3, 0($sp) #x

	add	$2, $2, $3
#df
	sw	$2,0($sp) #x

	li	$2, 0
$END7:
	beq	$2,$0,$END5
	nop
	b $DO5
	nop
$END5:
	li	$2, 2
$END8:
	lw	$3, 0($sp) #x

	sub	$2, $3, $2
#df
	sw	$2,0($sp) #x

	lw	$2, 0($sp) #x
	li	$3, 50
	sgt	$2, $2, $3
$END9:
	beq	$2,$0,$END4
	nop
	b $DO4
	nop
$END4:
	lw	$2, 0($sp) #x
	li	$3, 1
	sub	$2, $2, $3
$END10:
	lw	$3, 0($sp) #x

#df
	sw	$2,0($sp) #x

	lw	$2, 0($sp) #x
	li	$3, 1
	sgt	$2, $2, $3
$END11:
	beq	$2,$0,$END3
	nop
	b $DO3
	nop
$END3:
	lw	$2, 0($sp) #x
$END12:
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	j	$31

	nop

	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

