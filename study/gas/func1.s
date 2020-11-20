 #ASM function use register give the inputdatas
 .section .data
str:
    .ascii "ASM THIRD DAY\n"
    sl = .-str

.section .text
.global _start
_start:
    movl $0, %eax          #Init eax
    movl $2, %ebx          #Preparedata in ebx first
    mov $2, %ecx
loop1:
    call add_fun            #Then callchild function
    loop loop1

    #Systemcall:   write()
    movl $4, %eax
    movl $1, %ebx
    movl $str, %ecx
    movl $sl, %edx
    int $0x80

    movl $1, %eax           #Systemcall:   exit
    movl $0, %ebx
    int $0x80

#The method of GNU define a funtionod
.type add_fun, @function
add_fun:
    add %ebx, %ebx
    movl %ebx, %eax
    ret