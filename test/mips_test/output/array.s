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

$END2:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-140
	sw $fp,136($sp)
	sw $31,132($sp)
	move $fp,$sp

	sw $4,140($sp)
	sw $5,144($sp)
	sw $6,148($sp)
	sw $7,152($sp)
	li	$2, 0
$END4:
	sw	$2,128($sp) #i
# idi- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 128($sp) #i
$END6:
$FOR5:# idi- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 128($sp) #i
	li	$3, 9
	slt	$2, $2, $3
$END7:
$BEGIN25:	beq	$2,$0,$END5
	nop
	sw $25, 136($sp)
	move $25, $0
	li	$3, 0
$END11:
	move $25, $3# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

#VARIABLE : aNOT DECLARED!!!

	lw $25, 136($sp)
	li	$3, 1
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END10:
	beq	$2,$0,$END9
	nop
$IF9:
	li	$2, 1
$END13:
	sw $25, 136($sp)
	move $25, $0
	li	$3, 0
$END14:
	move $25, $3# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:1

#VARIABLE : aNOT DECLARED!!!

	lw $25, 136($sp)
$END9:
	sw $25, 136($sp)
	move $25, $0
	li	$3, 1
$END17:
	move $25, $3# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

#VARIABLE : aNOT DECLARED!!!

	lw $25, 136($sp)
	li	$3, 1
	xor	$2, $2, $3
	sltu	$2, $0, $2
$END16:
	beq	$2,$0,$END15
	nop
$IF15:
	li	$2, 1
$END19:
	sw $25, 136($sp)
	move $25, $0
	li	$3, 1
$END20:
	move $25, $3# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:1

#VARIABLE : aNOT DECLARED!!!

	lw $25, 136($sp)
$END15:# idi- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 128($sp) #i
	li	$3, 1
	sgt	$2, $2, $3
$END22:
	beq	$2,$0,$END21
	nop
$IF21:
	sw $25, 136($sp)
	move $25, $0# idi- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	li $24, 4
	mul $25, $24
	lw	$3, 128($sp) #i
	li	$4, 1
	sub	$3, $3, $4
$END25:
	move $25, $3# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

#VARIABLE : aNOT DECLARED!!!

	lw $25, 136($sp)
	sw $25, 136($sp)
	move $25, $0# idi- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	li $24, 4
	mul $25, $24
	lw	$4, 128($sp) #i
	li	$5, 2
	sub	$4, $4, $5
$END26:
	move $25, $4# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

#VARIABLE : aNOT DECLARED!!!

	lw $25, 136($sp)
	add	$2, $2, $3
$END24:
	sw $25, 136($sp)
	move $25, $0# idi- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	li $24, 4
	mul $25, $24
	lw	$3, 128($sp) #i
$END27:
	move $25, $3# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:1

#VARIABLE : aNOT DECLARED!!!

	lw $25, 136($sp)
$END21:
	sw $25, 136($sp)
	move $25, $0# idi- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	li $24, 4
	mul $25, $24
	lw	$3, 128($sp) #i
$END29:
	move $25, $3# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

#VARIABLE : aNOT DECLARED!!!

	lw $25, 136($sp)
$END28:# idb- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:1

#VARIABLE : bNOT DECLARED!!!
# idi- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 128($sp) #i
	addi	$3, $2, 1 #++
	sw	$3,128($sp) #i

$END30:
	b $FOR5
	nop
$END5:# idb- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

#VARIABLE : bNOT DECLARED!!!

	sw $25, 136($sp)
	move $25, $0
	sw $25, 136($sp)
	move $25, $0
	li	$5, 2
$END33:
	move $25, $5# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

#VARIABLE : aNOT DECLARED!!!

	lw $25, 136($sp)
$END32:
	move $25, $4# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

#VARIABLE : aNOT DECLARED!!!

	lw $25, 136($sp)
	add	$2, $2, $3
$END31:
	move	$2,$2
	move	$sp,$fp
	lw	$31,132($sp)
	lw	$fp,136($sp)
	addiu	$sp,$sp,140
	j	$31

	nop

	move $sp,$fp
	lw $31,132($sp)
	lw $fp,136($sp)
	addiu $sp,$sp,140
	j $31

	nop
	.set macro
	.set reorder
	.end operations
	.size operations, .-operations

