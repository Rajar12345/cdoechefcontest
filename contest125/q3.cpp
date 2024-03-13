#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int MOD = 1000000007;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        
        string S;
        cin >> S;
        
        int ones = 0;
        int zero = 0;
        int cnt = 0;
        
        for (char c : S) {
            if (c == '1') {
                cnt = 0;
                ones++;
            } else {
                cnt++;
                zero = max(zero, cnt);
            }
        }
        
        cout << (ones + zero) << endl;
    }
    
    return 0;
}
