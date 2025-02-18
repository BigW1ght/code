	.file	"test1.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movl	%ecx, -48(%rbp)
	movq	%rdx, -40(%rbp)
	call	__main
	movabsq	$19231975607067233, %rax
	movq	%rax, -92(%rbp)
	movl	$0, -84(%rbp)
	jmp	.L2
.L4:
	movl	-84(%rbp), %eax
	cltq
	movzbl	-92(%rbp,%rax), %eax
	cmpb	$96, %al
	jle	.L3
	movl	-84(%rbp), %eax
	cltq
	movzbl	-92(%rbp,%rax), %eax
	cmpb	$122, %al
	jg	.L3
	movl	-84(%rbp), %eax
	cltq
	movzbl	-92(%rbp,%rax), %eax
	subl	$32, %eax
	movl	%eax, %edx
	movl	-84(%rbp), %eax
	cltq
	movb	%dl, -92(%rbp,%rax)
.L3:
	addl	$1, -84(%rbp)
.L2:
	movl	-84(%rbp), %eax
	movslq	%eax, %rbx
	leaq	-92(%rbp), %rax
	movq	%rax, %rcx
	call	strlen
	cmpq	%rax, %rbx
	jb	.L4
	leaq	-92(%rbp), %rax
	movq	%rax, %rcx
	call	puts
	movl	$0, %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	strlen;	.scl	2;	.type	32;	.endef
	.def	puts;	.scl	2;	.type	32;	.endef
