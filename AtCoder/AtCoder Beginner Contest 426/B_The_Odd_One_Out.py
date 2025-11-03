s = input().strip()

for char in set(s):
    if s.count(char) == 1:
        print(char)
        break