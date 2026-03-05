a = int(input("enter the integer:"))
b = int(input("enter the step:"))
leng = [a]
c = 1
for i in leng:
   if c <10:
      leng.append(a+b)
      a=a+b
      c+=1
print("the list of value:",leng)
leng.reverse()
print("the list of reverse value: ",leng)
