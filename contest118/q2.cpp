#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        float p, l;
        cin >> p >> l;

        int rate = (l / p) * 100;

        if (rate >= 75) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
