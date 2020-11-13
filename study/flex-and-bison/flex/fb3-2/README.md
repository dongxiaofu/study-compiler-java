运行
===========

bison -vdty  fb3-2.y

flex fb3-2.l

# 为什么可以不把y.tab.h加进来一起编译？
gcc -o calc fb3-2funcs.c  lex.yy.c y.tab.c
