.section .data
tip:
    .ascii "Start to run:\n"
str:
    .ascii "The value is:%d\n"
count:
    .int 0
max:
    .int 20

.section .text
.global _start
_start:
    movl $2, %ecx
    movl $0, %eax
    #pushl $tip
    #call printf
    #add $4, %esp
    jcxz done
loop1:
    #add %ecx, %eax
    #call echo
    pushl %ecx
        pushl $str
        #call printf
    movl 8(%ebp), %ecx
    movl 12(%ebp), %edx
    movl $1, %ebx
    movl $4, %eax
    int $0x80

    loop loop1
done:
    pushl $0
    call exit

.type echo, @function
echo:
    pushl %ecx
    pushl $str
    call printf
    add $8, %esp

    #pushl $0
        #call exit

    ret
