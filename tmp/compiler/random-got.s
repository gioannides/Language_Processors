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
$END7:
$END13:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-144
	sw	$fp,140($sp)
	sw	$31,136($sp)
	move	$fp,$sp

	li	$2, 20
$END15:
	sw	$2, 132($sp) #x

	li	$2, 7
$END16:
	sw	$2, 128($sp) #a

	li	$2, 8
$END17:
	sw	$2, 124($sp) #b

	li	$2, 98
$END18:
	sw	$2, 120($sp) #d

	li	$2, 115
$END19:
	sb	$2, 116($sp) #g

	li	$2, 9
$END20:
	lw	$3, 124($sp) #b

	add	$2, $2, $3
	sw	$2,124($sp) #b

	lw	$3, 128($sp) #a

	sub	$2, $3, $2
	sw	$2,128($sp) #a

	lw	$2, 132($sp) #x
	li	$3, 1
	sub	$3,$0,$3#-
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END22:
	beq	$2,$0,$ELSE21
	nop
$IF21:
	li	$2, 0
$END24:
	sw	$2, 112($sp) #i

	lw	$2, 112($sp) #i
$END26:
$FOR25:
	lw	$2, 112($sp) #i
	li	$3, 10
	slt	$2, $2, $3
$END27:
	beq	$2,$0,$END25
	nop
	lw	$2, 132($sp) #x
	addi	$3, $2, -1 #--
	sw	$3, 132($sp) #x
$END29:
	lw	$3, 112($sp) #i

	addiu	$2, $3,1
	sw	$2,112($sp) #i

$END30:
	b $FOR25
	nop
$END25:
	b $END21
	nop
$ELSE21:
	li	$2, 1
	sub	$2,$0,$2#-
$END32:
	move	$2,$2
	move	$sp,$fp
	lw	$31,136($sp)
	lw	$fp,140($sp)
	addiu	$sp,$sp,144
	j	$31

	nop

$END21:
	lw	$2, 132($sp) #x
$END33:
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

