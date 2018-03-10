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

$END0:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	move	$fp,$sp

	sw	$0, 0($sp) #x

	sw	$0, 4($sp) #y

	li	$2, 2
$END1:
	sw	$2, 8($sp) #acc

	li	$2, 0
$END2:
	lw	$3, 0($sp) #x

#df
	sw	$2,0($sp) #x

	li	$2, 0
$END3:
	lw	$3, 4($sp) #y

#df
	sw	$2,4($sp) #y

$BEGIN4:
	lw	$2, 0($sp) #x
	li	$3, 6
	slt	$2, $2, $3
$END5:
	beq	$2,$0,$END4
	nop
$WHILE4:
	li	$2, 0
$END6:
	lw	$3, 4($sp) #y

#df
	sw	$2,4($sp) #y

$BEGIN7:
	lw	$2, 4($sp) #y
	lw	$3, 0($sp) #x
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END8:
	beq	$2,$0,$END7
	nop
$WHILE7:
	lw	$2, 8($sp) #acc
	lw	$3, 4($sp) #y
	add	$2, $2, $3
$END9:
	lw	$3, 8($sp) #acc

#df
	sw	$2,8($sp) #acc

	lw	$2, 4($sp) #y
	li	$3, 1
	add	$2, $2, $3
$END10:
	lw	$3, 4($sp) #y

#df
	sw	$2,4($sp) #y

	b $BEGIN7
	nop
$END7:
	lw	$2, 0($sp) #x
	li	$3, 2
	add	$2, $2, $3
$END11:
	lw	$3, 0($sp) #x

#df
	sw	$2,0($sp) #x

	b $BEGIN4
	nop
$END4:
	lw	$2, 8($sp) #acc
	lw	$3, 0($sp) #x
	sub	$2, $2, $3
	lw	$3, 4($sp) #y
	sub	$2, $2, $3
$END12:
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

