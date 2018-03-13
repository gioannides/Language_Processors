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
$END5:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-32
	sw	$fp,28($sp)
	sw	$31,24($sp)
	move	$fp,$sp

	li	$2, 7
$END6:
	sw	$2, 20($sp) #a

	li	$2, 8
$END7:
	sw	$2, 16($sp) #b

	li	$2, 98
$END8:
	sw	$2, 12($sp) #d

	li	$2, 115
$END9:
	sb	$2, 8($sp) #g

	li	$2, 9
$END10:
	lw	$3, 16($sp) #b

	add	$2, $2, $3
#df
	sw	$2,16($sp) #b

	lw	$3, 20($sp) #a

	sub	$2, $3, $2
#df
	sw	$2,20($sp) #a

	li	$2, 8
$END16:
	lw	$3, 16($sp) #b

	add	$2, $2, $3
#df
	sw	$2,16($sp) #b

$END15:
	lw	$3, 20($sp) #a

	mult	$2,$3
	mflo	$2
#df
	sw	$2,20($sp) #a

$END14:
	lw	$3, 16($sp) #b

	and	$2, $2, $3
#df
	sw	$2,16($sp) #b

$END13:
	lw	$3, 12($sp) #d

	or	$2, $2, $3
#df
	sw	$2,12($sp) #d

$END12:
	lb	$3, 8($sp) #g
	div	$3,$2
	mflo	$2
#df
	sb	$2,8($sp) #g
$END11:
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

