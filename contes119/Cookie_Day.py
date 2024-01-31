def solve():
    n, m = map(int, input().split())
    nm = list (map(int, input().split())) # Assuming values for nm

    
    ct = 0
    res = float('inf')
    
    for a in nm:
        if a >= m:
            ct = 1
            res = min(res, a % m)
    if ct == 0:
        print(-1)
        return

    print(res)

def main():
    t = int(input())  # Assuming one test case
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
