def sum(d,a):
   sum=0
   for i in range(1,a+1):
      sum= sum+d[i]
   print("The sum of the values are:",sum)
a= int(input("enter the value:"))
d=dict()
for i in range(1,a+1):
   d[i]=i*i
sum(d,a)
