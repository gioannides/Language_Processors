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
$END12:
$END9:
$END6:
$END3:
$END14:
$IF13:
$END17:
$IF16:
$END18:
$END16:
$END20:
$IF19:
$END23:
$IF22:
$END25:
$ELSE22:
$END27:
$IF26:
$END29:
$ELSE26:
$END31:
$END26:
$END22:
$END19:
$END13:
$END32:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-124
	sw	$fp,120($sp)
	sw	$31,116($sp)
	move	$fp,$sp

	li	$2, 1
$END34:
	sw	$2, 112($sp) #x

	lw	$2, 112($sp) #x
	li	$3, 1
	seq	$2, $2, $3
$END36:
	beq	$2,$0,$END35
	nop
$IF35:
	lw	$2, 112($sp) #x
	li	$3, 2
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END39:
	beq	$2,$0,$END38
	nop
$IF38:
	lw	$2, 112($sp) #x
	li	$3, 3
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END42:
	beq	$2,$0,$END41
	nop
$IF41:
	li	$2, 3
$END44:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

$END41:
$END38:
$END35:
	lw	$2, 112($sp) #x
	li	$3, 1
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END46:
	beq	$2,$0,$END45
	nop
$IF45:
	lw	$2, 112($sp) #x
	li	$3, 4
	seq	$2, $2, $3
$END49:
	beq	$2,$0,$END48
	nop
$IF48:
	li	$2, 4
$END50:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

$END48:
	lw	$2, 112($sp) #x
	li	$3, 5
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END52:
	beq	$2,$0,$END51
	nop
$IF51:
	lw	$2, 112($sp) #x
	li	$3, 6
	seq	$2, $2, $3
$END55:
	beq	$2,$0,$ELSE54
	nop
$IF54:
	li	$2, 6
$END57:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

	b $END54
	nop
$ELSE54:
	lw	$2, 112($sp) #x
	li	$3, 7
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END59:
	beq	$2,$0,$ELSE58
	nop
$IF58:
	li	$2, 7
$END61:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

	b $END58
	nop
$ELSE58:
	li	$2, 1
$END63:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

$END58:
$END54:
$END51:
$END45:
	li	$2, 99
$END64:
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

