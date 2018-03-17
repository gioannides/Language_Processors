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
$END14:
$IF13:
$ELSE13:
$END13:
$ELSE10:
$END10:
$END7:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-140
	sw $fp,136($sp)
	sw $31,132($sp)
	move $fp,$sp

	li	$2, 9
$END17:
	sw	$2,128($sp) #x

	li	$2, 7
$END18:
	sw	$2,124($sp) #a

	li	$2, 8
$END19:
	sw	$2,120($sp) #b

	li	$2, 98
$END20:
	sw	$2,116($sp) #d

	li	$2, 115
$END21:
	sb	$2,112($sp) #g
	li	$2, 9
$END22:
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
$END24:
	beq	$2,$0,$ELSE23
	nop
$IF23:
	li	$2, 9
$END26:
	move	$2,$2
	move	$sp,$fp
	lw	$31,132($sp)
	lw	$fp,136($sp)
	addiu	$sp,$sp,140
	j	$31

	nop

	b $END23
	nop
$ELSE23:
	lw	$2, 128($sp) #x
	li	$3, 9
	seq	$2, $2, $3
$END28:
	beq	$2,$0,$ELSE27
	nop
$IF27:
	lw	$2, 124($sp) #a
	li	$3, 6
	seq	$2, $2, $3
$END31:
	beq	$2,$0,$ELSE30
	nop
$IF30:
	li	$2, 78
$END32:
	move	$2,$2
	move	$sp,$fp
	lw	$31,132($sp)
	lw	$fp,136($sp)
	addiu	$sp,$sp,140
	j	$31

	nop

	b $END30
	nop
$ELSE30:
	lb	$2, 112($sp) #g
	sub	$2,$0,$2#-
$END33:
	move	$2,$2
	move	$sp,$fp
	lw	$31,132($sp)
	lw	$fp,136($sp)
	addiu	$sp,$sp,140
	j	$31

	nop

$END30:
	b $END27
	nop
$ELSE27:
	li	$2, 99
$END35:
	move	$2,$2
	move	$sp,$fp
	lw	$31,132($sp)
	lw	$fp,136($sp)
	addiu	$sp,$sp,140
	j	$31

	nop

$END27:
$END23:
	move $sp,$fp
	lw $31,132($sp)
	lw $fp,136($sp)
	addiu $sp,$sp,140
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main

