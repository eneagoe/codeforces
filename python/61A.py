a = list(input())
b = list(input())

result = [int(a[i]) ^ int(b[i]) for i in range(len(a))]

print("".join(map(str, result)))
