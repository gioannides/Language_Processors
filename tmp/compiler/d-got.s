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

$END2:
$END3:# ida- f_call0- reading1- function1- SizeOf:0- lhs_of_assignment:1
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-140
	sw $fp,136($sp)
	sw $31,132($sp)
	move $fp,$sp

	sw $4,140($sp)
	sw $5,144($sp)
	sw $6,148($sp)
	sw $7,152($sp)
	li	$2, 3
	li	$3, 5
	mult	$2, $3
	mflo	$2
$END5:
	sw	$2,128($sp) #a

	li	$2, 9
$END7:# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:1

	lw	$3, 128($sp) #a
	sw	$2,128($sp) #a

#VARIABLE : aNOT DECLARED!!!

	li	$3, 8
	add	$2, $2, $3
$END6:# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:1

	lw	$3, 128($sp) #a
	sw	$2,128($sp) #a

#VARIABLE : aNOT DECLARED!!!
# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 128($sp) #a
#VARIABLE : aNOT DECLARED!!!

$END8:
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
	.end main
	.size main, .-main

