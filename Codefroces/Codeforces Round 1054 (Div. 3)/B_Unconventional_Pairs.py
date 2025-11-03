
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    maxdiff = 0
    for idx in range(0, n, 2):
        maxdiff = max(maxdiff, abs(a[idx] - a[idx + 1]))
    return maxdiff


t = int(input())
for _ in range(t):
    print(solve())