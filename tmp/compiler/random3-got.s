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
$END4:
$END5:
$END6:
$END8:
$IF7:
$ELSE7:
$END11:
$IF10:
$ELSE10:
$END10:
$END7:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-140
	sw	$fp,136($sp)
	sw	$31,132($sp)
	move	$fp,$sp

	li	$2, 9
$END15:
	sw	$2, 128($sp) #x

	li	$2, 7
$END16:
	sw	$2, 124($sp) #a

	li	$2, 8
$END17:
	sw	$2, 120($sp) #b

	li	$2, 98
$END18:
	sw	$2, 116($sp) #d

	li	$2, 115
$END19:
	sb	$2, 112($sp) #g

	li	$2, 9
$END20:
	lw	$3, 120($sp) #b

	add	$2, $2, $3
	sw	$2,120($sp) #b

	lw	$3, 124($sp) #a

	sub	$2, $3, $2
	sw	$2,124($sp) #a

	lw	$2, 128($sp) #x
	li	$3, 88
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END22:
	beq	$2,$0,$ELSE21
	nop
$IF21:
	li	$2, 9
$END24:
	move	$2,$2
	move	$sp,$fp
	lw	$31,132($sp)
	lw	$fp,136($sp)
	addiu	$sp,$sp,140
	j	$31

	nop

	b $END21
	nop
$ELSE21:
	lw	$2, 128($sp) #x
	li	$3, 9
	seq	$2, $2, $3
$END26:
	beq	$2,$0,$ELSE25
	nop
$IF25:
	li	$2, 78
$END28:
	move	$2,$2
	move	$sp,$fp
	lw	$31,132($sp)
	lw	$fp,136($sp)
	addiu	$sp,$sp,140
	j	$31

	nop

	b $END25
	nop
$ELSE25:
	li	$2, 99
$END30:
	move	$2,$2
	move	$sp,$fp
	lw	$31,132($sp)
	lw	$fp,136($sp)
	addiu	$sp,$sp,140
	j	$31

	nop

$END25:
$END21:
	move	$sp,$fp
	lw	$31,132($sp)
	lw	$fp,136($sp)
	addiu	$sp,$sp,140
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

