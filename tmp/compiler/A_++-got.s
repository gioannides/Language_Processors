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
$END7:
$END8:
$END9:
$END10:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-124
	sw	$fp,120($sp)
	sw	$31,116($sp)
	move	$fp,$sp

	li	$2, 1
$END12:
	sw	$2, 112($sp) #a

	lw	$3, 112($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,112($sp) #a

$END13:
	lw	$3, 112($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,112($sp) #a

$END14:
	lw	$3, 112($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,112($sp) #a

$END15:
	lw	$3, 112($sp) #a

	addiu	$2, $3,-1
#df
	sw	$2,112($sp) #a

$END16:
	lw	$3, 112($sp) #a

	addiu	$2, $3,-1
#df
	sw	$2,112($sp) #a

$END17:
	lw	$3, 112($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,112($sp) #a

$END18:
	lw	$3, 112($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,112($sp) #a

$END19:
	lw	$3, 112($sp) #a

	addiu	$2, $3,1
#df
	sw	$2,112($sp) #a

$END20:
	lw	$2, 112($sp) #a
$END21:
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

