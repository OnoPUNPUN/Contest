def count_safe_birds(n, s):
    
    first_one_seen = False
    
    safe_birds = 0
    
    for ch in s:
        if ch == '1':
            first_one_seen = True
            
        elif not first_one_seen:
            safe_birds += 1
    
    return safe_birds


t = int(input())

for _ in range(t):
    n = int(input())
    
    s = input().strip()
    
    result = count_safe_birds(n, s)
    
    print(result)
