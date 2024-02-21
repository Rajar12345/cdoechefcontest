
def is_good_problem(scores):
    return all(score > 4 for score in scores)

# Number of test cases
T = int(input("Enter the number of test cases: "))

# Processing each test case
for _ in range(T):
    # Number of judges
    N = int(input("Enter the number of judges: "))
    
    # Scores given by judges
    scores = list(map(int, input("Enter scores separated by space: ").split()))
    
    # Output
    if is_good_problem(scores):
        print("YES")
    else:
        print("NO")
