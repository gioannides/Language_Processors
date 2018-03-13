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

$END0:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	sw	$31,8($sp)
	move	$fp,$sp

	lw	$2, 56($sp) #h1
	lw	$3, 52($sp) #p1
	add	$2, $2, $3
$END1:
	move	$2,$2
	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop

	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 func
	.size	 func, .-func



	.text
	.align	2
	.globl	gunv
	.set	nomips16
	.set	nomicromips
	.ent	gunv
	.type	gunv, @function
gunv:

$END2:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	sw	$31,8($sp)
	move	$fp,$sp

	lw	$2, 44($sp) #h
	lw	$3, 52($sp) #p1
	add	$2, $2, $3
$END3:
	move	$2,$2
	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop

	move	$sp,$fp
	lw	$31,8($sp)
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 gunv
	.size	 gunv, .-gunv



	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:

$END4:
$END5:
$END6:
$END7:
$END8:
$END10:
$END11:
$END12:
$END13:
$END14:
$END15:
$END16:
$END17:
$END18:
$END19:
$END9:
$END21:
$END22:
$END23:
$END24:
$END25:
$END26:
$END27:
$END28:
$END29:
$END30:
$END20:
$END32:
$END33:
$END34:
$END35:
$END36:
$END37:
$END38:
$END39:
$END40:
$END41:
$END31:
$END43:
$END44:
$END45:
$END46:
$END47:
$END48:
$END49:
$END50:
$END51:
$END52:
$END42:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-80
	sw	$fp,76($sp)
	sw	$31,72($sp)
	move	$fp,$sp

	li	$2, 1
$END53:
	sw	$2, 68($sp) #x

	li	$2, 2
$END54:
	sw	$2, 64($sp) #y

	li	$2, 3
$END55:
	sw	$2, 60($sp) #z

	li	$2, 4
$END56:
	sw	$2, 56($sp) #a

	li	$2, 5
$END57:
	sw	$2, 52($sp) #f

	sb	$0, 48($sp) #yu

#VARIABLE : gunvNOT DECLARED!!!

	lb	$2, 48($sp) #yu
$END59:
	sb	$2, 4($sp) #r
	lw	$2, 64($sp) #y
$END60:
	sw	$2, 8($sp) #t

	lw	$2, 60($sp) #z
$END61:
	sw	$2, 12($sp) #w

	lw	$2, 56($sp) #a
$END62:
	sw	$2, 16($sp) #j

	lw	$2, 52($sp) #f
$END63:
	sw	$2, 20($sp) #o

	lw	$2, 56($sp) #a
$END64:
	sw	$2, 24($sp) #p

	lw	$2, 68($sp) #x
$END65:
	sw	$2, 28($sp) #h

	lw	$2, 68($sp) #x
$END66:
	sw	$2, 32($sp) #o1

	lw	$2, 68($sp) #x
$END67:
	sw	$2, 36($sp) #p1

	lw	$2, 52($sp) #f
$END68:
	sw	$2, 40($sp) #h1
	.option pic
	jal gunv
	nop
$END58:
#VARIABLE : funcNOT DECLARED!!!

	lb	$2, 48($sp) #yu
$END70:
	sb	$2, 4($sp) #r
	lw	$2, 64($sp) #y
$END71:
	sw	$2, 8($sp) #t

	lw	$2, 60($sp) #z
$END72:
	sw	$2, 12($sp) #w

	lw	$2, 56($sp) #a
$END73:
	sw	$2, 16($sp) #j

	lw	$2, 52($sp) #f
$END74:
	sw	$2, 20($sp) #o

	lw	$2, 56($sp) #a
$END75:
	sw	$2, 24($sp) #p

	lw	$2, 68($sp) #x
$END76:
	sw	$2, 28($sp) #h

	lw	$2, 68($sp) #x
$END77:
	sw	$2, 32($sp) #o1

	lw	$2, 68($sp) #x
$END78:
	sw	$2, 36($sp) #p1

	lw	$2, 52($sp) #f
$END79:
	sw	$2, 40($sp) #h1
	.option pic
	jal func
	nop
$END69:
#VARIABLE : gunvNOT DECLARED!!!

	lb	$2, 48($sp) #yu
$END81:
	sb	$2, 4($sp) #r
	lw	$2, 64($sp) #y
$END82:
	sw	$2, 8($sp) #t

	lw	$2, 60($sp) #z
$END83:
	sw	$2, 12($sp) #w

	lw	$2, 56($sp) #a
$END84:
	sw	$2, 16($sp) #j

	lw	$2, 52($sp) #f
$END85:
	sw	$2, 20($sp) #o

	lw	$2, 56($sp) #a
$END86:
	sw	$2, 24($sp) #p

	lw	$2, 68($sp) #x
$END87:
	sw	$2, 28($sp) #h

	lw	$2, 68($sp) #x
$END88:
	sw	$2, 32($sp) #o1

	lw	$2, 68($sp) #x
$END89:
	sw	$2, 36($sp) #p1

	lw	$2, 52($sp) #f
$END90:
	sw	$2, 40($sp) #h1
	.option pic
	jal gunv
	nop
$END80:
#VARIABLE : gunvNOT DECLARED!!!

	lb	$2, 48($sp) #yu
$END92:
	sb	$2, 4($sp) #r
	lw	$2, 64($sp) #y
$END93:
	sw	$2, 8($sp) #t

	lw	$2, 60($sp) #z
$END94:
	sw	$2, 12($sp) #w

	lw	$2, 56($sp) #a
$END95:
	sw	$2, 16($sp) #j

	lw	$2, 52($sp) #f
$END96:
	sw	$2, 20($sp) #o

	lw	$2, 56($sp) #a
$END97:
	sw	$2, 24($sp) #p

	lw	$2, 68($sp) #x
$END98:
	sw	$2, 28($sp) #h

	lw	$2, 68($sp) #x
$END99:
	sw	$2, 32($sp) #o1

	lw	$2, 68($sp) #x
$END100:
	sw	$2, 36($sp) #p1

	lw	$2, 52($sp) #f
$END101:
	sw	$2, 40($sp) #h1
	.option pic
	jal gunv
	nop
$END91:
	move	$sp,$fp
	lw	$31,72($sp)
	lw	$fp,76($sp)
	addiu	$sp,$sp,80
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 main
	.size	 main, .-main



	.text
	.align	2
	.globl	functd
	.set	nomips16
	.set	nomicromips
	.ent	functd
	.type	functd, @function
functd:
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-20
	sw	$fp,16($sp)
	sw	$31,12($sp)
	move	$fp,$sp

	sw	$0, 8($sp) #d

	move	$sp,$fp
	lw	$31,12($sp)
	lw	$fp,16($sp)
	addiu	$sp,$sp,20
	j	$31

	nop
	.set	 macro
	.set	 reorder
	.end	 functd
	.size	 functd, .-functd

