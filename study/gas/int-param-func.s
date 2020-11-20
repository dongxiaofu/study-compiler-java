.section .data
output:
        .ascii  "ID is %d\n"
        len = . - output
.section .text
.global _start
_start:
        nop
        pushl $len
        pushl $output
        call echo

        movl $1, %eax
        int $0x80

.type echo, @function
echo:
        pushl %ebp
        movl %esp, %ebp

        movl 8(%ebp), %ecx
        movl 12(%ebp), %edx
        movl $1, %ebx
        movl $4, %eax
        int $0x80

        movl %ebp, %esp
        popl %ebp
        ret
