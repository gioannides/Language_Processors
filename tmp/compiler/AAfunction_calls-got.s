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
	addiu $sp,$sp,-120
	sw $fp,116($sp)
	sw $31,112($sp)
	move $fp,$sp

	lw	$2, 160($sp) #h1
	lw	$3, 156($sp) #p1
	add	$2, $2, $3
$END2:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

	move $sp,$fp
	lw $31,112($sp)
	lw $fp,116($sp)
	addiu $sp,$sp,120
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
	addiu $sp,$sp,-120
	sw $fp,116($sp)
	sw $31,112($sp)
	move $fp,$sp

	lw	$2, 148($sp) #h
	lw	$3, 156($sp) #p1
	add	$2, $2, $3
$END5:
	move	$2,$2
	move	$sp,$fp
	lw	$31,112($sp)
	lw	$fp,116($sp)
	addiu	$sp,$sp,120
	j	$31

	nop

	move $sp,$fp
	lw $31,112($sp)
	lw $fp,116($sp)
	addiu $sp,$sp,120
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

$END7:
$END8:
$END9:
$END10:
$END11:
$END13:
$END14:
$END15:
$END16:
$END17:
$END18:
$END19:
$END20:
$END21:
$END22:
$END12:
$END24:
$END25:
$END26:
$END27:
$END28:
$END29:
$END30:
$END31:
$END32:
$END33:
$END23:
$END35:
$END36:
$END37:
$END38:
$END39:
$END40:
$END41:
$END42:
$END43:
$END44:
$END34:
$END46:
$END47:
$END48:
$END49:
$END50:
$END51:
$END52:
$END53:
$END54:
$END55:
$END45:	.set noreorder
	.set nomacro
	addiu $sp,$sp,-184
	sw $fp,180($sp)
	sw $31,176($sp)
	move $fp,$sp

	li	$2, 1
$END57:
	sw	$2,172($sp) #x

	li	$2, 2
$END58:
	sw	$2,168($sp) #y

	li	$2, 3
$END59:
	sw	$2,164($sp) #z

	li	$2, 4
$END60:
	sw	$2,160($sp) #a

	li	$2, 5
$END61:
	sw	$2,156($sp) #f

	sb	$0, 152($sp) #yu

	sw	$1,148($sp)
	sw	$2,144($sp)
	sw	$3,140($sp)
	sw	$4,136($sp)
	sw	$5,132($sp)
	sw	$6,128($sp)
	sw	$7,124($sp)
	sw	$8,120($sp)
	sw	$9,116($sp)
	sw	$10,112($sp)
	sw	$11,108($sp)
	sw	$12,104($sp)
	sw	$13,100($sp)
	sw	$14,96($sp)
	sw	$15,92($sp)
	sw	$16,88($sp)
	sw	$17,84($sp)
	sw	$18,80($sp)
	sw	$19,76($sp)
	sw	$20,72($sp)
	sw	$21,68($sp)
	sw	$22,64($sp)
	sw	$23,60($sp)
	sw	$24,56($sp)
	sw	$25,52($sp)
	sw	$31,48($sp)
	lb	$2, 152($sp) #yu
$END63:
	sb	$2, 4($sp) #r
	move	$4, $2 #load parameter 1
	lw	$2, 168($sp) #y
$END64:
	sw	$2, 8($sp) #t

	move	$5, $2 #load parameter 2
	lw	$2, 164($sp) #z
$END65:
	sw	$2, 12($sp) #w

	move	$6, $2 #load parameter 3
	lw	$2, 160($sp) #a
$END66:
	sw	$2, 16($sp) #j

	move	$7, $2 #load parameter 4
	lw	$2, 156($sp) #f
$END67:
	sw	$2, 20($sp) #o

	lw	$2, 160($sp) #a
$END68:
	sw	$2, 24($sp) #p

	lw	$2, 172($sp) #x
$END69:
	sw	$2, 28($sp) #h

	lw	$2, 172($sp) #x
$END70:
	sw	$2, 32($sp) #o1

	lw	$2, 172($sp) #x
$END71:
	sw	$2, 36($sp) #p1

	lw	$2, 156($sp) #f
$END72:
	sw	$2, 40($sp) #h1

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
	lw $31,52($sp)
	move $2, $25
$END62:
	sw	$1,148($sp)
	sw	$2,144($sp)
	sw	$3,140($sp)
	sw	$4,136($sp)
	sw	$5,132($sp)
	sw	$6,128($sp)
	sw	$7,124($sp)
	sw	$8,120($sp)
	sw	$9,116($sp)
	sw	$10,112($sp)
	sw	$11,108($sp)
	sw	$12,104($sp)
	sw	$13,100($sp)
	sw	$14,96($sp)
	sw	$15,92($sp)
	sw	$16,88($sp)
	sw	$17,84($sp)
	sw	$18,80($sp)
	sw	$19,76($sp)
	sw	$20,72($sp)
	sw	$21,68($sp)
	sw	$22,64($sp)
	sw	$23,60($sp)
	sw	$24,56($sp)
	sw	$25,52($sp)
	sw	$31,48($sp)
	lb	$2, 152($sp) #yu
$END74:
	sb	$2, 4($sp) #r
	move	$4, $2 #load parameter 1
	lw	$2, 168($sp) #y
$END75:
	sw	$2, 8($sp) #t

	move	$5, $2 #load parameter 2
	lw	$2, 164($sp) #z
$END76:
	sw	$2, 12($sp) #w

	move	$6, $2 #load parameter 3
	lw	$2, 160($sp) #a
$END77:
	sw	$2, 16($sp) #j

	move	$7, $2 #load parameter 4
	lw	$2, 156($sp) #f
$END78:
	sw	$2, 20($sp) #o

	lw	$2, 160($sp) #a
$END79:
	sw	$2, 24($sp) #p

	lw	$2, 172($sp) #x
$END80:
	sw	$2, 28($sp) #h

	lw	$2, 172($sp) #x
$END81:
	sw	$2, 32($sp) #o1

	lw	$2, 172($sp) #x
$END82:
	sw	$2, 36($sp) #p1

	lw	$2, 156($sp) #f
$END83:
	sw	$2, 40($sp) #h1

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
	lw $31,52($sp)
	move $2, $25
$END73:
	sw	$1,148($sp)
	sw	$2,144($sp)
	sw	$3,140($sp)
	sw	$4,136($sp)
	sw	$5,132($sp)
	sw	$6,128($sp)
	sw	$7,124($sp)
	sw	$8,120($sp)
	sw	$9,116($sp)
	sw	$10,112($sp)
	sw	$11,108($sp)
	sw	$12,104($sp)
	sw	$13,100($sp)
	sw	$14,96($sp)
	sw	$15,92($sp)
	sw	$16,88($sp)
	sw	$17,84($sp)
	sw	$18,80($sp)
	sw	$19,76($sp)
	sw	$20,72($sp)
	sw	$21,68($sp)
	sw	$22,64($sp)
	sw	$23,60($sp)
	sw	$24,56($sp)
	sw	$25,52($sp)
	sw	$31,48($sp)
	lb	$2, 152($sp) #yu
$END85:
	sb	$2, 4($sp) #r
	move	$4, $2 #load parameter 1
	lw	$2, 168($sp) #y
$END86:
	sw	$2, 8($sp) #t

	move	$5, $2 #load parameter 2
	lw	$2, 164($sp) #z
$END87:
	sw	$2, 12($sp) #w

	move	$6, $2 #load parameter 3
	lw	$2, 160($sp) #a
$END88:
	sw	$2, 16($sp) #j

	move	$7, $2 #load parameter 4
	lw	$2, 156($sp) #f
$END89:
	sw	$2, 20($sp) #o

	lw	$2, 160($sp) #a
$END90:
	sw	$2, 24($sp) #p

	lw	$2, 172($sp) #x
$END91:
	sw	$2, 28($sp) #h

	lw	$2, 172($sp) #x
$END92:
	sw	$2, 32($sp) #o1

	lw	$2, 172($sp) #x
$END93:
	sw	$2, 36($sp) #p1

	lw	$2, 156($sp) #f
$END94:
	sw	$2, 40($sp) #h1

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
	lw $31,52($sp)
	move $2, $25
$END84:
	sw	$1,148($sp)
	sw	$2,144($sp)
	sw	$3,140($sp)
	sw	$4,136($sp)
	sw	$5,132($sp)
	sw	$6,128($sp)
	sw	$7,124($sp)
	sw	$8,120($sp)
	sw	$9,116($sp)
	sw	$10,112($sp)
	sw	$11,108($sp)
	sw	$12,104($sp)
	sw	$13,100($sp)
	sw	$14,96($sp)
	sw	$15,92($sp)
	sw	$16,88($sp)
	sw	$17,84($sp)
	sw	$18,80($sp)
	sw	$19,76($sp)
	sw	$20,72($sp)
	sw	$21,68($sp)
	sw	$22,64($sp)
	sw	$23,60($sp)
	sw	$24,56($sp)
	sw	$25,52($sp)
	sw	$31,48($sp)
	lb	$2, 152($sp) #yu
$END96:
	sb	$2, 4($sp) #r
	move	$4, $2 #load parameter 1
	lw	$2, 168($sp) #y
$END97:
	sw	$2, 8($sp) #t

	move	$5, $2 #load parameter 2
	lw	$2, 164($sp) #z
$END98:
	sw	$2, 12($sp) #w

	move	$6, $2 #load parameter 3
	lw	$2, 160($sp) #a
$END99:
	sw	$2, 16($sp) #j

	move	$7, $2 #load parameter 4
	lw	$2, 156($sp) #f
$END100:
	sw	$2, 20($sp) #o

	lw	$2, 160($sp) #a
$END101:
	sw	$2, 24($sp) #p

	lw	$2, 172($sp) #x
$END102:
	sw	$2, 28($sp) #h

	lw	$2, 172($sp) #x
$END103:
	sw	$2, 32($sp) #o1

	lw	$2, 172($sp) #x
$END104:
	sw	$2, 36($sp) #p1

	lw	$2, 156($sp) #f
$END105:
	sw	$2, 40($sp) #h1

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
	lw $31,52($sp)
	move $2, $25
$END95:
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
	addiu $sp,$sp,-124
	sw $fp,120($sp)
	sw $31,116($sp)
	move $fp,$sp

	sw	$0, 112($sp) #d

	move $sp,$fp
	lw $31,116($sp)
	lw $fp,120($sp)
	addiu $sp,$sp,124
	j $31

	nop
	.set macro
	.set reorder
	.end functd
	.size functd, .-functd

