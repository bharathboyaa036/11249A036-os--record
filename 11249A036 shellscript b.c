#!/bin/bash
echo "Enter two numbers: "
read a b
if [ $a -gt $b ]; then
    echo "$a is the biggest number."
else
    echo "$b is the biggest number."
fi
