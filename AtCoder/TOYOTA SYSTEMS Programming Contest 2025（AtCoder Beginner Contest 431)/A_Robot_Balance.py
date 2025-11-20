h, b = map(int, input().split())

if h <= b:
    print(0)
elif h > b:
    print(h - b)