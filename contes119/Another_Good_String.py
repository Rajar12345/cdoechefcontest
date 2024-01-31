def longest_beautiful_substring(n, s, queries):

    
    ct = 0  # Current ct of consecutive identical characters
    mxc = 0  # Maximum ct found so far
    res = []

    # Process the initial string
    for i in range(n):
        if i > 0 and s[i] == s[i - 1]:
            ct += 1
        else:
            ct = 1
        mxc = max(mxc, ct)
    res.append(mxc)

    # Process the queries
    for q in queries:
        s += q  # Append the query to the string
        if s[-1] == s[-2]:  # Check if the last two characters are the same
            ct += 1
        else:
            
            ct = 1
        mxc = max(mxc, ct)
        res.append(mxc)

    return res

# Input
t = int(input())
for _ in range(t):
    n, q = map(int, input().split())
    s = input().strip()
    queries = [input().strip() for _ in range(q)]

# Output
    res = longest_beautiful_substring(n, s, queries)
    print(" ".join(map(str, res)))
