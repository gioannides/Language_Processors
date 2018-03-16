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
$END10:
$ELSE7:
$END12:
$IF11:
$END14:
$ELSE11:
$END16:
$END11:
$END7:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-144
	sw	$fp,140($sp)
	sw	$31,136($sp)
	move	$fp,$sp

	li	$2, 9
$END18:
	sw	$2, 132($sp) #x

	li	$2, 7
$END19:
	sw	$2, 128($sp) #a

	li	$2, 8
$END20:
	sw	$2, 124($sp) #b

	li	$2, 98
$END21:
	sw	$2, 120($sp) #d

	li	$2, 115
$END22:
	sb	$2, 116($sp) #g

	li	$2, 9
$END23:
	lw	$3, 124($sp) #b

	add	$2, $2, $3
	sw	$2,124($sp) #b

	lw	$3, 128($sp) #a

	sub	$2, $3, $2
	sw	$2,128($sp) #a

	lw	$2, 132($sp) #x
	li	$3, 88
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END25:
	beq	$2,$0,$ELSE24
	nop
$IF24:
	li	$2, 9
$END27:
	move	$2,$2
	move	$sp,$fp
	lw	$31,136($sp)
	lw	$fp,140($sp)
	addiu	$sp,$sp,144
	j	$31

	nop

	b $END24
	nop
$ELSE24:
	lw	$2, 132($sp) #x
	li	$3, 9
	seq	$2, $2, $3
$END29:
	beq	$2,$0,$ELSE28
	nop
$IF28:
	li	$2, 78
$END31:
	move	$2,$2
	move	$sp,$fp
	lw	$31,136($sp)
	lw	$fp,140($sp)
	addiu	$sp,$sp,144
	j	$31

	nop

	b $END28
	nop
$ELSE28:
	li	$2, 99
$END33:
	move	$2,$2
	move	$sp,$fp
	lw	$31,136($sp)
	lw	$fp,140($sp)
	addiu	$sp,$sp,144
	j	$31

	nop

$END28:
$END24:
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

