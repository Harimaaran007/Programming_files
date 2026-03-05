#!/bin/bash
echo enter a 5digit number
read num
n=1
while [ $n -le 5 ]
do
   a=`echo $num | cut -c $n`
   echo $a
   n=`expr $n + 2`
done
