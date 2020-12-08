# movstest1.s - An example of the MOVS instructions
.section .data
value1:
   .ascii "This is a test string.\n"
.section .bss
   .lcomm output, 23
.section .text
.globl _start
_start:
   nop
   leal value1, %esi
   leal output, %edi
   movsb
   movsw
   movsl

   pushl $value1
   call printf

    # 什么都打印不出来，那么，这个东西有啥用？
   pushl $output
   call printf

   movl $1, %eax
   movl $0, %ebx
   int $0x80
