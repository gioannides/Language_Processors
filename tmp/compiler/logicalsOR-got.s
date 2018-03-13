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

$END0:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-20
	sw	$fp,16($sp)
	sw	$31,12($sp)
	move	$fp,$sp

	li	$2, 1
$END1:
	sw	$2, 8($sp) #x

	lw	$2, 8($sp) #x
	lw	$4, 8($sp) #x

	addiu	$3, $4,1
#df
	sw	$3,8($sp) #x

	sne	$2,$0,$2
	sne	$3,$0,$3
	or	$2,$2,$3
	lw	$4, 8($sp) #x

	addiu	$3, $4,1
#df
	sw	$3,8($sp) #x

	sne	$2,$0,$2
	sne	$3,$0,$3
	or	$2,$2,$3
	lw	$4, 8($sp) #x

	addiu	$3, $4,1
#df
	sw	$3,8($sp) #x

	sne	$2,$0,$2
	sne	$3,$0,$3
	or	$2,$2,$3
	lw	$4, 8($sp) #x

	addiu	$3, $4,1
#df
	sw	$3,8($sp) #x

	sne	$2,$0,$2
	sne	$3,$0,$3
	or	$2,$2,$3
$END3:
	beq	$2,$0,$ELSE2
	nop
$IF2:
	lw	$2, 8($sp) #x
$END4:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

	b $END2
	nop
$ELSE2:
	li	$2, 3
$END5:
	move	$2,$2
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop

$END2:
	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main

