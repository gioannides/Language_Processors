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
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	sw	$31,8($sp)
	move	$fp,$sp

	lw	$2, 53($sp) #h1
	lw	$3, 49($sp) #p1
	add	$2, $2, $3
$END0:
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
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	sw	$31,8($sp)
	move	$fp,$sp

	lw	$2, 41($sp) #h
	lw	$3, 49($sp) #p1
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

$END2:
$END3:
$END4:
$END5:
$END6:
$END8:
$END9:
$END10:
$END11:
$END12:
$END13:
$END14:
$END15:
$END16:
$END17:
$END7:
$END19:
$END20:
$END21:
$END22:
$END23:
$END24:
$END25:
$END26:
$END27:
$END28:
$END18:	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-74
	sw	$fp,70($sp)
	sw	$31,66($sp)
	move	$fp,$sp

	li	$2, 1
$END29:
	sw	$2, 62($sp) #x

	li	$2, 2
$END30:
	sw	$2, 58($sp) #y

	li	$2, 3
$END31:
	sw	$2, 54($sp) #z

	li	$2, 4
$END32:
	sw	$2, 50($sp) #a

	li	$2, 5
$END33:
	sw	$2, 46($sp) #f

	sb	$0, 42($sp) #yu

#VARIABLE : funcNOT DECLARED!!!

	lb	$2, 42($sp) #yu
	sb	$2, 1($sp) #r
$END35:
	lw	$2, 58($sp) #y
	sw	$2, 5($sp) #t

$END36:
	lw	$2, 54($sp) #z
	sw	$2, 9($sp) #w

$END37:
	lw	$2, 50($sp) #a
	sw	$2, 13($sp) #j

$END38:
	lw	$2, 46($sp) #f
	sw	$2, 17($sp) #o

$END39:
	lw	$2, 50($sp) #a
	sw	$2, 21($sp) #p

$END40:
	lw	$2, 62($sp) #x
	sw	$2, 25($sp) #h

$END41:
	lw	$2, 62($sp) #x
	sw	$2, 29($sp) #o1

$END42:
	lw	$2, 62($sp) #x
	sw	$2, 33($sp) #p1

$END43:
	lw	$2, 46($sp) #f
	sw	$2, 37($sp) #h1

$END44:	.option pic
	jal gunv
	nop
$END34:
#VARIABLE : gunvNOT DECLARED!!!

	lb	$2, 42($sp) #yu
	sb	$2, 1($sp) #r
$END46:
	lw	$2, 58($sp) #y
	sw	$2, 5($sp) #t

$END47:
	lw	$2, 54($sp) #z
	sw	$2, 9($sp) #w

$END48:
	lw	$2, 50($sp) #a
	sw	$2, 13($sp) #j

$END49:
	lw	$2, 46($sp) #f
	sw	$2, 17($sp) #o

$END50:
	lw	$2, 50($sp) #a
	sw	$2, 21($sp) #p

$END51:
	lw	$2, 62($sp) #x
	sw	$2, 25($sp) #h

$END52:
	lw	$2, 62($sp) #x
	sw	$2, 29($sp) #o1

$END53:
	lw	$2, 62($sp) #x
	sw	$2, 33($sp) #p1

$END54:
	lw	$2, 46($sp) #f
	sw	$2, 37($sp) #h1

$END55:	.option pic
	jal gunv
	nop
$END45:
#VARIABLE : guncNOT DECLARED!!!

	lb	$2, 42($sp) #yu
	sb	$2, 1($sp) #r
$END57:
	lw	$2, 58($sp) #y
	sw	$2, 5($sp) #t

$END58:
	lw	$2, 54($sp) #z
	sw	$2, 9($sp) #w

$END59:
	lw	$2, 50($sp) #a
	sw	$2, 13($sp) #j

$END60:
	lw	$2, 46($sp) #f
	sw	$2, 17($sp) #o

$END61:
	lw	$2, 50($sp) #a
	sw	$2, 21($sp) #p

$END62:
	lw	$2, 62($sp) #x
	sw	$2, 25($sp) #h

$END63:
	lw	$2, 62($sp) #x
	sw	$2, 29($sp) #o1

$END64:
	lw	$2, 62($sp) #x
	sw	$2, 33($sp) #p1

$END65:
	lw	$2, 46($sp) #f
	sw	$2, 37($sp) #h1

$END66:	.option pic
	jal gunv
	nop
$END56:
	move	$2,$2
	move	$sp,$fp
	lw	$31,66($sp)
	lw	$fp,70($sp)
	addiu	$sp,$sp,74
	j	$31

	nop

	move	$sp,$fp
	lw	$31,66($sp)
	lw	$fp,70($sp)
	addiu	$sp,$sp,74
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

