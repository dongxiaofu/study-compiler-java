# 数据段
.section .data
msg:
        .ascii "Hello,World\n"
        len = . - msg
# 主函数
.section .text
.global _start
_start:
        nop    # 没有也不影响程序功能
        call echo    # 调用自定义函数 echo
                
                # 利用0x80中断 实现系统调用(exit的code是1，32位机器)
        movl $1, %eax
        int $0x80

# 自定义函数
.type echo, @function
echo:
        movl $len, %edx
        movl $msg, %ecx
        movl $1, %ebx
        # 系统中断 + write系统调用
        # 上面三个是write的三个参数
        movl $4, %eax
        int $0x80
        
        ret    # 自定义函数结束必须用这个指令
