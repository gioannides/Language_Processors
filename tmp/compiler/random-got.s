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
$END7:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-36
	sw	$fp,32($sp)
	sw	$31,28($sp)
	move	$fp,$sp

	li	$2, 9
$END8:
	sw	$2, 24($sp) #x

	li	$2, 7
$END9:
	sw	$2, 20($sp) #a

	li	$2, 8
$END10:
	sw	$2, 16($sp) #b

	li	$2, 98
$END11:
	sw	$2, 12($sp) #d

	li	$2, 115
$END12:
	sb	$2, 8($sp) #g

	li	$2, 9
$END13:
	lw	$3, 16($sp) #b

	add	$2, $2, $3
#df
	sw	$2,16($sp) #b

	lw	$3, 20($sp) #a

	sub	$2, $3, $2
#df
	sw	$2,20($sp) #a

	lw	$2, 24($sp) #x
	li	$3, 88
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END15:
	beq	$2,$0,$ELSE14
	nop
$IF14:
	li	$2, 0
$END16:
	sw	$2, 4($sp) #i

	lw	$2, 4($sp) #i
$END18:
$FOR17:
	lw	$2, 4($sp) #i
	li	$3, 100
	slt	$2, $2, $3
$END19:
	beq	$2,$0,$END17
	nop
	lw	$3, 24($sp) #x

	addiu	$2, $3,-1
#df
	sw	$2,24($sp) #x

$END20:
	lw	$3, 4($sp) #i

	addiu	$2, $3,1
#df
	sw	$2,4($sp) #i

$END21:
	b $FOR17
	nop
$END17:
	b $END14
	nop
$ELSE14:
	li	$2, -1
$END22:
	move	$2,$2
	move	$sp,$fp
	lw	$31,28($sp)
	lw	$fp,32($sp)
	addiu	$sp,$sp,36
	j	$31

	nop

$END14:
	lw	$2, 24($sp) #x
$END23:
	move	$2,$2
	move	$sp,$fp
	lw	$31,28($sp)
	lw	$fp,32($sp)
	addiu	$sp,$sp,36
	j	$31

	nop

	li	$2, 8
$END30:
	lw	$3, 16($sp) #b

	add	$2, $2, $3
#df
	sw	$2,16($sp) #b

$END29:
	lw	$3, 20($sp) #a

	mult	$2,$3
	mflo	$2
#df
	sw	$2,20($sp) #a

$END28:
	lw	$3, 16($sp) #b

	and	$2, $2, $3
#df
	sw	$2,16($sp) #b

$END27:
	lw	$3, 12($sp) #d

	or	$2, $2, $3
#df
	sw	$2,12($sp) #d

$END26:
	lb	$3, 8($sp) #g
	div	$3,$2
	mflo	$2
#df
	sb	$2,8($sp) #g
$END25:
$END24:
	move	$2,$2
	move	$sp,$fp
	lw	$31,28($sp)
	lw	$fp,32($sp)
	addiu	$sp,$sp,36
	j	$31

	nop

	move	$sp,$fp
	lw	$31,28($sp)
	lw	$fp,32($sp)
	addiu	$sp,$sp,36
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

