echo "enter the year:"
read year
if [ $year -ge 1000 -a $year -le 9999 ];
then
   if [ $(($year%4)) -eq 0 ];
   then
      echo "the year $year is a leap year"
   else
      echo "the year $year is not leap year"
   fi
fi
