	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	f
	.set	nomips16
	.set	nomicromips
	.ent	f
	.type	f, @function
f:

$END0:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	sw	$31,8($sp)
	move	$fp,$sp

	lw	$2, 20($sp) #a
	lw	$3, 24($sp) #b
	add	$2, $2, $3
	lw	$3, 28($sp) #c
	add	$2, $2, $3
	lw	$3, 32($sp) #d
	add	$2, $2, $3
	lw	$3, 36($sp) #e
	add	$2, $2, $3
$END1:
	move	$2,$2
	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop

	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 f
	.size	 f, .-f



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
$END5:
$END6:
$END8:
$END9:
$END10:
$END11:
$END12:
$END7:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-56
	sw	$fp,52($sp)
	sw	$31,48($sp)
	move	$fp,$sp

	li	$2, 1
$END13:
	sw	$2, 44($sp) #g

	li	$2, 7
$END14:
	sw	$2, 40($sp) #h

	li	$2, 8
$END15:
	sw	$2, 36($sp) #i

	li	$2, 3
$END16:
	sw	$2, 32($sp) #j

	li	$2, 4
$END17:
	sw	$2, 28($sp) #k

#VARIABLE : fNOT DECLARED!!!

	lw	$2, 44($sp) #g
$END19:
	sw	$2, 4($sp) #a

	lw	$2, 40($sp) #h
$END20:
	sw	$2, 8($sp) #b

	lw	$2, 36($sp) #i
$END21:
	sw	$2, 12($sp) #c

	lw	$2, 32($sp) #j
$END22:
	sw	$2, 16($sp) #d

	lw	$2, 28($sp) #k
$END23:
	sw	$2, 20($sp) #e
	.option pic
	jal f
	nop
$END18:
	move	$2,$2
	move	$sp,$fp
	lw	$31,48($sp)
	lw	$fp,52($sp)
	addiu	$sp,$sp,56
	j	$31

	nop

	move	$sp,$fp
	lw	$31,48($sp)
	lw	$fp,52($sp)
	addiu	$sp,$sp,56
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

