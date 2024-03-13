#include <iostream>
#include <string>

using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int n, k; // length of string and number of allowed changes
        string s; // input string
        cin >> n >> k >> s;

        int cnt = 0; // count of '1's in the string

        // Count the number of '1's in the string
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                cnt++;
            }
        }

        // If the count of '1's is greater than the allowed changes
        if (cnt > k) {
            // Change '1's to '0's until the allowed changes are exhausted
            for (int i = 0; i < n; i++) {
                if (s[i] == '1' && k > 0) {
                    s[i] = '0';
                    k--;
                }
            }
            cout << s << endl;
        } else {
            // If the count of '1's is less than or equal to the allowed changes
            // Print '0' for (n - k) times
            for (int i = 0; i < (n - k); i++) {
                cout << 0;
            }
            cout << endl;
        }
    }

    return 0;
}
