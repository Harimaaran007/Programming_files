a = list(map(int,input("enter the elements of the list:").split()))
print("the element in the list are: ",a)
elt = int(input("the element to be searched is: "))
list_A = []
for index,value in enumerate(a):
   if value == elt+1:
      list_A.append(index)
print("the no of the times the element found is = ",len(list_A),"\n the element is found in the indices = ",list_A)
