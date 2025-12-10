
def main():
    N = int(input())
    A = list(map(int, input().split()))
    
    crr = A[0]
    
    for i in range(N):
        if crr <= i:
            print(i)
            return 0
        
        crr = max(crr, i+A[i])

    print(N)
    
if __name__ == "__main__":
    main()