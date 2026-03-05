def get_dictionary(n):
    d = {}
    for i in range(n):
        key = input(f"Enter key {i+1}: ")
        value = input(f"Enter value for {key}: ")
        d[key] = value
    return d
n1 = int(input("Enter number of elements for first dictionary: "))
print("\nEnter elements for first dictionary")
dict1 = get_dictionary(n1)
n2 = int(input("\nEnter number of elements for second dictionary: "))
print("\nEnter elements for second dictionary")
dict2 = get_dictionary(n2)
dict3 = dict1.copy()  
dict3.update(dict2)  
print("\nConcatenated Dictionary ")
print(dict3)
check_key = input("\nEnter a key to check: ")
if check_key in dict3:
    print("Key exists in dictionary.")
else:
    print("Key does not exist in dictionary.")
