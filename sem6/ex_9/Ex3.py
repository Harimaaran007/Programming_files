def count_chars(s):
    counts = {}
    for char in s:
        if char in counts:
            counts[char] += 1
        else:
            counts[char] = 1
    return counts
input_string = input("enter the string: ")
print(count_chars(input_string))
