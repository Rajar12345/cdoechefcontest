#include <iostream>
#include <vector>

using namespace std;

vector<int> subsetGCD(int N, int K) {
    // Iterate from N down to 1 to find the largest possible divisor
    for (int gcd = N; gcd > 0; --gcd) {
        vector<int> multiples;
        
        // Check for multiples of 'gcd' up to N
        for (int i = gcd; i <= N; i += gcd) {
            multiples.push_back(i);
            
            // If we found enough multiples, return them
            if (multiples.size() == K) {
                return multiples;
            }
        }
    }
    
    // In case no subset is found, which is unlikely
    return vector<int>();
}

int main() {
    int T, N, K;
    cin >> T; // Reading number of test cases
    
    while (T--) {
        cin >> N >> K; // Reading N and K for each test case
        
        vector<int> subset = subsetGCD(N, K);
        
        // Output the subset
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}
