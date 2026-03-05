def add_suffix(s):
    if len(s) < 3:
        return s
    if s.endswith('ing'):
        return s + 'ly'
    else:
        return s + 'ing'
print(add_suffix(input("enter the string value: ")))
