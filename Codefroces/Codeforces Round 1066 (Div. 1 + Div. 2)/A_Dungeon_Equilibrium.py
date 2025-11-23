'''
People change, and as the years go by, 
so do our environments. I think it's alright for there not to be a 
"proper" way of living. But I do believe that instead of trying to 
be satisfied on just one answer and blocking out the rest, searching 
for more answers, despite the pain 
they may bring, is a much more honest way of living.
'''

t = int(input())
for _ in range(t):
    n = int(input())
    if n == 0:
        print(0)
        continue
    a = list(map(int, input().split()))
    f = {}
    for v in a:
        f[v] = f.get(v, 0) + 1
    ok = True
    for k, c in f.items():
        if k != c:
            ok = False
            break
    if ok:
        print(0)
        continue
    s = 0
    for k, c in f.items():
        if c < k:
            s += c
        else:
            s += c - k
    print(s)