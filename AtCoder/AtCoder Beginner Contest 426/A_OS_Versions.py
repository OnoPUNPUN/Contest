
versions = {
    "Ocelot": 0,
    "Serval": 1,
    "Lynx": 2
}

x, y = input().split()

if versions[x] >= versions[y]:
    print("Yes")
else:
    print("No")