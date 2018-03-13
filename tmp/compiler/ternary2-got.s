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

$END0:
$END1:
	beq	$2,$0,$ELSE2
	nop
$IF2:
$END3:
	b $END2
	nop
$ELSE2:
$END4:
	b $END2
	nop
$END2:
$END5:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-24
	sw	$fp,20($sp)
	sw	$31,16($sp)
	move	$fp,$sp

	li	$2, 0
$END6:
	sw	$2, 12($sp) #d

	li	$2, 13
$END7:
	sw	$2, 8($sp) #c

	lw	$2, 12($sp) #d
	beq	$2,$0,$ELSE8
	nop
$IF8:
	li	$2, 7
$END9:
	b $END8
	nop
$ELSE8:
	li	$2, 14
$END10:
	b $END8
	nop
$END8:
	lw	$3, 8($sp) #c

#df
	sw	$2,8($sp) #c

	lw	$2, 8($sp) #c
$END11:
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

