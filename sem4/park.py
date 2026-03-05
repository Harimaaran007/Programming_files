vehicle=str(input("enter the vehicle:"))
b=int(input("enter the entering hrs:"))
c=int(input("enter the entering minutes:"))
d=int(input("enter the leaving hrs:"))
e=int(input("enter the leaving min:"))
enter_hrs = (b*60)
leave_hrs = (d*60)
diff_hrs = (d-b)
diff_mins = (e-c)
diff_time = (diff_hrs+diff_mins)
if(diff_time<=(3*60)):
   if(vehicle=="truck"or vehicle=="bus"):
      print("your charge is:20")
   elif(vehicle=="car"):
      print("your charge is:10")
   elif(vehicle=="cycle"):
      print("your charge is:5")
elif(diff_time>(3*60)):
   if(vehicle=="truck" or vehicle=="bus"):
      print("your charge is:30")
   elif(vehicle=="car"):
      print("your charge is:20")
   elif(vehicle=="cycle"):
      print("your charge is:10")
else:
   print("enter the valid vehicle")
