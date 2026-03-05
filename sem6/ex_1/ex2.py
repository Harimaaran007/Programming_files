a=int(input('enter the X square value:'))
b=int(input('enter the X value:'))
c=int(input('enter the constand:'))
d=((b*b)-4*a*c)
if(d==0):
   e=((-b)/(2*a))
   print('roots are real and same')
   print(e)
elif(d>0):
   print('roots are real and distinct')
   f=((-b+(d**0.5))/(2*a))
   g=((-b-(d**0.5))/(2*a))
   print(f)
   print(g)
else:
   d=-d
   print('roots are real and complex')
   real=(-b/2*a)
   comp=((d**0.5)/(2*a))
   print(real)
   print(comp)

