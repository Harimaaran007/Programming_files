S1={int(i) for i in set(input("Enter set 1: ").split())}
S2={int(i) for i in set(input("Enter set 2: ").split())}
if (S1 < S2):
    print("S1 is subset of S2")
elif(S2 < S1):
    print("S2 is subset of S1")
else:
    print("There is no subsets on each set")
