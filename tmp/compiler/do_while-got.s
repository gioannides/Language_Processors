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

$END1:
$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-20
	sw	$fp,16($sp)
	sw	$31,12($sp)
	move	$fp,$sp

	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 97
	add	$2, $2, $3
$END3:
	sw	$2, 8($sp) #x

$DO4:
$DO5:
$DO6:
	li	$2, 1
$END7:
	lw	$3, 8($sp) #x

	add	$2, $2, $3
#df
	sw	$2,8($sp) #x

	li	$2, 0
$END8:
	beq	$2,$0,$END6
	nop
	b $DO6
	nop
$END6:
	li	$2, 2
$END9:
	lw	$3, 8($sp) #x

	sub	$2, $3, $2
#df
	sw	$2,8($sp) #x

	lw	$2, 8($sp) #x
	li	$3, 50
	sgt	$2, $2, $3
$END10:
	beq	$2,$0,$END5
	nop
	b $DO5
	nop
$END5:
	lw	$2, 8($sp) #x
	li	$3, 1
	sub	$2, $2, $3
$END11:
	lw	$3, 8($sp) #x

#df
	sw	$2,8($sp) #x

	lw	$2, 8($sp) #x
	li	$3, 1
	sgt	$2, $2, $3
$END12:
	beq	$2,$0,$END4
	nop
	b $DO4
	nop
$END4:
	lw	$2, 8($sp) #x
$END13:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

