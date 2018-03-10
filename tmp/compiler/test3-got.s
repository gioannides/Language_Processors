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
	addiu	$sp,$sp,-17
	sw	$fp,13($sp)
	move	$fp,$sp

	li	$2, 7
$END4:
	sw	$2, 0($sp) #a

	li	$2, 8
$END5:
	sw	$2, 4($sp) #b

	li	$2, 98
$END6:
	sw	$2, 8($sp) #d

	li	$2, 115
$END7:
	sb	$2, 12($sp) #g

	li	$2, 9
$END8:
	lw	$3, 4($sp) #b

	add	$2, $2, $3
#df
	sw	$2,4($sp) #b

	lw	$3, 0($sp) #a

	sub	$2, $3, $2
#df
	sw	$2,0($sp) #a

	li	$2, 8
$END14:
	lw	$3, 4($sp) #b

	add	$2, $2, $3
#df
	sw	$2,4($sp) #b

$END13:
	lw	$3, 0($sp) #a

	mult	$2,$3
	mflo	$2
#df
	sw	$2,0($sp) #a

$END12:
	lw	$3, 4($sp) #b

	and	$2, $2, $3
#df
	sw	$2,4($sp) #b

$END11:
	lw	$3, 8($sp) #d

	or	$2, $2, $3
#df
	sw	$2,8($sp) #d

$END10:
	lb	$3, 12($sp) #g
	div	$3,$2
	mflo	$2
#df
	sb	$2, 12($sp) #g
$END9:
	move	$sp,$fp
	lw	$fp,13($sp)
	addiu	$sp,$sp,17
	j	$31

	nop

	move	$sp,$fp
	lw	$fp,13($sp)
	addiu	$sp,$sp,17
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

