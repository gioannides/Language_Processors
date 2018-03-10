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
	addiu	$sp,$sp,-12
	sw	$fp,8($sp)
	move	$fp,$sp

	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 3
	add	$2, $2, $3
$END2:
	sw	$2, 0($sp) #x

	sw	$0, 4($sp) #i

	li	$2, 0
$END4:
	lw	$3, 4($sp) #i

#df
	sw	$2,4($sp) #i

$FOR3:
	lw	$2, 4($sp) #i
	li	$3, 100
	seq	$2, $2, $3
$END5:
	beq	$2,$0,$END3
	nop
	lw	$2, 4($sp) #i
	li	$3, 1
	add	$2, $2, $3
$END6:
	lw	$3, 4($sp) #i

#df
	sw	$2,4($sp) #i

	lw	$2, 0($sp) #x
	li	$3, 1
	add	$2, $2, $3
$END7:
	lw	$3, 0($sp) #x

#df
	sw	$2,0($sp) #x

	b $FOR3
	nop
$END3:
	lw	$2, 0($sp) #x
$END8:
	move	$sp,$fp
	lw	$fp,8($sp)
	addiu	$sp,$sp,12
	j	$31

	nop

	move	$sp,$fp
	lw	$fp,8($sp)
	addiu	$sp,$sp,12
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

