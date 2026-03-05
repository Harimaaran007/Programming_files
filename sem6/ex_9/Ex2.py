def count_cases(s):
    upper_count = 0
    lower_count = 0
    for char in s:
        if char.isupper():
            upper_count += 1
        elif char.islower():
            lower_count += 1
    return upper_count, lower_count
input_string = input("enter the string: ")
upper, lower = count_cases(input_string)
print("uppercase letter are: ",upper)
print("lowercase letter are: ",lower)
