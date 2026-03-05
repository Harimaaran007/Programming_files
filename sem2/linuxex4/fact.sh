#!/bin/bash
echo "enter a number:"
read num
fact=1
n=$num
while [ $num -ge 1 ]
do
   fact=$((fact*num))
   num=$(($num-1))
done
echo "factorial of $n is $fact"
