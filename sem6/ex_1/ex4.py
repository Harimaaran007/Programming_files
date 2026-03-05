p=float(input('enter the principle amount:'))
n=float(input('enter the no of the year:'))
r=float(input('enter the rate of interest:'))
f=float(input('enter the frequency:'))
SI=((p*n*r)/100)
A=(((1+((r*f)/100)))**(n*f))*p
CI=A-p
print('simple interest value is ')
print(SI)
print('compound interest value is')
print(CI)
