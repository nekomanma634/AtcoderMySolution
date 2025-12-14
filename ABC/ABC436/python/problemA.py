
N = int(input())
S = str(input())

iN = N-len(S)

for i in range(iN):
    S = "o" + S
    
print(S)