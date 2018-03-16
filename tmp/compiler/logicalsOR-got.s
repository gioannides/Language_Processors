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
$ELSE2:
$END7:
$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-128
	sw	$fp,124($sp)
	sw	$31,120($sp)
	move	$fp,$sp

	li	$2, 1
$END9:
	sw	$2, 116($sp) #x

	lw	$2, 116($sp) #x
	lw	$3, 116($sp) #x
	addi	$4, $3, 1 #++
	sw	$4,116($sp) #x

	sne	$2,$0,$2
	bne	$2,$0,$SHORTCIRCUIT0
	sne	$3,$0,$3
$SHORTCIRCUIT0:
	or	$2,$2,$3
	lw	$3, 116($sp) #x
	addi	$4, $3, 1 #++
	sw	$4,116($sp) #x

	sne	$2,$0,$2
	bne	$2,$0,$SHORTCIRCUIT1
	sne	$3,$0,$3
$SHORTCIRCUIT1:
	or	$2,$2,$3
	lw	$3, 116($sp) #x
	addi	$4, $3, 1 #++
	sw	$4,116($sp) #x

	sne	$2,$0,$2
	bne	$2,$0,$SHORTCIRCUIT2
	sne	$3,$0,$3
$SHORTCIRCUIT2:
	or	$2,$2,$3
	lw	$3, 116($sp) #x
	addi	$4, $3, 1 #++
	sw	$4,116($sp) #x

	sne	$2,$0,$2
	bne	$2,$0,$SHORTCIRCUIT3
	sne	$3,$0,$3
$SHORTCIRCUIT3:
	or	$2,$2,$3
$END11:
	beq	$2,$0,$ELSE10
	nop
$IF10:
	lw	$2, 116($sp) #x
$END13:
	move	$2,$2
	move	$sp,$fp
	lw	$31,120($sp)
	lw	$fp,124($sp)
	addiu	$sp,$sp,128
	j	$31

	nop

	b $END10
	nop
$ELSE10:
	li	$2, 3
$END15:
	move	$2,$2
	move	$sp,$fp
	lw	$31,120($sp)
	lw	$fp,124($sp)
	addiu	$sp,$sp,128
	j	$31

	nop

$END10:
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

