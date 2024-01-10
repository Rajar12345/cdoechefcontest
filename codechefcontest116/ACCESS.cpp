#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    int testCases;
    cin >> testCases; // Number of test cases

    while (testCases--) {
        int length, swipes;
        cin >> length >> swipes; // Length of binary string and number of swipes left
        std::string binaryStr;
        cin >> binaryStr; // Binary string

        int remainingSwipes = 0;
        bool valid = true;

        for (int i = 0; i < length; ++i) {
            if (binaryStr[i] == '0') {
                remainingSwipes--;
            } else {
                remainingSwipes = swipes;
            }

            if (remainingSwipes < 0) {
                valid = false;
                break;
            }
        }

        cout << (valid ? "YES" : "NO") << endl;
    }

    return 0;
}
