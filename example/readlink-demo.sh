#! /bin/bash

PATH1=$(dirname $0)
echo $PATH1 #输出 ./example
PATH3=$(readlink -f $PATH1/..)
echo $PATH3 #输出 /Users/cg/data/code/study-compiler-java

# readlink -f php
