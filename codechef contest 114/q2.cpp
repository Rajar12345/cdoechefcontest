#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int n, m, k;
        cin >> n >> m >> k;

        int area = n * m;
        int half_cost = k / 2;

        cout << static_cast<int>(half_cost / area) << endl;
    }

    return 0;
}
