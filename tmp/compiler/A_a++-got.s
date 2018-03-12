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
$END3:
$END4:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-20
	sw	$fp,16($sp)
	sw	$31,12($sp)
	move	$fp,$sp

	li	$2, 1
$END5:
	sw	$2, 8($sp) #a

	lw	$3, 8($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,8($sp) #a

$END6:
	lw	$3, 8($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,8($sp) #a

$END7:
	lw	$3, 8($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,8($sp) #a

$END8:
	lw	$3, 8($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,8($sp) #a

$END9:
	lw	$2, 8($sp) #a
$END10:
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

