	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	EQUAL
	.set	nomips16
	.set	nomicromips
	.ent	EQUAL
	.type	EQUAL, @function
EQUAL:
# idb- f_call0- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END2:# idx- f_call0- reading1- function1- SizeOf:0- lhs_of_assignment:1
# ida- f_call0- reading1- function1- SizeOf:0- lhs_of_assignment:1
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-140
	sw $fp,136($sp)
	sw $31,132($sp)
	move $fp,$sp

	swc1	$f12,140($sp)
	swc1 $f14, 144($sp)
	sw $6,148($sp)
	sw $7,152($sp)# idb- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lwc1	$f2, 144($sp) #b
	nop	
$END4:# idx- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:1

	lw	$3, 148($sp) #x
	add.s	$f2,$f2,$f3
.set macro

	trunc.w.s	$f2,$f2,$2
.set nomacro

	mfc1	$2,$f2
	sw	$2,148($sp) #x
# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:1

	lwc1	$f3, 140($sp) #a
	nop	
	add.s	$f2,$f2,$f3
	swc1	$f2,140($sp) #a

	swc1	$f2,128($sp) #s
# ids- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lwc1	$f2, 128($sp) #s
	nop	
$END5:
	mov.s	$f0,$f2
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
	.end EQUAL
	.size EQUAL, .-EQUAL

