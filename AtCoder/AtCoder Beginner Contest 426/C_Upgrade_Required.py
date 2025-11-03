n, q = map(int, input().split())

v = [i+ 1  for i in range(n)]

for _ in range(q):
    x, y = map(int, input().split())
    up  = 0
    for i in range(n):
        if v[i] <= x:
            if v[i] != y:
                up += 1
                v[i] = y
                
    print(up)