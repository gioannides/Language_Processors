	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


$END0:

	.data
	.globl	f
	.align	2
	.type	f, @object
	.size	f, 4
f:
	.word	6


	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END2:
$END4:
$IF3:
$END7:
$IF6:
$END10:
$IF9:
$END9:
$END6:
$END3:
$END13:
$IF12:
$END16:
$IF15:
$END15:
$END18:
$IF17:
$END21:
$IF20:
$ELSE20:
$END24:
$IF23:
$ELSE23:
$END23:
$END20:
$END17:
$END12:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-124
	sw	$fp,120($sp)
	sw	$31,116($sp)
	move	$fp,$sp

	li	$2, 1
$END28:
	sw	$2, 112($sp) #x

	lw	$2, 112($sp) #x
	li	$3, 1
	seq	$2, $2, $3
$END30:
	beq	$2,$0,$END29
	nop
$IF29:
	lw	$2, 112($sp) #x
	li	$3, 2
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END33:
	beq	$2,$0,$END32
	nop
$IF32:
	lw	$2, 112($sp) #x
	li	$3, 3
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END36:
	beq	$2,$0,$END35
	nop
$IF35:
	li	$2, 3
$END38:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

$END35:
$END32:
$END29:
	lw	$2, 112($sp) #x
	li	$3, 1
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END40:
	beq	$2,$0,$END39
	nop
$IF39:
	lw	$2, 112($sp) #x
	li	$3, 4
	seq	$2, $2, $3
$END43:
	beq	$2,$0,$END42
	nop
$IF42:
	li	$2, 4
$END44:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

$END42:
	lw	$2, 112($sp) #x
	li	$3, 5
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END46:
	beq	$2,$0,$END45
	nop
$IF45:
	lw	$2, 112($sp) #x
	li	$3, 6
	seq	$2, $2, $3
$END49:
	beq	$2,$0,$ELSE48
	nop
$IF48:
	li	$2, 6
$END51:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

	b $END48
	nop
$ELSE48:
	lw	$2, 112($sp) #x
	li	$3, 7
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END53:
	beq	$2,$0,$ELSE52
	nop
$IF52:
	li	$2, 7
$END55:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

	b $END52
	nop
$ELSE52:
	li	$2, 1
$END57:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

$END52:
$END48:
$END45:
$END39:
	li	$2, 99
$END58:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

