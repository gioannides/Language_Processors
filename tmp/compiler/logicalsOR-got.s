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
$ELSE2:
$END2:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-124
	sw $fp,120($sp)
	sw $31,116($sp)
	move $fp,$sp

	li	$2, 1
$END7:
	sw	$2,112($sp) #x

	lw	$2, 112($sp) #x
	sne $2,$0,$2
	bne $2,$0,$SHORTCIRCUIT_OR0
	nop	
	lw	$3, 112($sp) #x
	sne $3,$0,$3
	addi	$4, $3, 1 #++
	sw	$4,112($sp) #x

	or $2,$2,$3
$SHORTCIRCUIT_OR0:
	sne $2,$0,$2
	bne $2,$0,$SHORTCIRCUIT_OR1
	nop	
	lw	$3, 112($sp) #x
	sne $3,$0,$3
	addi	$4, $3, 1 #++
	sw	$4,112($sp) #x

	or $2,$2,$3
$SHORTCIRCUIT_OR1:
	sne $2,$0,$2
	bne $2,$0,$SHORTCIRCUIT_OR2
	nop	
	lw	$3, 112($sp) #x
	sne $3,$0,$3
	addi	$4, $3, 1 #++
	sw	$4,112($sp) #x

	or $2,$2,$3
$SHORTCIRCUIT_OR2:
	sne $2,$0,$2
	bne $2,$0,$SHORTCIRCUIT_OR3
	nop	
	lw	$3, 112($sp) #x
	sne $3,$0,$3
	addi	$4, $3, 1 #++
	sw	$4,112($sp) #x

	or $2,$2,$3
$SHORTCIRCUIT_OR3:
$END9:
	beq	$2,$0,$ELSE8
	nop
$IF8:
	lw	$2, 112($sp) #x
$END11:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

	b $END8
	nop
$ELSE8:
	li	$2, 3
$END13:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

$END8:
	move $sp,$fp
	lw $31,116($sp)
	lw $fp,120($sp)
	addiu $sp,$sp,124
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

