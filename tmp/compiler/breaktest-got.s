	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


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
	addiu	$sp,$sp,-128
	sw	$fp,124($sp)
	sw	$31,120($sp)
	move	$fp,$sp

	sw	$0, 116($sp) #j

	li	$2, 0
$END4:
	sw	$2, 112($sp) #i

	lw	$2, 112($sp) #i
$END6:
$FOR5:
	lw	$2, 112($sp) #i
	li	$3, 10
	slt	$2, $2, $3
$END7:
	beq	$2,$0,$END5
	nop
	lw	$2, 112($sp) #i
$END9:
	lw	$3, 116($sp) #j

	add	$2, $2, $3
	sw	$2,116($sp) #j

	lw	$2, 112($sp) #i
	li	$3, 5
	seq	$2, $2, $3
$END11:
	beq	$2,$0,$END10
	nop
$IF10:
	b	$END5
	nop
$END10:
	lw	$3, 112($sp) #i

	addiu	$2, $3,1
	sw	$2,112($sp) #i

$END13:
	b $FOR5
	nop
$END5:
	lw	$2, 116($sp) #j
$END14:
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

