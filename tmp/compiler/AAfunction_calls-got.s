	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls


	.text
	.align	2
	.globl	func
	.set	nomips16
	.set	nomicromips
	.ent	func
	.type	func, @function
func:
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-136
	sw $fp,132($sp)
	sw $31,128($sp)
	move $fp,$sp

	sw $4,136($sp)
	sw $5,140($sp)
	sw $6,144($sp)
	sw $7,148($sp)# idh1- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 172($sp) #h1
#VARIABLE : h1NOT DECLARED!!!
# idp1- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$3, 168($sp) #p1
#VARIABLE : p1NOT DECLARED!!!

	add	$2, $2, $3
$END3:
	move	$2,$2
	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop

	move $sp,$fp
	lw $31,128($sp)
	lw $fp,132($sp)
	addiu $sp,$sp,136
	j $31

	nop
	.set macro
	.set reorder
	.end func
	.size func, .-func



	.text
	.align	2
	.globl	gunv
	.set	nomips16
	.set	nomicromips
	.ent	gunv
	.type	gunv, @function
gunv:
	.set noreorder
	.set nomacro
	addiu $sp,$sp,-136
	sw $fp,132($sp)
	sw $31,128($sp)
	move $fp,$sp

	sw $4,136($sp)
	sw $5,140($sp)
	sw $6,144($sp)
	sw $7,148($sp)# idh- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 160($sp) #h
#VARIABLE : hNOT DECLARED!!!
# idp1- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$3, 168($sp) #p1
#VARIABLE : p1NOT DECLARED!!!

	add	$2, $2, $3
$END6:
	move	$2,$2
	move	$sp,$fp
	lw	$31,128($sp)
	lw	$fp,132($sp)
	addiu	$sp,$sp,136
	j	$31

	nop

	move $sp,$fp
	lw $31,128($sp)
	lw $fp,132($sp)
	addiu $sp,$sp,136
	j $31

	nop
	.set macro
	.set reorder
	.end gunv
	.size gunv, .-gunv



	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END8:
$END9:
$END10:
$END11:
$END12:# idgunv- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0
# idyu- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END14:# idy- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END15:# idz- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END16:# ida- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END17:# idf- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END18:# ida- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END19:# idx- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END20:# idx- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END21:# idx- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END22:# idf- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END23:
$END13:# idfunc- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0
# idyu- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END25:# idy- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END26:# idz- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END27:# ida- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END28:# idf- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END29:# ida- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END30:# idx- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END31:# idx- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END32:# idx- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END33:# idf- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END34:
$END24:# idgunv- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0
# idyu- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END36:# idy- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END37:# idz- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END38:# ida- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END39:# idf- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END40:# ida- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END41:# idx- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END42:# idx- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END43:# idx- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END44:# idf- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END45:
$END35:# idgunv- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0
# idyu- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END47:# idy- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END48:# idz- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END49:# ida- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END50:# idf- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END51:# ida- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END52:# idx- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END53:# idx- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END54:# idx- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END55:# idf- f_call1- reading1- function1- SizeOf:0- lhs_of_assignment:0

$END56:
$END46:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-184
	sw $fp,180($sp)
	sw $31,176($sp)
	move $fp,$sp

	sw $4,184($sp)
	sw $5,188($sp)
	sw $6,192($sp)
	sw $7,196($sp)
	li	$2, 1
$END58:
	sw	$2,172($sp) #x

	li	$2, 2
$END59:
	sw	$2,168($sp) #y

	li	$2, 3
$END60:
	sw	$2,164($sp) #z

	li	$2, 4
$END61:
	sw	$2,160($sp) #a

	li	$2, 5
$END62:
	sw	$2,156($sp) #f

	sb	$0, 152($sp) #yu

	sw $1,148($sp)
	sw $2,144($sp)
	sw $3,140($sp)
	sw $4,136($sp)
	sw $5,132($sp)
	sw $6,128($sp)
	sw $7,124($sp)
	sw $8,120($sp)
	sw $9,116($sp)
	sw $10,112($sp)
	sw $11,108($sp)
	sw $12,104($sp)
	sw $13,100($sp)
	sw $14,96($sp)
	sw $15,92($sp)
	sw $16,88($sp)
	sw $17,84($sp)
	sw $18,80($sp)
	sw $19,76($sp)
	sw $20,72($sp)
	sw $21,68($sp)
	sw $22,64($sp)
	sw $23,60($sp)
	sw $24,56($sp)# idgunv- f_call1- reading0- function1- SizeOf:0- lhs_of_assignment:0
# idyu- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lb	$2, 152($sp) #yu
#VARIABLE : yuNOT DECLARED!!!

$END64:
	sb	$2, 0($sp) #r 0
	move	$4, $2 #load parameter 1# idy- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 168($sp) #y
#VARIABLE : yNOT DECLARED!!!

$END65:
	sw	$2, 4($sp) #t 4

	move	$5, $2 #load parameter 2# idz- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 164($sp) #z
#VARIABLE : zNOT DECLARED!!!

$END66:
	sw	$2, 8($sp) #w 8

	move	$6, $2 #load parameter 3# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 160($sp) #a
#VARIABLE : aNOT DECLARED!!!

$END67:
	sw	$2, 12($sp) #j 12

	move	$7, $2 #load parameter 4# idf- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 156($sp) #f
#VARIABLE : fNOT DECLARED!!!

$END68:
	sw	$2, 16($sp) #o 16
# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 160($sp) #a
#VARIABLE : aNOT DECLARED!!!

$END69:
	sw	$2, 20($sp) #p 20
# idx- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 172($sp) #x
#VARIABLE : xNOT DECLARED!!!

$END70:
	sw	$2, 24($sp) #h 24
# idx- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 172($sp) #x
#VARIABLE : xNOT DECLARED!!!

$END71:
	sw	$2, 28($sp) #o1 28
# idx- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 172($sp) #x
#VARIABLE : xNOT DECLARED!!!

$END72:
	sw	$2, 32($sp) #p1 32
# idf- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 156($sp) #f
#VARIABLE : fNOT DECLARED!!!

$END73:
	sw	$2, 36($sp) #h1 36

	.option pic
	la $25,gunv
	jalr $25
	nop
	move	$25, $2
	lw $1,148($sp)
	lw $2,144($sp)
	lw $3,140($sp)
	lw $4,136($sp)
	lw $5,132($sp)
	lw $6,128($sp)
	lw $7,124($sp)
	lw $8,120($sp)
	lw $9,116($sp)
	lw $10,112($sp)
	lw $11,108($sp)
	lw $12,104($sp)
	lw $13,100($sp)
	lw $14,96($sp)
	lw $15,92($sp)
	lw $16,88($sp)
	lw $17,84($sp)
	lw $18,80($sp)
	lw $19,76($sp)
	lw $20,72($sp)
	lw $21,68($sp)
	lw $22,64($sp)
	lw $23,60($sp)
	lw $24,56($sp)
	move $2, $25
$END63:
	sw $1,148($sp)
	sw $2,144($sp)
	sw $3,140($sp)
	sw $4,136($sp)
	sw $5,132($sp)
	sw $6,128($sp)
	sw $7,124($sp)
	sw $8,120($sp)
	sw $9,116($sp)
	sw $10,112($sp)
	sw $11,108($sp)
	sw $12,104($sp)
	sw $13,100($sp)
	sw $14,96($sp)
	sw $15,92($sp)
	sw $16,88($sp)
	sw $17,84($sp)
	sw $18,80($sp)
	sw $19,76($sp)
	sw $20,72($sp)
	sw $21,68($sp)
	sw $22,64($sp)
	sw $23,60($sp)
	sw $24,56($sp)# idfunc- f_call1- reading0- function1- SizeOf:0- lhs_of_assignment:0
# idyu- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lb	$2, 152($sp) #yu
#VARIABLE : yuNOT DECLARED!!!

$END75:
	sb	$2, 0($sp) #r 0
	move	$4, $2 #load parameter 1# idy- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 168($sp) #y
#VARIABLE : yNOT DECLARED!!!

$END76:
	sw	$2, 4($sp) #t 4

	move	$5, $2 #load parameter 2# idz- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 164($sp) #z
#VARIABLE : zNOT DECLARED!!!

$END77:
	sw	$2, 8($sp) #w 8

	move	$6, $2 #load parameter 3# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 160($sp) #a
#VARIABLE : aNOT DECLARED!!!

$END78:
	sw	$2, 12($sp) #j 12

	move	$7, $2 #load parameter 4# idf- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 156($sp) #f
#VARIABLE : fNOT DECLARED!!!

$END79:
	sw	$2, 16($sp) #o 16
# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 160($sp) #a
#VARIABLE : aNOT DECLARED!!!

$END80:
	sw	$2, 20($sp) #p 20
# idx- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 172($sp) #x
#VARIABLE : xNOT DECLARED!!!

$END81:
	sw	$2, 24($sp) #h 24
# idx- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 172($sp) #x
#VARIABLE : xNOT DECLARED!!!

$END82:
	sw	$2, 28($sp) #o1 28
# idx- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 172($sp) #x
#VARIABLE : xNOT DECLARED!!!

$END83:
	sw	$2, 32($sp) #p1 32
# idf- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 156($sp) #f
#VARIABLE : fNOT DECLARED!!!

$END84:
	sw	$2, 36($sp) #h1 36

	.option pic
	la $25,func
	jalr $25
	nop
	move	$25, $2
	lw $1,148($sp)
	lw $2,144($sp)
	lw $3,140($sp)
	lw $4,136($sp)
	lw $5,132($sp)
	lw $6,128($sp)
	lw $7,124($sp)
	lw $8,120($sp)
	lw $9,116($sp)
	lw $10,112($sp)
	lw $11,108($sp)
	lw $12,104($sp)
	lw $13,100($sp)
	lw $14,96($sp)
	lw $15,92($sp)
	lw $16,88($sp)
	lw $17,84($sp)
	lw $18,80($sp)
	lw $19,76($sp)
	lw $20,72($sp)
	lw $21,68($sp)
	lw $22,64($sp)
	lw $23,60($sp)
	lw $24,56($sp)
	move $2, $25
$END74:
	sw $1,148($sp)
	sw $2,144($sp)
	sw $3,140($sp)
	sw $4,136($sp)
	sw $5,132($sp)
	sw $6,128($sp)
	sw $7,124($sp)
	sw $8,120($sp)
	sw $9,116($sp)
	sw $10,112($sp)
	sw $11,108($sp)
	sw $12,104($sp)
	sw $13,100($sp)
	sw $14,96($sp)
	sw $15,92($sp)
	sw $16,88($sp)
	sw $17,84($sp)
	sw $18,80($sp)
	sw $19,76($sp)
	sw $20,72($sp)
	sw $21,68($sp)
	sw $22,64($sp)
	sw $23,60($sp)
	sw $24,56($sp)# idgunv- f_call1- reading0- function1- SizeOf:0- lhs_of_assignment:0
# idyu- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lb	$2, 152($sp) #yu
#VARIABLE : yuNOT DECLARED!!!

$END86:
	sb	$2, 0($sp) #r 0
	move	$4, $2 #load parameter 1# idy- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 168($sp) #y
#VARIABLE : yNOT DECLARED!!!

$END87:
	sw	$2, 4($sp) #t 4

	move	$5, $2 #load parameter 2# idz- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 164($sp) #z
#VARIABLE : zNOT DECLARED!!!

$END88:
	sw	$2, 8($sp) #w 8

	move	$6, $2 #load parameter 3# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 160($sp) #a
#VARIABLE : aNOT DECLARED!!!

$END89:
	sw	$2, 12($sp) #j 12

	move	$7, $2 #load parameter 4# idf- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 156($sp) #f
#VARIABLE : fNOT DECLARED!!!

$END90:
	sw	$2, 16($sp) #o 16
# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 160($sp) #a
#VARIABLE : aNOT DECLARED!!!

$END91:
	sw	$2, 20($sp) #p 20
# idx- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 172($sp) #x
#VARIABLE : xNOT DECLARED!!!

$END92:
	sw	$2, 24($sp) #h 24
# idx- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 172($sp) #x
#VARIABLE : xNOT DECLARED!!!

$END93:
	sw	$2, 28($sp) #o1 28
# idx- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 172($sp) #x
#VARIABLE : xNOT DECLARED!!!

$END94:
	sw	$2, 32($sp) #p1 32
# idf- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 156($sp) #f
#VARIABLE : fNOT DECLARED!!!

$END95:
	sw	$2, 36($sp) #h1 36

	.option pic
	la $25,gunv
	jalr $25
	nop
	move	$25, $2
	lw $1,148($sp)
	lw $2,144($sp)
	lw $3,140($sp)
	lw $4,136($sp)
	lw $5,132($sp)
	lw $6,128($sp)
	lw $7,124($sp)
	lw $8,120($sp)
	lw $9,116($sp)
	lw $10,112($sp)
	lw $11,108($sp)
	lw $12,104($sp)
	lw $13,100($sp)
	lw $14,96($sp)
	lw $15,92($sp)
	lw $16,88($sp)
	lw $17,84($sp)
	lw $18,80($sp)
	lw $19,76($sp)
	lw $20,72($sp)
	lw $21,68($sp)
	lw $22,64($sp)
	lw $23,60($sp)
	lw $24,56($sp)
	move $2, $25
$END85:
	sw $1,148($sp)
	sw $2,144($sp)
	sw $3,140($sp)
	sw $4,136($sp)
	sw $5,132($sp)
	sw $6,128($sp)
	sw $7,124($sp)
	sw $8,120($sp)
	sw $9,116($sp)
	sw $10,112($sp)
	sw $11,108($sp)
	sw $12,104($sp)
	sw $13,100($sp)
	sw $14,96($sp)
	sw $15,92($sp)
	sw $16,88($sp)
	sw $17,84($sp)
	sw $18,80($sp)
	sw $19,76($sp)
	sw $20,72($sp)
	sw $21,68($sp)
	sw $22,64($sp)
	sw $23,60($sp)
	sw $24,56($sp)# idgunv- f_call1- reading0- function1- SizeOf:0- lhs_of_assignment:0
# idyu- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lb	$2, 152($sp) #yu
#VARIABLE : yuNOT DECLARED!!!

$END97:
	sb	$2, 0($sp) #r 0
	move	$4, $2 #load parameter 1# idy- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 168($sp) #y
#VARIABLE : yNOT DECLARED!!!

$END98:
	sw	$2, 4($sp) #t 4

	move	$5, $2 #load parameter 2# idz- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 164($sp) #z
#VARIABLE : zNOT DECLARED!!!

$END99:
	sw	$2, 8($sp) #w 8

	move	$6, $2 #load parameter 3# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 160($sp) #a
#VARIABLE : aNOT DECLARED!!!

$END100:
	sw	$2, 12($sp) #j 12

	move	$7, $2 #load parameter 4# idf- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 156($sp) #f
#VARIABLE : fNOT DECLARED!!!

$END101:
	sw	$2, 16($sp) #o 16
# ida- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 160($sp) #a
#VARIABLE : aNOT DECLARED!!!

$END102:
	sw	$2, 20($sp) #p 20
# idx- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 172($sp) #x
#VARIABLE : xNOT DECLARED!!!

$END103:
	sw	$2, 24($sp) #h 24
# idx- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 172($sp) #x
#VARIABLE : xNOT DECLARED!!!

$END104:
	sw	$2, 28($sp) #o1 28
# idx- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 172($sp) #x
#VARIABLE : xNOT DECLARED!!!

$END105:
	sw	$2, 32($sp) #p1 32
# idf- f_call0- reading0- function1- SizeOf:0- lhs_of_assignment:0

	lw	$2, 156($sp) #f
#VARIABLE : fNOT DECLARED!!!

$END106:
	sw	$2, 36($sp) #h1 36

	.option pic
	la $25,gunv
	jalr $25
	nop
	move	$25, $2
	lw $1,148($sp)
	lw $2,144($sp)
	lw $3,140($sp)
	lw $4,136($sp)
	lw $5,132($sp)
	lw $6,128($sp)
	lw $7,124($sp)
	lw $8,120($sp)
	lw $9,116($sp)
	lw $10,112($sp)
	lw $11,108($sp)
	lw $12,104($sp)
	lw $13,100($sp)
	lw $14,96($sp)
	lw $15,92($sp)
	lw $16,88($sp)
	lw $17,84($sp)
	lw $18,80($sp)
	lw $19,76($sp)
	lw $20,72($sp)
	lw $21,68($sp)
	lw $22,64($sp)
	lw $23,60($sp)
	lw $24,56($sp)
	move $2, $25
$END96:
	move $sp,$fp
	lw $31,176($sp)
	lw $fp,180($sp)
	addiu $sp,$sp,184
	j $31

	nop
	.set macro
	.set reorder
	.end main
	.size main, .-main



	.text
	.align	2
	.globl	functd
	.set	nomips16
	.set	nomicromips
	.ent	functd
	.type	functd, @function
functd:
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
	sw	$0, 128($sp) #d

	move $sp,$fp
	lw $31,132($sp)
	lw $fp,136($sp)
	addiu $sp,$sp,140
	j $31

	nop
	.set macro
	.set reorder
	.end functd
	.size functd, .-functd

