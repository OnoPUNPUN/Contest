a, b, c = map(int, input().split())

print("Yes" if len({a, b, c}) < 3 else "No")