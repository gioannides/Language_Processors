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
$END2:
$END3:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-28
	sw	$fp,24($sp)
	sw	$31,20($sp)
	move	$fp,$sp

	li	$2, 99
$END4:
	sw	$2, 16($sp) #n

	li	$2, 0
$END5:
	sw	$2, 12($sp) #acc

	lw	$2, 16($sp) #n
$END6:
	sw	$2, 8($sp) #t

$BEGIN7:
	lw	$2, 8($sp) #t
	lw	$3, 16($sp) #n
	slt	$2, $2, $3
	lw	$3, 12($sp) #acc
	li	$4, 99
	slt	$3, $3, $4
	sne	$2,$0,$2
	sne	$3,$0,$3
	or	$2,$2,$3
$END8:
	beq	$2,$0,$END7
	nop
$WHILE7:
	lw	$2, 12($sp) #acc
	lw	$3, 8($sp) #t
	add	$2, $2, $3
$END9:
	lw	$3, 12($sp) #acc

#df
	sw	$2,12($sp) #acc

	b $BEGIN7
	nop
$END7:
	lw	$2, 12($sp) #acc
$END10:
	move	$2,$2
	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop

	move	$sp,$fp
	lw	$31,20($sp)
	lw	$fp,24($sp)
	addiu	$sp,$sp,28
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

