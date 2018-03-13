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
	addiu	$sp,$sp,-24
	sw	$fp,20($sp)
	sw	$31,16($sp)
	move	$fp,$sp

	lui	$2, %hi(a)
	lw	$2, %lo(a)($2)
	li	$3, 3
	add	$2, $2, $3
$END3:
	sw	$2, 12($sp) #x

	sw	$0, 8($sp) #i

	li	$2, 0
$END5:
	lw	$3, 8($sp) #i

#df
	sw	$2,8($sp) #i

$FOR4:
	lw	$2, 8($sp) #i
	li	$3, 100
	seq	$2, $2, $3
$END6:
	beq	$2,$0,$END4
	nop
	lw	$2, 12($sp) #x
	li	$3, 1
	add	$2, $2, $3
$END7:
	lw	$3, 12($sp) #x

#df
	sw	$2,12($sp) #x

	lw	$2, 8($sp) #i
	li	$3, 1
	add	$2, $2, $3
$END8:
	lw	$3, 8($sp) #i

#df
	sw	$2,8($sp) #i

	b $FOR4
	nop
$END4:
	lw	$2, 12($sp) #x
$END9:
	move	$2,$2
	move	$sp,$fp
	lw	$31,16($sp)
	lw	$fp,20($sp)
	addiu	$sp,$sp,24
	j	$31

	nop

	move	$sp,$fp
	lw	$31,16($sp)
	lw	$fp,20($sp)
	addiu	$sp,$sp,24
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

