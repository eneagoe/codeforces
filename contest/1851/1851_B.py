def can_sort(array):
    odds, odds_positions = [], []
    evens, evens_positions = [], []

    for i, x in enumerate(array):
        if x % 2 == 0:
            evens.append(x)
            evens_positions.append(i)
        else:
            odds.append(x)
            odds_positions.append(i)

    odds.sort()
    odds_positions.sort()
    evens.sort()
    evens_positions.sort()

    n = len(odds)
    m = len(evens)

    i, j = 0, 0

    while i < n and j < m:
        if odds[i] < evens[j]:
            if odds_positions[i] > evens_positions[j]:
                return False
            i += 1
        else:
            if evens_positions[j] > odds_positions[i]:
                return False
            j += 1

    return True


t = int(input())

for _ in range(t):
    n = int(input())
    v = list(map(int, input().split()))

    if can_sort(v):
        print("YES")
    else:
        print("NO")
