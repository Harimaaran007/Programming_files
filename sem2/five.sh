#!/bin/bash
echo "enter arg1"
read one
echo "enter arg2"
read two
echo " first argument : $one"
echo " second argument : $two"
sum=$(($one + $two))
echo "sum=$sum"
