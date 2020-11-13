cmake_minimum_required(VERSION 3.15)
project(go-compiler)

#set(CMAKE_C_STANDARD 90)
#set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_compile_options(-ll)

add_executable(tcc
        fb1-5.h
        fb1-5funcs.c
        lex.yy.c
        y.tab.c
        y.tab.h
        )