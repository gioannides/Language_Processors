	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	test_add
	.set	nomips16
	.set	nomicromips
	.ent	test_add
	.type	test_add, @function
test_add:

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
	lw	$3, 40($sp) #f
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
	.end	 test_add
	.size	 test_add, .-test_add



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
$END5:
$END6:
$END7:
$END8:
$END9:
$END10:
$END4:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-48
	sw	$fp,44($sp)
	sw	$31,40($sp)
	move	$fp,$sp

	li	$2, 5
$END11:
	sw	$2, 36($sp) #i

	li	$2, 10
$END12:
	sw	$2, 32($sp) #z

#VARIABLE : test_addNOT DECLARED!!!

	lw	$2, 36($sp) #i
$END14:
	sw	$2, 4($sp) #a

	lw	$2, 32($sp) #z
$END15:
	sw	$2, 8($sp) #b

	li	$2, 3
$END16:
	sw	$2, 12($sp) #c

	li	$2, 4
$END17:
	sw	$2, 16($sp) #d

	li	$2, 5
$END18:
	sw	$2, 20($sp) #e

	li	$2, 6
$END19:
	sw	$2, 24($sp) #f
	.option pic
	jal test_add
	nop
$END13:
	move	$2,$2
	move	$sp,$fp
	lw	$31,40($sp)
	lw	$fp,44($sp)
	addiu	$sp,$sp,48
	j	$31

	nop

	move	$sp,$fp
	lw	$31,40($sp)
	lw	$fp,44($sp)
	addiu	$sp,$sp,48
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

