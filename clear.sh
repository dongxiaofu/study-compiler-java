#! /bin/bash

# 清理*.java和*.class文件
find /Users/cg/data/code/study-compiler-java -name "*.java" | xargs rm -rvf
find /Users/cg/data/code/study-compiler-java -name "*.class" | xargs rm -rvf
