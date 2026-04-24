#!/bin/bash
echo "Enter three numbers: "
read a b c
if [ $a -gt $b ] && [ $a -gt $c ]; then
    echo "$a is the biggest."
elif [ $b -gt $a ] && [ $b -gt $c ]; then
    echo "$b is the biggest."
else
    echo "$c is the biggest."
fi
