t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    s = sum(a)
    odds = [x for x in a if x % 2]
    if not odds:
        print(0)
    elif s % 2:
        print(s)
    else:
        print(s - min(odds))
