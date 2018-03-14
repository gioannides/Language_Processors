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

$END1:
$END2:
$END3:
$END5:
$IF4:
$END7:
$END9:
$END11:
$END12:
$END4:
$END13:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-144
	sw	$fp,140($sp)
	sw	$31,136($sp)
	move	$fp,$sp

	li	$2, 1
$END15:
	sw	$2, 132($sp) #a

	li	$2, 2
$END16:
	sw	$2, 128($sp) #b

	li	$2, 3
$END17:
	sb	$2, 124($sp) #c

	li	$2, 1
$END19:
	beq	$2,$0,$END18
	nop
$IF18:
	li	$2, 4
$END21:
	sw	$2, 120($sp) #ifi

	li	$2, 5
$END23:
	sw	$2, 116($sp) #newscope

	li	$2, 6
$END25:
	sw	$2, 112($sp) #the_other_newscope

	lw	$2, 128($sp) #b
	lw	$3, 120($sp) #ifi
	add	$2, $2, $3
	lw	$3, 116($sp) #newscope
	lw	$4, 112($sp) #the_other_newscope
	mult	$3, $4
	mflo	$3
	sub	$2, $2, $3
$END26:
	lw	$3, 132($sp) #a

#df
	sw	$2,132($sp) #a

$END18:
	li	$2, 0
$END27:
	move	$2,$2
	move	$sp,$fp
	lw	$31,136($sp)
	lw	$fp,140($sp)
	addiu	$sp,$sp,144
	j	$31

	nop

	move	$sp,$fp
	lw	$31,136($sp)
	lw	$fp,140($sp)
	addiu	$sp,$sp,144
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

