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
	addiu	$sp,$sp,-8
	sw	$fp,4($sp)
	move	$fp,$sp

	li	$2, 1
$END1:
	sw	$2, 0($sp) #a

 # this is the problem--
	lw	$3, 0($sp) #a

	addiu	$2, $3,-1
#df
	sw	$2,0($sp) #a

$END2:
 # this is the problem--
	lw	$3, 0($sp) #a

	addiu	$2, $3,-1
#df
	sw	$2,0($sp) #a

$END3:
 # this is the problem--
	lw	$3, 0($sp) #a

	addiu	$2, $3,-1
#df
	sw	$2,0($sp) #a

$END4:
 # this is the problem--
	lw	$3, 0($sp) #a

	addiu	$2, $3,-1
#df
	sw	$2,0($sp) #a

$END5:
	lw	$2, 0($sp) #a
$END6:
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	j	$31

	nop

	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

