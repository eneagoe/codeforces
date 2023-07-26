t = int(input())

for i in range(t):
    n, m, k, h = map(int, input().split())
    heights = list(map(int, input().split()))

    count = 0
    for x in heights:
        diff = abs(x - h)

        if diff % k:
            continue

        if 1 <= diff // k <= m - 1:
            count += 1

    print(count)
