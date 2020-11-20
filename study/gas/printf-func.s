.section .data
output:
        .asciz  "ID is %d\n"
        len = . - output
.section .text
.global _start
_start:
        nop
        pushl $12
        pushl $output
        call echo
        #addl $8, %esp

        movl $1, %eax
        int $0x80

.type echo, @function
echo:
        pushl %ebp
        movl %esp, %ebp
        #subl 8,%esp

        pushl 12(%ebp)
        pushl 8(%ebp)
        #pushl $12
        #pushl $output
        #movl $output, %ecx
        #movl $12, %edx
        call printf

        #addl 8, %esp
        #movl 8(%ebp), %ecx
        #movl 12(%ebp), %edx
        #movl $1, %ebx
        #movl $4, %eax
        #int $0x80

        movl %ebp, %esp
        popl %ebp
        ret
