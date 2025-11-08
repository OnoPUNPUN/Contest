data = open(0).read().split()

index = 0
T = int(data[index])
index += 1

def score(arr):
    return sum(arr[i] != arr[i+1] for i in range(len(arr)-1))

def find_C(A):
    N = len(A)
    
    if N == 1:
        return [1 - A[0]]

    C = A[::-1]
    if C != A:
        return C

    C = A.copy()
    C[0] = 1 - C[0]
    if score(C) == score(A):
        return C
    
    C = A.copy()
    C[0] = 1 - C[0]
    C[-1] = 1 - C[-1]
    if score(C) == score(A):
        return C

    C = A.copy()
    C[0] = 1 - C[0]
    C[1] = 1 - C[1]
    return C

for _ in range(T):
    N = int(data[index])
    index += 1
    A = [int(x) for x in data[index:index + N]]
    index += N
    
    C = find_C(A)
    print(' '.join(map(str, C)))