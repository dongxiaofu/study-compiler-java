  #Give data to child function by stack
.section .data
    str: .ascii "ASMTHIRD FOURTH DAY\n"
    sl = .-str

.section .text
.global _start
_start:
    pushl $4                #Be ready data for child fun bystack
    call give_value_to_eax

    movl $1, %ebx           #Systemcall:   write()
    movl $str, %ecx
    movl $sl, %edx
    int $0x80

    movl $1, %eax           #System call:   exit
    movl $0, %ebx
    int $0x80

#child fun
.type give_value_to_eax, @function
give_value_to_eax:
    pushl  %ebp             #Save ebp value
    movl %esp, %ebp         #Get stacktop address for ebp
    movl 8(%ebp), %eax      #%eax 'svalue is the bottom value of the stack

    pop %ebp                #Get theold ebp value again
    ret