def permutation(n, arr):
    p = set(range(1, n + 1))
    prev = 0
    diff = 0

    for x in arr:
        if x - prev in p:
            p.remove(x - prev)
        else:
            diff = x - prev
        prev = x

    return len(p) <= 2 and (diff == 0 or sum(p) == diff)


t = int(input())

for _ in range(t):
    n = int(input())
    v = list(map(int, input().split()))

    if permutation(n, v):
        print("YES")
    else:
        print("NO")
