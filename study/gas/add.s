.section .data
output:
    .asciz  "Id %d\n"
.section .text
.global _start
_start:
    nop
    pushl $12
    pushl $20
    call add
    pushl %eax
    pushl $output
    call printf

    pushl $0
    call exit

.type   add, @function
add:
    pushl %ebp
    movl %esp, %ebp

    #addl 8(%ebp), 12(%ebp)
    movl 8(%ebp), %eax
    addl 12(%ebp), %eax

    movl %ebp, %esp
    popl %ebp

    ret