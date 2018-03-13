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

$END0:
$END1:
$END2:
$END3:
$END4:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-32
	sw	$fp,28($sp)
	sw	$31,24($sp)
	move	$fp,$sp

	sw	$0, 20($sp) #i

	sw	$0, 16($sp) #j

	sw	$0, 12($sp) #k

	sw	$0, 8($sp) #l

	li	$2, 1
$END5:
	lw	$3, 20($sp) #i

#df
	sw	$2,20($sp) #i

	li	$2, 2
$END6:
	lw	$3, 16($sp) #j

#df
	sw	$2,16($sp) #j

	li	$2, 3
$END7:
	lw	$3, 12($sp) #k

#df
	sw	$2,12($sp) #k

	li	$2, 57
$END8:
	lw	$3, 8($sp) #l

#df
	sw	$2,8($sp) #l

	lw	$2, 8($sp) #l
$END9:
	move	$2,$2
	move	$sp,$fp
	lw	$31,24($sp)
	lw	$fp,28($sp)
	addiu	$sp,$sp,32
	j	$31

	nop

	move	$sp,$fp
	lw	$31,24($sp)
	lw	$fp,28($sp)
	addiu	$sp,$sp,32
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

$END10:
$END11:
$END12:
$END13:
$END14:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-32
	sw	$fp,28($sp)
	sw	$31,24($sp)
	move	$fp,$sp

	sw	$0, 20($sp) #i

	sw	$0, 16($sp) #j

	sw	$0, 12($sp) #k

	sw	$0, 8($sp) #l

	li	$2, 1
$END15:
	lw	$3, 20($sp) #i

#df
	sw	$2,20($sp) #i

	li	$2, 2
$END16:
	lw	$3, 16($sp) #j

#df
	sw	$2,16($sp) #j

	li	$2, 3
$END17:
	lw	$3, 12($sp) #k

#df
	sw	$2,12($sp) #k

	li	$2, 57
$END18:
	lw	$3, 8($sp) #l

#df
	sw	$2,8($sp) #l

#VARIABLE : fNOT DECLARED!!!
	.option pic
	jal f
	nop
$END19:
	move	$2,$2
	move	$sp,$fp
	lw	$31,24($sp)
	lw	$fp,28($sp)
	addiu	$sp,$sp,32
	j	$31

	nop

	move	$sp,$fp
	lw	$31,24($sp)
	lw	$fp,28($sp)
	addiu	$sp,$sp,32
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

