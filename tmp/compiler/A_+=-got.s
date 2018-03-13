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

$END0:
$END1:
$END2:
$END3:
$END4:
$END5:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-44
	sw	$fp,40($sp)
	sw	$31,36($sp)
	move	$fp,$sp

	li	$2, 1
$END6:
	sw	$2, 32($sp) #a

	li	$2, 2
$END7:
	sw	$2, 28($sp) #b

	li	$2, 3
$END8:
	sw	$2, 24($sp) #c

	sw	$0, 20($sp) #v

	li	$2, 6
$END9:
	sw	$2, 16($sp) #x

	sw	$0, 12($sp) #z

	li	$2, 10
$END10:
	sw	$2, 8($sp) #g

	li	$2, 3
$END11:
	lw	$3, 8($sp) #g

#df
	sw	$2,8($sp) #g

	lw	$3, 24($sp) #c

	sub	$2, $3, $2
#df
	sw	$2,24($sp) #c

	lw	$3, 28($sp) #b

	add	$2, $2, $3
#df
	sw	$2,28($sp) #b

	lw	$3, 32($sp) #a

#df
	sw	$2,32($sp) #a

	move	$2,$2
	move	$sp,$fp
	lw	$31,36($sp)
	lw	$fp,40($sp)
	addiu	$sp,$sp,44
	j	$31

	nop

	move	$sp,$fp
	lw	$31,36($sp)
	lw	$fp,40($sp)
	addiu	$sp,$sp,44
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

