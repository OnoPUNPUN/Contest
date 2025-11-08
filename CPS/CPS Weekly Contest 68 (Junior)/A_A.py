t = int(input())

while t > 0:
    x = int(input())
    
    if x % 2 == 0 and x % 7 == 0:
        print("Alice")
    elif x % 2 != 0 and x % 9 == 0:
        print("Bob")
    else:
        print("Charlie")
    t -= 1