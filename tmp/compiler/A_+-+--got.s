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
 # this is the problem++
	lw	$3, 0($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,0($sp) #a

$END4:
	lw	$3, 0($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,0($sp) #a

$END5:
	lw	$3, 0($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,0($sp) #a

$END6:
	lw	$3, 0($sp) #a

	addiu	$2, $3,-1
#df
	sw	$2,0($sp) #a

$END7:
 # this is the problem--
	lw	$3, 0($sp) #a

	addiu	$2, $3,-1
#df
	sw	$2,0($sp) #a

$END8:
 # this is the problem--
	lw	$3, 0($sp) #a

	addiu	$2, $3,-1
#df
	sw	$2,0($sp) #a

$END9:
 # this is the problem++
	lw	$3, 0($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,0($sp) #a

$END10:
	lw	$3, 0($sp) #a

	addiu	$2, $3,-1
#df
	sw	$2,0($sp) #a

$END11:
	lw	$2, 0($sp) #a
$END12:
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

