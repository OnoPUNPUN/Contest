'''…If we see shooting stars, what would you wish for, Punpun?
Wishing upon shooting stars doesn’t make them come true.
Right, but what if. What would you wish if they did…?
I’d wish for shooting stars to disappear forever.'''


t = int(input())

for _ in range(t):
    n = int(input())
    
    
    if n % 2 != 0:
        print(0)
    else:
        
        coutn = 0
        cows = 0
        
        while cows * 4 <= n:
            coutn += 1
            cows += 1
        print(coutn)