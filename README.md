# 学习《自制编译器》

## 运行JavaCC 计算器例子

文件位置：example/adder/adder.jj

运行命令：

JavaCC adder.jj

javac Adder.java

java Adder "1+5" "2+8" 或 java Adder 1+5 2+8 都能得到正确结果。

java Adder "1+s" 会报错。

自己写glang编译器
==========================
本项目已经更改为用golang写编译器。

参考资料：

自己动手写编译器

https://pandolia.net/tinyc/ch13_bison.html
