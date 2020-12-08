.section .data
output:
        .asciz  "ID is %d\n"
        len = . - output
.section .text
.global _start
_start:
        nop
        pushl $12
        pushl $output
        call echo
        #addl $8, %esp

        movl $1, %eax
        int $0x80

# 对函数模板，理解得很不深刻，主要依靠记忆。时间一长，我不会认为这是理所当然的。
.type echo, @function
echo:
        pushl %ebp
        movl %esp, %ebp
        #subl 8,%esp
        # 参数入栈顺序与函数的参数顺序（从右到左）一致，右边的参数先入栈。
        pushl 12(%ebp)
        pushl 8(%ebp)
        #pushl $12
        #pushl $output
        #movl $output, %ecx
        #movl $12, %edx
        call printf

        #addl 8, %esp
        #movl 8(%ebp), %ecx
        #movl 12(%ebp), %edx
        #movl $1, %ebx
        #movl $4, %eax
        #int $0x80

        # esp在执行push操作后，发生改变，估需要在此还原
        movl %ebp, %esp
        # 获取开头入栈的ebp
        popl %ebp
        # 获取返回地址
        ret
