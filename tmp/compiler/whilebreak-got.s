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
$END2:
$END3:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-128
	sw	$fp,124($sp)
	sw	$31,120($sp)
	move	$fp,$sp

	li	$2, 9
$END5:
	sw	$2, 116($sp) #i

	li	$2, 45
$END6:
	sw	$2, 112($sp) #j

$BEGIN7:
	lw	$2, 116($sp) #i
	li	$3, 0
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END8:
	beq	$2,$0,$END7
	nop
$WHILE7:
$BEGIN10:
	lw	$2, 116($sp) #i
	li	$3, 5
	sgt	$2, $2, $3
$END11:
	beq	$2,$0,$END10
	nop
$WHILE10:
	b	$END10
	nop
	lw	$2, 112($sp) #j
	addi	$3, $2, -1 #--
	sw	$3, 112($sp) #j
$END13:
	b $BEGIN10
	nop
$END10:
	lw	$2, 112($sp) #j
	addi	$3, $2, 1 #++
	sw	$3,112($sp) #j

$END14:
	lw	$2, 116($sp) #i
	addi	$3, $2, -1 #--
	sw	$3, 116($sp) #i
$END15:
	b $BEGIN7
	nop
$END7:
	lw	$2, 112($sp) #j
$END16:
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

