'''People change, and as the years go by, so do our environments. 
I think it's alright for there not to be a "proper" way of living. 
But I do believe that instead of trying to be satisfied on just one answer and blocking out the rest, 
searching for more answers, despite the pain they may bring, is a much more honest way of living.'''

import sys

def solve():
    input = sys.stdin.read
    data = input().split()
    
    iterator = iter(data)
    t = int(next(iterator))
    
    results = []
    
    for _ in range(t):
        n = int(next(iterator))
        a = []
        for _ in range(n):
            a.append(int(next(iterator)))
        

        if a[0] == -1 and a[-1] == -1:
            a[0] = 0
            a[-1] = 0
        elif a[0] == -1:
            a[0] = a[-1]
        elif a[-1] == -1:
            a[-1] = a[0]
            
        for i in range(1, n-1):
            if a[i] == -1:
                a[i] = 0

        cost = abs(a[-1] - a[0])
        
        results.append(str(cost))
        results.append(" ".join(map(str, a)))

    print("\n".join(results))

if __name__ == "__main__":
    solve()