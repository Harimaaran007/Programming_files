set_variable1 = set([1,2,3,4,5,6,7,8,9,10])
my_list = list(set_variable1)
print("the odd no is = ",my_list[::2])
for num in range(1,11):
   for i in range(2,num):
      if num%i == 0:
	  break
      else:
	 print(num)
	  break
