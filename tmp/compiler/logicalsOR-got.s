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

$IF1:
$ELSE1:
$END_sel1:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-152
	sw $fp,148($sp)
	sw $31,144($sp)
	move $fp,$sp

	sw $4,152($sp)
	sw $5,156($sp)
	sw $6,160($sp)
	sw $7,164($sp)
	li	$2, 1
	sw	$2,140($sp) #x

	lw	$2, 140($sp) #x
	sne $2,$0,$2
	bne $2,$0,$SHORTCIRCUIT_OR5
	nop	
	lw	$3, 140($sp) #x
	sne $3,$0,$3
	addi	$4, $3, 1 #++
	sw	$4,140($sp) #x

	or $2,$2,$3
$SHORTCIRCUIT_OR5:
	sne $2,$0,$2
	bne $2,$0,$SHORTCIRCUIT_OR6
	nop	
	lw	$3, 140($sp) #x
	sne $3,$0,$3
	addi	$4, $3, 1 #++
	sw	$4,140($sp) #x

	or $2,$2,$3
$SHORTCIRCUIT_OR6:
	sne $2,$0,$2
	bne $2,$0,$SHORTCIRCUIT_OR7
	nop	
	lw	$3, 140($sp) #x
	sne $3,$0,$3
	addi	$4, $3, 1 #++
	sw	$4,140($sp) #x

	or $2,$2,$3
$SHORTCIRCUIT_OR7:
	sne $2,$0,$2
	bne $2,$0,$SHORTCIRCUIT_OR8
	nop	
	lw	$3, 140($sp) #x
	sne $3,$0,$3
	addi	$4, $3, 1 #++
	sw	$4,140($sp) #x

	or $2,$2,$3
$SHORTCIRCUIT_OR8:
	beq	$2,$0,$ELSE5
	nop
$IF5:
	lw	$2, 140($sp) #x
	move	$2,$2
	move	$sp,$fp
	lw	$31,144($sp)
	lw	$fp,148($sp)
	addiu	$sp,$sp,152
	j	$31

	nop

	b $END_sel5
	nop
$ELSE5:
	li	$2, 3
	move	$2,$2
	move	$sp,$fp
	lw	$31,144($sp)
	lw	$fp,148($sp)
	addiu	$sp,$sp,152
	j	$31

	nop

$END_sel5:
	move $sp,$fp
	lw $31,144($sp)
	lw $fp,148($sp)
	addiu $sp,$sp,152
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

