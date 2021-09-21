n = int(input())

p = -1 if n % 2 else 1

print((2 * p * n + p - 1) // 4)
