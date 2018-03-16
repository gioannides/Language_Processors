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
$END15:
$IF14:
$END16:
$ELSE14:
$END17:
$END14:
$ELSE11:
$END19:
$END11:
$END7:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-144
	sw	$fp,140($sp)
	sw	$31,136($sp)
	move	$fp,$sp

	li	$2, 9
$END21:
	sw	$2, 132($sp) #x

	li	$2, 7
$END22:
	sw	$2, 128($sp) #a

	li	$2, 8
$END23:
	sw	$2, 124($sp) #b

	li	$2, 98
$END24:
	sw	$2, 120($sp) #d

	li	$2, 115
$END25:
	sb	$2, 116($sp) #g

	li	$2, 9
$END26:
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
$END28:
	beq	$2,$0,$ELSE27
	nop
$IF27:
	li	$2, 9
$END30:
	move	$2,$2
	move	$sp,$fp
	lw	$31,136($sp)
	lw	$fp,140($sp)
	addiu	$sp,$sp,144
	j	$31

	nop

	b $END27
	nop
$ELSE27:
	lw	$2, 132($sp) #x
	li	$3, 9
	seq	$2, $2, $3
$END32:
	beq	$2,$0,$ELSE31
	nop
$IF31:
	lw	$2, 128($sp) #a
	li	$3, 6
	seq	$2, $2, $3
$END35:
	beq	$2,$0,$ELSE34
	nop
$IF34:
	li	$2, 78
$END36:
	move	$2,$2
	move	$sp,$fp
	lw	$31,136($sp)
	lw	$fp,140($sp)
	addiu	$sp,$sp,144
	j	$31

	nop

	b $END34
	nop
$ELSE34:
	lb	$2, 116($sp) #g
	sub	$2,$0,$2#-
$END37:
	move	$2,$2
	move	$sp,$fp
	lw	$31,136($sp)
	lw	$fp,140($sp)
	addiu	$sp,$sp,144
	j	$31

	nop

$END34:
	b $END31
	nop
$ELSE31:
	li	$2, 99
$END39:
	move	$2,$2
	move	$sp,$fp
	lw	$31,136($sp)
	lw	$fp,140($sp)
	addiu	$sp,$sp,144
	j	$31

	nop

$END31:
$END27:
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

