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
	sw $7,152($sp)# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 140($sp) #a# idb- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$3, 144($sp) #b
	add	$2, $2, $3# idc- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$3, 148($sp) #c
	add	$2, $2, $3
$END4:
	sw	$2,128($sp) #s
# ids- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 128($sp) #s
$END5:
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

