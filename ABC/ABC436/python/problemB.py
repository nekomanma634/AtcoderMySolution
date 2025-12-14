
def AddMod(a,b,N):
    return ((a % N + b % N) % N)

def MinMod(a,b,N):
    return (a % N - (b * -1) % N + N) % N

N = int(input())
A = [[0] * N for _ in range(N)]

r = int(0)
c = int((N-1)/2)
k = int(1)

A[r][c] = k

for i in range(N*N-1):
    rIdx = MinMod(r, -1, N)
    cIdx = AddMod(c, 1, N)

    if(A[rIdx][cIdx] == 0):
        r = rIdx
        c = cIdx
        k = k + 1
        A[rIdx][cIdx] = k
    else:
        r = AddMod(r, 1, N)
        k = k + 1
        A[r][c] = k

for i in A:
    for j in i:
        print(j, end=' ')
    print()