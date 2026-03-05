text = input("Enter a string: ")
digits = 0
alphabets = 0
spaces = 0
for char in text:
    if char.isdigit():
        digits += 1
    elif char.isalpha():
        alphabets += 1
    elif char.isspace():
        spaces += 1
print(f"Digits: {digits}")
print(f"Alphabets: {alphabets}")
print(f"Spaces: {spaces}")
