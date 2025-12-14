import sys

input = sys.stdin.readline

def main():
    try:
        line = input().split()
        if not line:
            return
        N = int(line[0])
        M = int(line[1])
    except ValueError:
        return

    R = [0] * M
    C = [0] * M
    for i in range(M):
        r_in, c_in = map(int, input().split())
        R[i] = r_in - 1
        C[i] = c_in - 1

    A = set()
    res = 0

    for i in range(M):
        r = R[i]
        c = C[i]

        d = r + c * N
        e = (r + 1) + c * N
        f = r + (c + 1) * N
        g = (r + 1) + (c + 1) * N

        dd = r + (c - 1) * N
        ee = (r + 1) + (c - 1) * N

        if d not in A and e not in A and f not in A and g not in A:
            A.add(d)
            A.add(e)
            A.add(f)
            A.add(g)
            res += 1
        
        elif dd not in A and ee not in A and f not in A and g not in A:
            A.add(dd)
            A.add(ee)
            A.add(f)
            A.add(g)
            res += 1

    print(res)

if __name__ == "__main__":
    main()