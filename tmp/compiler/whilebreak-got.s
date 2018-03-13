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
	addiu	$sp,$sp,-24
	sw	$fp,20($sp)
	sw	$31,16($sp)
	move	$fp,$sp

	li	$2, 9
$END3:
	sw	$2, 12($sp) #i

	li	$2, 45
$END4:
	sw	$2, 8($sp) #j

$BEGIN5:
	lw	$2, 12($sp) #i
	li	$3, 0
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END6:
	beq	$2,$0,$END5
	nop
$WHILE5:
$BEGIN7:
	lw	$2, 12($sp) #i
	li	$3, 5
	sgt	$2, $2, $3
$END8:
	beq	$2,$0,$END7
	nop
$WHILE7:
	b	$END7
	nop
	lw	$3, 8($sp) #j

	addiu	$2, $3,-1
#df
	sw	$2,8($sp) #j

$END9:
	b $BEGIN7
	nop
$END7:
	lw	$3, 8($sp) #j

	addiu	$2, $3,1
#df
	sw	$2,8($sp) #j

$END10:
	lw	$3, 12($sp) #i

	addiu	$2, $3,-1
#df
	sw	$2,12($sp) #i

$END11:
	b $BEGIN5
	nop
$END5:
	lw	$2, 8($sp) #j
$END12:
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

