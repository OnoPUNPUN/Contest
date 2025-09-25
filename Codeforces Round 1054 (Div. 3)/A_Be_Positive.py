def solve():
    n = int(input())
    a = list(map(int, input().split()))
    op = 0
    neg = []

    for num in a:
        if num < 0:
            neg.append(1 - num)
        elif num == 0:
            op += 1

    if len(neg) % 2 == 1:
        neg.sort()
        op += neg[0]
    return op

t = int(input())
for _ in range(t):
    r = solve()
    print(r)