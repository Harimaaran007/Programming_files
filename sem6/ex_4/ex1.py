a=int(input("enter the first element"))
b=int(input("enter the second element"))
c=int(input("enter the third element"))
def maxi(val1,val2,val3):
   if(val1>val2 and val1>val3):
      print("The maximum value is value1")
      print(val1)
   elif(val2>val3):
      print("The maximum value is value2")
      print(val2)
   else:
      print("The maximum value is value3")
      print(val3)
maxi(a,b,c)

