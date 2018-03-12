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
$END4:
$END5:
$END6:
$END7:
$END8:
$END9:
$END10:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-20
	sw	$fp,16($sp)
	sw	$31,12($sp)
	move	$fp,$sp

	li	$2, 1
$END11:
	sw	$2, 8($sp) #a

	lw	$3, 8($sp) #a

	addiu	$2, $3,-1
#df
	sw	$2,8($sp) #a

$END12:
	lw	$3, 8($sp) #a

	addiu	$2, $3,-1
#df
	sw	$2,8($sp) #a

$END13:
	lw	$3, 8($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,8($sp) #a

$END14:
	lw	$3, 8($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,8($sp) #a

$END15:
	lw	$3, 8($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,8($sp) #a

$END16:
	lw	$3, 8($sp) #a

	addiu	$2, $3,-1
#df
	sw	$2,8($sp) #a

$END17:
	lw	$3, 8($sp) #a

	addiu	$2, $3,-1
#df
	sw	$2,8($sp) #a

$END18:
	lw	$3, 8($sp) #a

	addiu	$2, $3,-1
#df
	sw	$2,8($sp) #a

$END19:
	lw	$3, 8($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,8($sp) #a

$END20:
	lw	$3, 8($sp) #a

	addiu	$2, $3,-1
#df
	sw	$2,8($sp) #a

$END21:
	lw	$2, 8($sp) #a
$END22:
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

