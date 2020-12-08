# signtest.s - An example of using the sign flag
.section .data
value:
   .int 21, 15, 34, 11, 6, 50, 32, 80, 10, 2
output:
   .asciz "The value is: %d\n"
.section .text
.globl _start
_start:
   movl $9, %edi
loop:
   pushl value(, %edi, 4)
   pushl $output
   call printf
   #addl $8, $esp # 不知有啥用，留着还报错
   decl %edi
   jns loop
   movl $1, %eax
   movl $0, %ebx
   int $0x80
