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
$END3:
$IF2:
$END5:
$END7:
$IF6:
$END9:
$END11:
$IF10:
$END13:
$END10:
$END6:
$END14:
$END2:
$END15:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-128
	sw	$fp,124($sp)
	sw	$31,120($sp)
	move	$fp,$sp

	sw	$0, 116($sp) #a

	li	$2, 8
$END17:
	sw	$2, 112($sp) #b

	lw	$2, 116($sp) #a
	lw	$3, 112($sp) #b
	slt	$2, $2, $3
$END19:
	beq	$2,$0,$END18
	nop
$IF18:
	lw	$2, 116($sp) #a
	li	$3, 1
	sub	$2, $2, $3
$END21:
	lw	$3, 116($sp) #a

	sw	$2,116($sp) #a

	lw	$2, 116($sp) #a
	lw	$3, 112($sp) #b
	sgt	$2, $2, $3
$END23:
	beq	$2,$0,$END22
	nop
$IF22:
	lw	$2, 112($sp) #b
	li	$3, 3
	add	$2, $2, $3
$END25:
	lw	$3, 112($sp) #b

	sw	$2,112($sp) #b

	lw	$2, 116($sp) #a
	lw	$3, 112($sp) #b
	seq	$2, $2, $3
$END27:
	beq	$2,$0,$END26
	nop
$IF26:
	lw	$2, 116($sp) #a
	lw	$3, 112($sp) #b
	mult	$2, $3
	mflo	$2
$END29:
	move	$2,$2
	move	$sp,$fp
	lw	$31,120($sp)
	lw	$fp,124($sp)
	addiu	$sp,$sp,128
	j	$31

	nop

$END26:
$END22:
	lw	$2, 112($sp) #b
$END30:
	move	$2,$2
	move	$sp,$fp
	lw	$31,120($sp)
	lw	$fp,124($sp)
	addiu	$sp,$sp,128
	j	$31

	nop

$END18:
	li	$2, 13
$END31:
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

