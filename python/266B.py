n, t = map(int, input().split())
s = list(input())

for _ in range(t):
    i = n - 1
    while i > 0:
        if s[i] == "G" and s[i - 1] == "B":
            s[i], s[i - 1] = s[i - 1], s[i]
            i -= 1
        i -= 1

print("".join(s))
