#include <iostream>

using namespace std;

int main() {
    int numTestCases;
    cin >> numTestCases;

    while (numTestCases-- > 0) {
        int value1, value2;
        cin >> value1 >> value2;

        int difference = value1 - value2;

        if (difference >= 2) {
            cout << 0 << endl;
        } else if (difference == 1) {
            cout << 1 << endl;
        } else if (difference == 0) {
            cout << 0 << endl;
        } else {  // difference is -1 or less
            cout << value2 / (value1 - 1) << endl;
        }
    }

    return 0;
}
