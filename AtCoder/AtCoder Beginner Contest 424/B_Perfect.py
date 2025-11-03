a = []
b = []

n,m,k = map(int, input().split())

for _ in range(k):
    inA, inB = map(int, input().split())
    a.append(inA)
    b.append(inB)
    
for i in range(k):
    count = 0
    for j in range(i + 1):
        if a[i] == a[j]:
            count = count + 1
            if count == m:
                print(str(a[i]), end=' ')
    