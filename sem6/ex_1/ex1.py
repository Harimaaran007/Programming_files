count=int(input('enter the count value - 1.By using breath and height/2.By using sides of the triangle'))
if(count==1):
   b=int(input('enter the breath value:'))
   h=int(input('enter the height value:'))
   if(b<0 and h<0):
      b=-b
      h=-h
   area=(0.5*b*h)
   print('area of the triangle is:')
   print(area)
elif(count==2):
   a=int(input('enter the side1 value:'))
   b=int(input('enter the side2 value:'))
   c=int(input('enter the side3 value:'))
   if(a<0 and b<0 and c<0):
      a=-a
      b=-b
      c=-c
   s=((a+b+c)/(2))
   area=((s*(s-a)*(s-b)*(s-c))**0.5)
   print('the area of the triangle is:')
   print(area)
else:
   print('invalid count value')

        
