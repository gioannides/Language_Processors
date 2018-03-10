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
$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	move	$fp,$sp

	li	$2, 99
$END3:
	sw	$2, 0($sp) #n

	li	$2, 0
$END4:
	sw	$2, 4($sp) #acc

	lw	$2, 0($sp) #n
$END5:
	sw	$2, 8($sp) #t

$BEGIN6:
	lw	$2, 8($sp) #t
	lw	$3, 0($sp) #n
	slt	$2, $2, $3
	lw	$3, 4($sp) #acc
	li	$4, 99
	slt	$3, $3, $4
	sne	$2,$0,$2
	sne	$3,$0,$3
	or	$2,$2,$3
$END7:
	beq	$2,$0,$END6
	nop
$WHILE6:
	lw	$2, 4($sp) #acc
	lw	$3, 8($sp) #t
	add	$2, $2, $3
$END8:
	lw	$3, 4($sp) #acc

#df
	sw	$2,4($sp) #acc

	b $BEGIN6
	nop
$END6:
	lw	$2, 4($sp) #acc
$END9:
	move	$sp,$fp
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop

	move	$sp,$fp
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

