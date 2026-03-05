a=int(input("enter the value1:"))
b=int(input("enter the value2:"))
def Swap(x,y):
    print("before the swapping values are:")
    print(x)
    print(y)
    x,y=y,x
    print("After the swapping values are:")
    print(x)
    print(y)
Swap(a,b)
