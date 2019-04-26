n = int(input())
v = list(map(int, input().split()))

s = ''

if v[0] > v[-1]:
    s = s + 'R'
    c = v.pop()
else:
    s = s + 'L'
    c = v.pop(0)

while v and (v[0] > c or v[-1] > c):
    if v[0] <= c:
        if v[-1] > c:
            s = s + 'R'
            c = v.pop()
        else:
            break
    elif v[0] > c:
        if v[0] > v[-1] and v[-1] > c:
            s = s + 'R'
            c = v.pop()
        else:
            s = s + 'L'
            c = v.pop(0)
    else:
        break

print(len(s))
print(s)
