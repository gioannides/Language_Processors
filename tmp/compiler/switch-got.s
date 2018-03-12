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
	addiu	$sp,$sp,-20
	sw	$fp,16($sp)
	sw	$31,12($sp)
	move	$fp,$sp

	li	$2, 8
$END1:
	sw	$2, 8($sp) #x

	lw	$2, 8($sp) #x
$END3:
	li	$3, 4
$END5:
	beq	$2,$3,$CASE4
	nop
	li	$3, 8
$END7:
	beq	$2,$3,$CASE6
	nop
	li	$3, 9
$END9:
	beq	$2,$3,$CASE8
	nop
$CASE4:
	li	$2, 2
$END10:
	lw	$3, 8($sp) #x

#df
	sw	$2,8($sp) #x

	b	$END2
	nop
$CASE6:
	li	$2, 3
$END11:
	lw	$3, 8($sp) #x

#df
	sw	$2,8($sp) #x

	b	$END2
	nop
$CASE8:
	li	$2, 7
$END12:
	lw	$3, 8($sp) #x

#df
	sw	$2,8($sp) #x

	b	$END2
	nop
$DEFAULT13:
	li	$2, 98
$END14:
	lw	$3, 8($sp) #x

#df
	sw	$2,8($sp) #x

	b	$END2
	nop
$END2:
	lw	$2, 8($sp) #x
$END15:
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
	.end	 main
	.size	 main, .-main

