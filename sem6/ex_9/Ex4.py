def concat_and_swap(s1, s2):
    if len(s1) < 2 or len(s2) < 2:
        return "Strings too short for swap"
    new_s1 = s2[:2] + s1[2:]
    new_s2 = s1[:2] + s2[2:]
    concatenated = new_s1 + " " + new_s2
    return concatenated
string1 = input("enter the string1 value: ")
string2 = input("enter the string2 value: ")
print(concat_and_swap(string1, string2))
