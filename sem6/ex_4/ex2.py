f=int(input("enter the fact value:"))
def fact_num(x):
    if(x==1):
        return 1
    elif(x>1):
        return x*fact_num(x-1)
    else:
        print("factorial for the negative value doesn't exist")
a=fact_num(f)
print(a)
