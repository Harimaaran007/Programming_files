def interest(pri,year,age):
   if (age>60):
      rate = 0.12
      print("the simple interest is: ",((pri*rate*year)/100))
   else:
      rate = 0.1
      print("the simple interest is: ",((pri*rate*year)/100))
pri=(int(input("enter the princle amount")))
age=(int(input("enter your age")))
year=(int(input("enter the year")))
interest(pri,year,age)

