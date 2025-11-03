t = int(input())
for _ in range(t):
    n, c = map(int, input().split())
    a = list(map(int, input().split()))
    b = [0] * 101
    for x in a:
        b[x] += 1
    r = 0
    for y in b:
        if y > 0:
            r += min(y, c)
    print(r)
