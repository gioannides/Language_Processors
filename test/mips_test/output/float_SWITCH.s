	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	operations
	.set	nomips16
	.set	nomicromips
	.ent	operations
	.type	operations, @function
operations:

$END2:
$END3:
$END5:
	b	$END4
	nop
$END4:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-188
	sw $fp,184($sp)
	sw $31,180($sp)
	move $fp,$sp

	swc1	$f12,188($sp)
	swc1 $f14, 192($sp)
	sw $6,196($sp)
	sw $7,200($sp)
	li.s	$f2, 0
$END9:
	swc1	$f2,176($sp) #result

	li	$2, 20
$END10:
	sw	$2,172($sp) #i

	lw	$2, 172($sp) #i
$END12:
	li	$3, 1
$END15:
	beq	$2,$3,$CASE14
	nop
	li	$3, 2
$END17:
	beq	$2,$3,$CASE16
	nop
	li	$3, 3
$END19:
	beq	$2,$3,$CASE18
	nop
	b	$DEFAULT20
	nop
	b	$END11
	nop
$CASE14:
	lwc1	$f3, 192($sp) #b
	nop	
$END22:
	mtc1	$2,$f2
	nop

	cvt.s.w	$f2,$f2
	nop

	lwc1	$f4, 176($sp) #result
	nop	
	swc1	$f3,176($sp) #result

	b	$END11
	nop
$CASE16:
	lwc1	$f3, 188($sp) #a
	nop	
$END23:
	mtc1	$2,$f2
	nop

	cvt.s.w	$f2,$f2
	nop

	lwc1	$f4, 176($sp) #result
	nop	
	swc1	$f3,176($sp) #result

	b	$END11
	nop
$CASE18:
	lwc1	$f3, 188($sp) #a
	nop	
	lwc1	$f4, 192($sp) #b
	nop	
	add.s	$f3,$f3,$f4
$END24:
	mtc1	$2,$f2
	nop

	cvt.s.w	$f2,$f2
	nop

	lwc1	$f4, 176($sp) #result
	nop	
	swc1	$f3,176($sp) #result

	b	$END11
	nop
$DEFAULT20:
	li.s	$f3, 4.56
$END25:
	mtc1	$2,$f2
	nop

	cvt.s.w	$f2,$f2
	nop

	lwc1	$f4, 176($sp) #result
	nop	
	swc1	$f3,176($sp) #result

	b	$END11
	nop
$END11:
	lwc1	$f2, 176($sp) #result
	nop	
$END26:
	mov.s	$f0,$f2
	move	$sp,$fp
	lw	$31,180($sp)
	lw	$fp,184($sp)
	addiu	$sp,$sp,188
	j	$31

	nop

	move $sp,$fp
	lw $31,180($sp)
	lw $fp,184($sp)
	addiu $sp,$sp,188
	j $31

	nop
	.set macro
	.set reorder
	.end operations
	.size operations, .-operations

