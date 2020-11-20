#! /bin/bash

echo "filename:$0"

code=$1
echo "code:$1"


as -gstabs -o $code.o $code.s
ld -dynamic-linker /lib/ld-linux.so.2 -o $code -lc $code.o
