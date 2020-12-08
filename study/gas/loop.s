.section .data
str:
    .asciz "The value is:%d\n"

.section .text
.global _start
_start:
    movl $30, %ecx
    movl $0, %eax
    jcxz done
loop1:
    movl %ecx, %edi
    pushl %ecx
    pushl $str
    call printf
    # call write start
    #movl $str, %ecx
    #movl $12, %edx
    #movl $1, %ebx
    #movl $4, %eax
    #int $0x80
    # call write end
    movl %edi, %ecx
    loop loop1
done:
    movl $1, %eax           #System call:   exit
    movl $0, %ebx
    int $0x80


