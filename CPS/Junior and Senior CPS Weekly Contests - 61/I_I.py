def solve():
    t = int(input())
    for _ in range(t):
        n = int(input())
        found = False
        for a in range(2, int(n ** (1/3)) + 2):
            if n % a != 0:
                continue
            rem = n // a
            for b in range(a+1, int(rem ** 0.5) + 2):
                if rem % b != 0:
                    continue
                c = rem // b
                if c > b and c != a and c != b and a != b and a != c and b != c and c >= 2:
                    print("YES")
                    print(a, b, c)
                    found = True
                    break
            if found:
                break
        if not found:
            print("NO")
