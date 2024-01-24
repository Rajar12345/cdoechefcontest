def power(a, b):
    result = 1
    while b:
        if b & 1:
            result *= a
            # result = result % mod
        a *= a
        # a = a % mod
        b //= 2
    return result

def int_to_bin(n):
    x = ""
    while n != 0:
        if n & 1:
            x += '1'
        else:
            x += '0'
        n >>= 1
    return x[::-1]

def solve():
    x = int(input())
    bin_str = int_to_bin(x)
    hue = "11"
    ptr = 0
    pos = 0
    for i in range(len(bin_str)):
        if bin_str[i] == hue[ptr]:
            ptr += 1
            if ptr == 2:
                pos = i + 1
                break

    if ptr <= 1:
        print(1)
        return
    
    cnt = 0
    for i in range(pos, len(bin_str)):
        if bin_str[i] == '0':
            cnt += 1
    
    print(power(2, cnt))

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
