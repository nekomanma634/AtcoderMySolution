
def yakusu(A, i, j):
    sum = 0

    for k in range(i, j+1):
        sum += A[k]

    for k in range(i, j+1):
        if(sum % A[k] == 0):
            return True
        
    return False

def main():
    N = int(input())
    A = list(map(int, input().split()))

    res = 0

    for i in range(N):
        for j in range(i,N):
            if((j > i) and (yakusu(A,i,j) == False)):
                res += 1

    print(res)

if __name__ == "__main__":
    main()