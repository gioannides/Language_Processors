	.file 1 "t.c"
	.section .mdebug.abi32
	.previous
	.nan legacy
	.module fp=32
	.module nooddspreg
	.abicalls

#FunctDef

#new function
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
	sw $7,148($sp)
	lw	$2, 172($sp) #h1
	lw	$3, 168($sp) #p1
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


#FunctDef

#new function
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
	sw $7,148($sp)
	lw	$2, 160($sp) #h
	lw	$3, 168($sp) #p1
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


#FunctDef

#new function
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
$END12:
$END14:
	sw $2, 0($sp) #argument no: 1
$END15:
	sw $2, 4($sp) #argument no: 2
$END16:
	sw $2, 8($sp) #argument no: 3
$END17:
	sw $2, 12($sp) #argument no: 4
$END18:
	sw $2, 16($sp) #argument no: 5
$END19:
	sw $2, 20($sp) #argument no: 6
$END20:
	sw $2, 24($sp) #argument no: 7
$END21:
	sw $2, 28($sp) #argument no: 8
$END22:
	sw $2, 32($sp) #argument no: 9
$END23:
	sw $2, 36($sp) #argument no: 10
$END13:
$END25:
	sw $2, 0($sp) #argument no: 1
$END26:
	sw $2, 4($sp) #argument no: 2
$END27:
	sw $2, 8($sp) #argument no: 3
$END28:
	sw $2, 12($sp) #argument no: 4
$END29:
	sw $2, 16($sp) #argument no: 5
$END30:
	sw $2, 20($sp) #argument no: 6
$END31:
	sw $2, 24($sp) #argument no: 7
$END32:
	sw $2, 28($sp) #argument no: 8
$END33:
	sw $2, 32($sp) #argument no: 9
$END34:
	sw $2, 36($sp) #argument no: 10
$END24:
$END36:
	sw $2, 0($sp) #argument no: 1
$END37:
	sw $2, 4($sp) #argument no: 2
$END38:
	sw $2, 8($sp) #argument no: 3
$END39:
	sw $2, 12($sp) #argument no: 4
$END40:
	sw $2, 16($sp) #argument no: 5
$END41:
	sw $2, 20($sp) #argument no: 6
$END42:
	sw $2, 24($sp) #argument no: 7
$END43:
	sw $2, 28($sp) #argument no: 8
$END44:
	sw $2, 32($sp) #argument no: 9
$END45:
	sw $2, 36($sp) #argument no: 10
$END35:
$END47:
	sw $2, 0($sp) #argument no: 1
$END48:
	sw $2, 4($sp) #argument no: 2
$END49:
	sw $2, 8($sp) #argument no: 3
$END50:
	sw $2, 12($sp) #argument no: 4
$END51:
	sw $2, 16($sp) #argument no: 5
$END52:
	sw $2, 20($sp) #argument no: 6
$END53:
	sw $2, 24($sp) #argument no: 7
$END54:
	sw $2, 28($sp) #argument no: 8
$END55:
	sw $2, 32($sp) #argument no: 9
$END56:
	sw $2, 36($sp) #argument no: 10
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
	sw $24,56($sp)
	lb	$2, 152($sp) #yu
$END64:
	sb	$2, 0($sp) #r
	move	$4, $2 #load parameter 1
	lw	$2, 168($sp) #y
$END65:
	sw	$2, 4($sp) #t

	move	$5, $2 #load parameter 2
	lw	$2, 164($sp) #z
$END66:
	sw	$2, 8($sp) #w

	move	$6, $2 #load parameter 3
	lw	$2, 160($sp) #a
$END67:
	sw	$2, 12($sp) #j

	move	$7, $2 #load parameter 4
	lw	$2, 156($sp) #f
$END68:
	sw	$2, 16($sp) #o

	lw	$2, 160($sp) #a
$END69:
	sw	$2, 20($sp) #p

	lw	$2, 172($sp) #x
$END70:
	sw	$2, 24($sp) #h

	lw	$2, 172($sp) #x
$END71:
	sw	$2, 28($sp) #o1

	lw	$2, 172($sp) #x
$END72:
	sw	$2, 32($sp) #p1

	lw	$2, 156($sp) #f
$END73:
	sw	$2, 36($sp) #h1

	.option pic
	jal gunv
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
	sw $24,56($sp)
	lb	$2, 152($sp) #yu
$END75:
	sb	$2, 0($sp) #r
	move	$4, $2 #load parameter 1
	lw	$2, 168($sp) #y
$END76:
	sw	$2, 4($sp) #t

	move	$5, $2 #load parameter 2
	lw	$2, 164($sp) #z
$END77:
	sw	$2, 8($sp) #w

	move	$6, $2 #load parameter 3
	lw	$2, 160($sp) #a
$END78:
	sw	$2, 12($sp) #j

	move	$7, $2 #load parameter 4
	lw	$2, 156($sp) #f
$END79:
	sw	$2, 16($sp) #o

	lw	$2, 160($sp) #a
$END80:
	sw	$2, 20($sp) #p

	lw	$2, 172($sp) #x
$END81:
	sw	$2, 24($sp) #h

	lw	$2, 172($sp) #x
$END82:
	sw	$2, 28($sp) #o1

	lw	$2, 172($sp) #x
$END83:
	sw	$2, 32($sp) #p1

	lw	$2, 156($sp) #f
$END84:
	sw	$2, 36($sp) #h1

	.option pic
	jal func
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
	sw $24,56($sp)
	lb	$2, 152($sp) #yu
$END86:
	sb	$2, 0($sp) #r
	move	$4, $2 #load parameter 1
	lw	$2, 168($sp) #y
$END87:
	sw	$2, 4($sp) #t

	move	$5, $2 #load parameter 2
	lw	$2, 164($sp) #z
$END88:
	sw	$2, 8($sp) #w

	move	$6, $2 #load parameter 3
	lw	$2, 160($sp) #a
$END89:
	sw	$2, 12($sp) #j

	move	$7, $2 #load parameter 4
	lw	$2, 156($sp) #f
$END90:
	sw	$2, 16($sp) #o

	lw	$2, 160($sp) #a
$END91:
	sw	$2, 20($sp) #p

	lw	$2, 172($sp) #x
$END92:
	sw	$2, 24($sp) #h

	lw	$2, 172($sp) #x
$END93:
	sw	$2, 28($sp) #o1

	lw	$2, 172($sp) #x
$END94:
	sw	$2, 32($sp) #p1

	lw	$2, 156($sp) #f
$END95:
	sw	$2, 36($sp) #h1

	.option pic
	jal gunv
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
	sw $24,56($sp)
	lb	$2, 152($sp) #yu
$END97:
	sb	$2, 0($sp) #r
	move	$4, $2 #load parameter 1
	lw	$2, 168($sp) #y
$END98:
	sw	$2, 4($sp) #t

	move	$5, $2 #load parameter 2
	lw	$2, 164($sp) #z
$END99:
	sw	$2, 8($sp) #w

	move	$6, $2 #load parameter 3
	lw	$2, 160($sp) #a
$END100:
	sw	$2, 12($sp) #j

	move	$7, $2 #load parameter 4
	lw	$2, 156($sp) #f
$END101:
	sw	$2, 16($sp) #o

	lw	$2, 160($sp) #a
$END102:
	sw	$2, 20($sp) #p

	lw	$2, 172($sp) #x
$END103:
	sw	$2, 24($sp) #h

	lw	$2, 172($sp) #x
$END104:
	sw	$2, 28($sp) #o1

	lw	$2, 172($sp) #x
$END105:
	sw	$2, 32($sp) #p1

	lw	$2, 156($sp) #f
$END106:
	sw	$2, 36($sp) #h1

	.option pic
	jal gunv
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


#FunctDef

#new function
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

