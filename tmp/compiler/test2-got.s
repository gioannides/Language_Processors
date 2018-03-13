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
	addiu	$sp,$sp,-24
	sw	$fp,20($sp)
	sw	$31,16($sp)
	move	$fp,$sp

	li	$2, 7
$END4:
	sw	$2, 12($sp) #a

	li	$2, 8
$END5:
	sw	$2, 8($sp) #b

	li	$2, 9
$END6:
	lw	$3, 8($sp) #b

	add	$2, $2, $3
#df
	sw	$2,8($sp) #b

	lw	$3, 12($sp) #a

	sub	$2, $3, $2
#df
	sw	$2,12($sp) #a

	li	$2, 8
$END8:
	lw	$3, 8($sp) #b

	add	$2, $2, $3
#df
	sw	$2,8($sp) #b

	lw	$3, 12($sp) #a

	mult	$2,$3
	mflo	$2
#df
	sw	$2,12($sp) #a

	lw	$3, 8($sp) #b

	and	$2, $2, $3
#df
	sw	$2,8($sp) #b

$END7:
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

