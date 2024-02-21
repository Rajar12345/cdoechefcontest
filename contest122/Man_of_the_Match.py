# Function to calculate total points for a player
def calculate_points(runs, wickets):
    return runs + (wickets * 20)

# Number of test cases
T = int(input())

# Processing each test case
for test_case in range(T):
    max_points = 0
    man_of_the_match = 0
    
    # Processing each player
    for player_index in range(1, 23):
        runs, wickets = map(int, input().split())
        
        # Calculate total points for the player
        points = calculate_points(runs, wickets)
        
        # Check if the current player has maximum points
        if points > max_points:
            max_points = points
            man_of_the_match = player_index
    
    # Output the index of the player with maximum points
    print(man_of_the_match)
