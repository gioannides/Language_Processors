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

	li	$2, 8
$END4:
	sw	$2, 16($sp) #a

	li	$2, 67
$END5:
	sw	$2, 12($sp) #b

	sw	$0, 8($sp) #z

	lw	$2, 12($sp) #b
$END6:
	lw	$3, 16($sp) #a

	add	$2, $2, $3
#df
	sw	$2,16($sp) #a

	lw	$3, 8($sp) #z

#df
	sw	$2,8($sp) #z

	lw	$2, 16($sp) #a
	lw	$3, 8($sp) #z
	add	$2, $2, $3
$END7:
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

