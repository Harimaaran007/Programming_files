#!/bin/bash
echo "enter the two number:"
read a
read b
echo "enter choice:"
echo "1.addition"
echo "2.subraction"
echo "3.multi"
echo "4.div"
read ch
case $ch in
   1)res=`echo $a + $b|bc`
      ;;
   2)res=`echo $a - $b|bc`
      ;;
   3)res=`echo $a \* $b|bc`
      ;;
   4)res=`echo $a / $b|bc`
      ;;
esac
echo "Result : $res"
