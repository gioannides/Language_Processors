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

$END2:
$END3:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-128
	sw	$fp,124($sp)
	sw	$31,120($sp)
	move	$fp,$sp

	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 3
	add	$2, $2, $3
$END5:
	sw	$2, 116($sp) #x

	sw	$0, 112($sp) #i

	li	$2, 0
$END7:
	lw	$3, 112($sp) #i

#df
	sw	$2,112($sp) #i

$FOR6:
	lw	$2, 112($sp) #i
	li	$3, 100
	seq	$2, $2, $3
$END8:
	beq	$2,$0,$END6
	nop
	lw	$2, 116($sp) #x
	li	$3, 1
	add	$2, $2, $3
$END10:
	lw	$3, 116($sp) #x

#df
	sw	$2,116($sp) #x

	lw	$2, 112($sp) #i
	li	$3, 1
	add	$2, $2, $3
$END11:
	lw	$3, 112($sp) #i

#df
	sw	$2,112($sp) #i

	b $FOR6
	nop
$END6:
	lw	$2, 116($sp) #x
$END12:
	move	$2,$2
	move	$sp,$fp
	lw	$31,120($sp)
	lw	$fp,124($sp)
	addiu	$sp,$sp,128
	j	$31

	nop

	move	$sp,$fp
	lw	$31,120($sp)
	lw	$fp,124($sp)
	addiu	$sp,$sp,128
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

