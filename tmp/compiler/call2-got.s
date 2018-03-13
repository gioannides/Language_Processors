	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


$END0:

	.data
	.globl	de
	.align	2
	.type	de, @object
	.size	de, 4
de:
	.word	1


	.text
	.align	2
	.globl	f
	.set	nomips16
	.set	nomicromips
	.ent	f
	.type	f, @function
f:

$END1:
$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	sw	$31,8($sp)
	move	$fp,$sp

	li	$2, 3
$END3:
	lui	$3, %hi(de)
	lw	$3, %lo(de)($3)
	lui	$3, %hi(de)
	sw	$2, %lo(de)($3)
	li	$2, 1
$END4:
	move	$2,$2
	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop

	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 f
	.size	 f, .-f



	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END5:
$END6:
$END7:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	sw	$31,8($sp)
	move	$fp,$sp

	li	$2, 5
$END8:
	lui	$3, %hi(de)
	lw	$3, %lo(de)($3)
	lui	$3, %hi(de)
	sw	$2, %lo(de)($3)
#VARIABLE : fNOT DECLARED!!!
	.option pic
	jal f
	nop
$END9:
	lui	$2, %hi(de)
	lw	$2, %lo(de)($2)
$END10:
	move	$2,$2
	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop

	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

