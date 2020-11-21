.section .data
str:
    .asciz "The value is:%d\n"

.section .text
.global _start
_start:
    movl $3, %ecx
    movl $0, %eax
    jcxz done
loop1:
    pushl %ecx
    pushl %eax

    pushl %ecx
    pushl $str
    call printf

    popl %eax
    popl %ecx

    loop loop1
done:
    movl $1, %eax           #System call:   exit
    movl $0, %ebx
    int $0x80


