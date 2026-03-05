def value(a,d):
   if a in d:
      print("The element is exist in the set")
   else:
      print("The element is doesn't exist in the set")
Myset=input("Enter the element of the set ")
setvalue=set(Myset.split())
print("The set values are: ",setvalue)
print("The length of the set is: ",len(setvalue))
a=input("enter the element to cheak in the set:")
value(a,setvalue)
print("Iteration over the set is:")
for i in setvalue:
   print(i)
