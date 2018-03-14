	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


$END0:

	.data
	.globl	a
	.align	2
	.type	a, @object
	.size	a, 4
a:
	.word	90


	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END2:
$END3:
$END4:
$END6:
$IF5:
$END8:
$END9:
$END11:
$END12:
$END14:
$END15:
$END16:
$END5:
$END17:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-156
	sw	$fp,152($sp)
	sw	$31,148($sp)
	move	$fp,$sp

	li	$2, 1
$END19:
	sw	$2, 144($sp) #a

	li	$2, 2
$END20:
	sw	$2, 140($sp) #b

	li	$2, 3
$END21:
	sb	$2, 136($sp) #c

	li	$2, 1
$END23:
	beq	$2,$0,$END22
	nop
$IF22:
	li	$2, 4
$END25:
	sw	$2, 132($sp) #ifi

	li	$2, 10
$END26:
	sw	$2, 128($sp) #a

	li	$2, 20
$END28:
	sw	$2, 124($sp) #a

	li	$2, 5
$END29:
	sw	$2, 120($sp) #newscope

	li	$2, 30
$END31:
	sw	$2, 116($sp) #a

	li	$2, 6
$END32:
	sw	$2, 112($sp) #the_other_newscope

	lw	$2, 140($sp) #b
	lw	$3, 132($sp) #ifi
	add	$2, $2, $3
	lw	$3, 120($sp) #newscope
	lw	$4, 112($sp) #the_other_newscope
	mult	$3, $4
	mflo	$3
	sub	$2, $2, $3
$END33:
	lw	$3, 116($sp) #a

#df
	sw	$2,116($sp) #a

$END22:
	lw	$2, 144($sp) #a
$END34:
	move	$2,$2
	move	$sp,$fp
	lw	$31,148($sp)
	lw	$fp,152($sp)
	addiu	$sp,$sp,156
	j	$31

	nop

	move	$sp,$fp
	lw	$31,148($sp)
	lw	$fp,152($sp)
	addiu	$sp,$sp,156
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

