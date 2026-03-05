echo " enter the number:"
read N
i=1
sum=0
echo "enter the N number:"
while [ $i -le $N ]
do
   read num 
   sum=$(($sum+$num))
   i=$(($i+1))
done
echo "sum of N number is $sum"
