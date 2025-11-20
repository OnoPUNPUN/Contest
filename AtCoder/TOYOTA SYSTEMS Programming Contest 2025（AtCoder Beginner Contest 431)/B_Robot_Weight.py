import sys

input = sys.stdin.read
data = input().split()

idx = 0
X = int(data[idx]); idx += 1
N = int(data[idx]); idx += 1

W = [0] * (N + 1)
for i in range(1, N + 1):
    W[i] = int(data[idx]); idx += 1

Q = int(data[idx]); idx += 1

attached = [False] * (N + 1)

current = X

answers = []
for _ in range(Q):
    P = int(data[idx]); idx += 1
    if attached[P]:
        current -= W[P]
        attached[P] = False
    else:
        current += W[P]
        attached[P] = True
    answers.append(str(current))

print('\n'.join(answers))