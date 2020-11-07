Makefile文件
===========================
Makefile文件有问题，make clean能正常使用，make会报错。下面是报错信息：

chugangdeMacBook-Pro:fb3-1 cg$ make
bison -vdty fb3-1.y
flex fb3-1.l
gcc    -c -o lex.yy.o lex.yy.c
yacc  fb3-1.y 
mv -f y.tab.c fb3-1.c
gcc    -c -o fb3-1.o fb3-1.c
y.tab.c:1037:16: warning: implicit declaration of function 'yylex' is invalid in C99 [-Wimplicit-function-declaration]
      yychar = yylex ();
               ^
1 warning generated.
gcc -o tcc lex.yy.o fb3-1.o -ll
Undefined symbols for architecture x86_64:
  "_eval", referenced from:
      _yyparse in fb3-1.o
  "_newast", referenced from:
      _yyparse in fb3-1.o
  "_newnum", referenced from:
      _yyparse in fb3-1.o
  "_treefree", referenced from:
      _yyparse in fb3-1.o
  "_yyerror", referenced from:
      _yylex in lex.yy.o
      _yyparse in fb3-1.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
make: *** [tcc] Error 1
rm fb3-1.c

运行
============
bison -vdty  fb3-1.y

flex fb3-1.l

# 为什么可以不把y.tab.h加进来一起编译？
gcc -o calc fb3-1funcs.c  lex.yy.c y.tab.c

运行效果
================
chugangdeMacBook-Pro:fb3-1 cg$ ./calc 
> 1+2
=    3
> 4+8
=   12
> 5+(9/2)+7*3
= 30.5





