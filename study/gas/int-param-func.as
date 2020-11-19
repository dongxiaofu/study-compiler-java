.section .data
msg:
        .int 9
output:
        .asciz  "ID is %d\n"
.section .text
.global _start
_start:
        # nop
        pushl $10
        call echo
        addl $4, %esp

        movl $1, %eax
        int $0x80

.type echo, @function
echo:
        pushl %ebp
        movl %esp, %ebp
        subl $4, %esp

        # movl 4, %edx
        # movl 8(%esp), %ecx
        # movl $1, %ebx
        # movl $4, %eax

        # int $0x80
        pushl $10
        pushl $output
        call printf
        addl $8, %esp

        movl %ebp, %esp
        popl %ebp
        ret
