#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases; // Number of test cases
    
    while (test_cases--) {
        int count = 0;
        bool has_hattrick = false;
        
        for (int i = 0; i < 6; ++i) {
            string result;
            cin >> result;
            
            if (result == "W") {
                count++;
            } else {
                count = 0;
            }
            
            if (count == 3) {
                has_hattrick = true;
            }
        }
        
        cout << (has_hattrick ? "YES" : "NO") << endl;
    }
    
    return 0;
}
