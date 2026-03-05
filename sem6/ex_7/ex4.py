n1 = int(input("Enter number of elements for first dictionary: "))
dict1 = {}
print("Enter key-value pairs for first dictionary:")
for i in range(n1):
    key = input(f"Enter key {i+1}: ")
    value = input(f"Enter value for {key}: ")
    dict1[key] = value
n2 = int(input("\nEnter number of elements for second dictionary: "))
dict2 = {}
print("Enter key-value pairs for second dictionary:")
for i in range(n2):
    key = input(f"Enter key {i+1}: ")
    value = input(f"Enter value for {key}: ")
    dict2[key] = value
print("\nFirst Dictionary:", dict1)                                                 
print("Second Dictionary:", dict2)
#merged_pipe = dict1 | dict2
#print("\nMerged using | operator:")
#print(merged_pipe)
merged_unpack = {**dict1, **dict2}
print("\nMerged using dictionary unpacking:")
print(merged_unpack)
merged_update = dict1.copy()
merged_update.update(dict2)
print("\nMerged using update() method:")
print(merged_update)
merged_loop = dict1.copy()
for key, value in dict2.items():
    merged_loop[key] = value
print("\nMerged using for loop:")
print(merged_loop)
