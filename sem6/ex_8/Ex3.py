S1={int(i) for i in set(input("Enter set 1: ").split())}
S2={int(i) for i in set(input("Enter set 2: ").split())}
print("Interaction:",S1.intersection(S2))
print("Union:",S1.union(S2))
print("Difference:",S1.difference(S2))
