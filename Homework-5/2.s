	.file	"2.c"
	.text
	.globl	_Prime
	.def	_Prime;	.scl	2;	.type	32;	.endef
_Prime:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	cmpl	$1, 8(%ebp)
	jg	L2
	movl	$0, %eax
	jmp	L1
L2:
	movl	$2, -4(%ebp)
	jmp	L4
L7:
	movl	8(%ebp), %eax
	cltd
	idivl	-4(%ebp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	L5
	movl	-4(%ebp), %eax
	cmpl	8(%ebp), %eax
	je	L5
	movl	$0, %eax
	jmp	L1
L5:
	movl	8(%ebp), %eax
	cltd
	idivl	-4(%ebp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	L6
	movl	-4(%ebp), %eax
	cmpl	8(%ebp), %eax
	jne	L6
	movl	$1, %eax
	jmp	L1
L6:
	addl	$1, -4(%ebp)
L4:
	movl	-4(%ebp), %eax
	cmpl	8(%ebp), %eax
	jl	L7
L1:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.globl	_NOK
	.def	_NOK;	.scl	2;	.type	32;	.endef
_NOK:
LFB11:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$20, %esp
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	_Prime
	testl	%eax, %eax
	jne	L9
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	call	_Prime
	testl	%eax, %eax
	je	L10
L9:
	movl	8(%ebp), %eax
	imull	12(%ebp), %eax
	jmp	L11
L10:
	movl	$1, -4(%ebp)
L13:
	movl	-4(%ebp), %eax
	cltd
	idivl	8(%ebp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	L12
	movl	-4(%ebp), %eax
	cltd
	idivl	12(%ebp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	L12
	movl	-4(%ebp), %eax
	jmp	L11
L12:
	addl	$1, -4(%ebp)
	jmp	L13
L11:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB12:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$12, 28(%esp)
	movl	$18, 24(%esp)
	movl	24(%esp), %eax
	movl	%eax, 4(%esp)
	movl	28(%esp), %eax
	movl	%eax, (%esp)
	call	_NOK
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE12:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
