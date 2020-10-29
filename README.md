# 学习《自制编译器》

## 运行JavaCC 计算器例子

文件位置：example/adder/adder.jj

运行命令：

JavaCC adder.jj

javac Adder.java

java Adder "1+5" "2+8" 或 java Adder 1+5 2+8 都能得到正确结果。

java Adder "1+s" 会报错。
