def sort_ascending(data):
    items = list(data.items())
    def get_value(item):
        return item[1]
    items.sort(key=get_value)
    return dict(items)
def sort_descending(data):
    items = list(data.items())
    def get_value(item):
        return item[1]
    items.sort(key=get_value, reverse=True)
    return dict(items)
My_dict={}
a=int(input("enter the value of the dict: "))
for i in range(a):
    value=int(input("enter value of dict : "))
    key=input("enter the key value of dict")
    My_dict[key]=value
sorted_ascend = sort_ascending(My_dict)
print("Sorted by Ascending order",sorted_ascend)
new_key=input("enter the new key")
new_value=int(input("enter the new value"))
My_dict[new_key]=new_value
sorted_descend=sort_descending(My_dict)
print("Sorted by Descending order",sorted_descend)
