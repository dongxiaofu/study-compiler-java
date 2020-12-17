.section .data
str:
    .asciz  "hello,world:%d\n"
    len = . - str

.section .text
.global _start
_start:
    nop
    pushl $7
    pushl $str
    call printf
    movl $1, %eax
    int $0x80
