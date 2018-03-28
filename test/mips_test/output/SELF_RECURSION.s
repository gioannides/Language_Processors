	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	SELF_RECURSION
	.set	nomips16
	.set	nomicromips
	.ent	SELF_RECURSION
	.type	SELF_RECURSION, @function
SELF_RECURSION:

$END3:
$IF2:
$ELSE2:
$END2:
 max_offset = 16
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-256
	sw $fp,252($sp)
	sw $31,248($sp)
	move $fp,$sp

	sw $4,256($sp)
	sw $5,260($sp)
	sw $6,264($sp)
	sw $7,268($sp)
	lw	$2, 256($sp) #x
	li	$3, 1
	sgt	$2, $2, $3
$END8:
	beq	$2,$0,$ELSE7
	nop
$IF7:
	sw $1, 244($sp)
	sw $2, 240($sp)
	sw $3, 236($sp)
	sw $4, 232($sp)
	sw $5, 228($sp)
	sw $6, 224($sp)
	sw $7, 220($sp)
	sw $8, 216($sp)
	sw $9, 212($sp)
	sw $10, 208($sp)
	sw $11, 204($sp)
	sw $12, 200($sp)
	sw $13, 196($sp)
	sw $14, 192($sp)
	sw $15, 188($sp)
	sw $16, 184($sp)
	sw $17, 180($sp)
	sw $18, 176($sp)
	sw $19, 172($sp)
	sw $20, 168($sp)
	sw $21, 164($sp)
	sw $22, 160($sp)
	sw $23, 156($sp)
	sw $24, 152($sp)
	swc1 $f1, 148($sp)
	swc1 $f2, 144($sp)
	swc1 $f3, 140($sp)
	swc1 $f4, 136($sp)
	swc1 $f5, 132($sp)
	swc1 $f6, 128($sp)
	swc1 $f7, 124($sp)
	swc1 $f8, 120($sp)
	swc1 $f9, 116($sp)
	swc1 $f10, 112($sp)
	swc1 $f11, 108($sp)
	swc1 $f12, 104($sp)
	swc1 $f13, 100($sp)
	swc1 $f14, 96($sp)
	swc1 $f15, 92($sp)
	swc1 $f16, 88($sp)
	swc1 $f17, 84($sp)
	swc1 $f18, 80($sp)
	swc1 $f19, 76($sp)
	swc1 $f20, 72($sp)
	swc1 $f21, 68($sp)
	swc1 $f22, 64($sp)
	swc1 $f23, 60($sp)
	swc1 $f24, 56($sp)
	swc1 $f25, 52($sp)
	swc1 $f26, 48($sp)
	swc1 $f27, 44($sp)
	swc1 $f28, 40($sp)
	swc1 $f29, 36($sp)
	swc1 $f30, 32($sp)
	lw	$2, 256($sp) #x
	li	$3, 1
	sub	$2, $2, $3
$END11:
# merge

	sw	$2, 0($sp) #x 0

	move	$4, $2 #load parameter 1
	.option pic
	la $25,SELF_RECURSION
	jalr $25
	nop
	move	$25, $2
	lw $1,244($sp)
	lw $2,240($sp)
	lw $3,236($sp)
	lw $4,232($sp)
	lw $5,228($sp)
	lw $6,224($sp)
	lw $7,220($sp)
	lw $8,216($sp)
	lw $9,212($sp)
	lw $10,208($sp)
	lw $11,204($sp)
	lw $12,200($sp)
	lw $13,196($sp)
	lw $14,192($sp)
	lw $15,188($sp)
	lw $16,184($sp)
	lw $17,180($sp)
	lw $18,176($sp)
	lw $19,172($sp)
	lw $20,168($sp)
	lw $21,164($sp)
	lw $22,160($sp)
	lw $23,156($sp)
	lw $24,152($sp)
	lwc1 $f1, 148($sp)
	lwc1 $f2, 144($sp)
	lwc1 $f3, 140($sp)
	lwc1 $f4, 136($sp)
	lwc1 $f5, 132($sp)
	lwc1 $f6, 128($sp)
	lwc1 $f7, 124($sp)
	lwc1 $f8, 120($sp)
	lwc1 $f9, 116($sp)
	lwc1 $f10, 112($sp)
	lwc1 $f11, 108($sp)
	lwc1 $f12, 104($sp)
	lwc1 $f13, 100($sp)
	lwc1 $f14, 96($sp)
	lwc1 $f15, 92($sp)
	lwc1 $f16, 88($sp)
	lwc1 $f17, 84($sp)
	lwc1 $f18, 80($sp)
	lwc1 $f19, 76($sp)
	lwc1 $f20, 72($sp)
	lwc1 $f21, 68($sp)
	lwc1 $f22, 64($sp)
	lwc1 $f23, 60($sp)
	lwc1 $f24, 56($sp)
	lwc1 $f25, 52($sp)
	lwc1 $f26, 48($sp)
	lwc1 $f27, 44($sp)
	lwc1 $f28, 40($sp)
	lwc1 $f29, 36($sp)
	lwc1 $f30, 32($sp)
	move $2, $25
$END10:
	move	$2,$2
	move	$sp,$fp
	lw	$31,248($sp)
	lw	$fp,252($sp)
	addiu	$sp,$sp,256
	j	$31

	nop

	b $END7
	nop
$ELSE7:
	lw	$2, 256($sp) #x
$END13:
	move	$2,$2
	move	$sp,$fp
	lw	$31,248($sp)
	lw	$fp,252($sp)
	addiu	$sp,$sp,256
	j	$31

	nop

$END7:
	move $sp,$fp
	lw $31,248($sp)
	lw $fp,252($sp)
	addiu $sp,$sp,256
	j $31

	nop
	.set macro
	.set reorder
	.end SELF_RECURSION
	.size SELF_RECURSION, .-SELF_RECURSION

