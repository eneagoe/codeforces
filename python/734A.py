n = int(input())
results = input()

a = results.count("A")
d = results.count("D")

if a == d:
    print("Friendship")
elif a > d:
    print("Anton")
else:
    print("Danik")
