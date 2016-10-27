.globl gcd
.text
	.align 4
gcd:
	pushl %ebp
	movl %esp, %ebp
	cmpl $0, 12(%ebp)
	jne gcd_continue
	movl 8(%ebp), %eax
	jmp gcd_return
	.align 4

gcd_continue:
	movl 8(%ebp), %eax /* Move dividend to %eax */
	movl $0, %edx
	cltd
	idivl 12(%ebp)
	movl 12(%ebp), %eax
	pushl %edx /* Push quotient onto stack */
	pushl %eax /* Push remainder onto stack */
	call gcd
gcd_return:
	movl %ebp, %esp
	popl %ebp
	ret
