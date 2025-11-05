t = int(input())

while t > 0:
    
    w, p, k = map(int, input().split())
    
    total = 0
    wood = min(w, k)
    
    total = wood * 2
    
    re = k - wood
    
    if re > 0:
        pla = min(p, re)
        
        total += pla * 1
        
    print(total)
    
    t -= 1