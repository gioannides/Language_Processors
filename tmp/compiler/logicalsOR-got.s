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
$END3:
$IF2:
$END5:
$ELSE2:
$END7:
$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-124
	sw	$fp,120($sp)
	sw	$31,116($sp)
	move	$fp,$sp

	li	$2, 1
$END9:
	sw	$2, 112($sp) #x

	lw	$2, 112($sp) #x
	lw	$4, 112($sp) #x

	addiu	$3, $4,1
#df
	sw	$3,112($sp) #x

	sne	$2,$0,$2
	sne	$3,$0,$3
	or	$2,$2,$3
	lw	$4, 112($sp) #x

	addiu	$3, $4,1
#df
	sw	$3,112($sp) #x

	sne	$2,$0,$2
	sne	$3,$0,$3
	or	$2,$2,$3
	lw	$4, 112($sp) #x

	addiu	$3, $4,1
#df
	sw	$3,112($sp) #x

	sne	$2,$0,$2
	sne	$3,$0,$3
	or	$2,$2,$3
	lw	$4, 112($sp) #x

	addiu	$3, $4,1
#df
	sw	$3,112($sp) #x

	sne	$2,$0,$2
	sne	$3,$0,$3
	or	$2,$2,$3
$END11:
	beq	$2,$0,$ELSE10
	nop
$IF10:
	lw	$2, 112($sp) #x
$END13:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

	b $END10
	nop
$ELSE10:
	li	$2, 3
$END15:
	move	$2,$2
	move	$sp,$fp
	lw	$31,116($sp)
	lw	$fp,120($sp)
	addiu	$sp,$sp,124
	j	$31

	nop

$END10:
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

