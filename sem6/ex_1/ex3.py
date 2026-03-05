a=int(input('enter the value1:'))
b=int(input('enter the value2:'))
if(a<0 and b<0):
   a=-a
   b=-b
print('before the swapping the values are:')
print(a)
print(b)
a=a+b
b=a-b
a=a-b
print('after the swapping the values are:')
print(a)
print(b)

