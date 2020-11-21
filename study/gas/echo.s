.section .data
str:
    .ascii = "hello,world:%d\n"

.section .text
.global _start
_start:
    movl $4, %ecx
    movl $0, %eax
loop1:
    movl %ecx, %eax
    pushl $3
    pushl $str
    call printf
    movl %eax, %ecx
    loop loop1

    pushl $0
    call exit



#mov ax,0
#mov es,ax
#mov al,41H
#mov byte ptr es:[160 * 5 + 40 * 2],al;要在第几行显示，160*该行号，中间位置是80
#section:displacement(base,index,scale)

#mov ax,DATA
#mov ds,ax

#mov dx,OFFSET BUF
#mov ah,09H
#int 21H
#mov ah,4CH
#int 21H
