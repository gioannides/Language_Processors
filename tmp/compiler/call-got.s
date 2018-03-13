	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	mult
	.set	nomips16
	.set	nomicromips
	.ent	mult
	.type	mult, @function
mult:

$END0:
$END1:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-20
	sw	$fp,16($sp)
	sw	$31,12($sp)
	move	$fp,$sp

	li	$2, 0
$END2:
	sw	$2, 8($sp) #c

$BEGIN3:
	lw	$2, 24($sp) #a
	li	$3, 0
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END4:
	beq	$2,$0,$END3
	nop
$WHILE3:
	lw	$2, 8($sp) #c
	lw	$3, 28($sp) #b
	add	$2, $2, $3
$END5:
	lw	$3, 8($sp) #c

#df
	sw	$2,8($sp) #c

	lw	$2, 24($sp) #a
	li	$3, 1
	sub	$2, $2, $3
$END6:
	lw	$3, 24($sp) #a

#df
	sw	$2,24($sp) #a

	b $BEGIN3
	nop
$END3:
	lw	$2, 8($sp) #c
$END7:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 mult
	.size	 mult, .-mult



	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END8:
$END9:
$END11:
$END12:
$END10:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-32
	sw	$fp,28($sp)
	sw	$31,24($sp)
	move	$fp,$sp

	li	$2, 5
$END13:
	sw	$2, 20($sp) #a

	li	$2, 7
$END14:
	sw	$2, 16($sp) #b

#VARIABLE : multNOT DECLARED!!!

	lw	$2, 20($sp) #a
$END16:
	sw	$2, 4($sp) #a

	lw	$2, 16($sp) #b
$END17:
	sw	$2, 8($sp) #b
	.option pic
	jal mult
	nop
$END15:
	move	$2,$2
	move	$sp,$fp
	lw	$31,24($sp)
	lw	$fp,28($sp)
	addiu	$sp,$sp,32
	j	$31

	nop

	move	$sp,$fp
	lw	$31,24($sp)
	lw	$fp,28($sp)
	addiu	$sp,$sp,32
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

