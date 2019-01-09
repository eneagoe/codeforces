n = int(input())
m = []

for i in range(n):
    m.append(list(map(int, input().split())))

s = 0
middle = (n - 1) // 2

for i in range(n):
    s += m[i][i] + m[i][-(i + 1)] + m[i][middle]

s -= 2 * m[middle][middle]
s += sum(m[middle])
s -= m[middle][middle]

print(s)
