def solve():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    
    p = set(a)

    m = 0
    for i in range(k):
        if i not in p:
            m += 1
    kc = a.count(k)
    
    
    return max(m, kc)

t = int(input())
for _ in range(t):
    result = solve()
    print(result)