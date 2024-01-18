#include <bits/stdc++.h>
using namespace std;
typedef long long llong;

int main() {
    llong test_cases;
    cin >> test_cases;
    while (test_cases--) {
        llong array_size;
        cin >> array_size;
        llong array[array_size];

        for (int index = 0; index < array_size; index++) {
            cin >> array[index];
        }

        llong left[array_size], right[array_size];
        map<int, int> mapping;
        mapping[0] = 1;
        mapping[array_size - 1] = -1;
        for (int index = 1; index < array_size - 1; index++) {
            

            llong left_diff = abs(array[index] - array[index - 1]);
            llong right_diff = abs(array[index] - array[index + 1]);

            if (left_diff < right_diff) {
                mapping[index] = -1;
            } else {
                mapping[index] = 1;
            }
        }

        left[0] = 0;

        for (int index = 1; index < array_size; index++) {
            if (mapping[index] == -1) {
                left[index] = 1 + left[index - 1];
            } else {
                left[index] = left[index - 1] + abs(array[index] - array[index - 1]);
            }
        }

        right[array_size - 1] = 0;

        for (int index = array_size - 2; index >= 0; index--) {

            if (mapping[index] == 1) {
                right[index] = 1 + right[index + 1];
            }
            else{
                right[index] = right[index + 1] + abs(array[index] - array[index + 1]);

            }
        }

        llong queries;
        cin >> queries;

        while (queries--) {
            llong x, y;
            cin >> x >> y;

            if (x == y) {
                cout << 0 << endl;
            } else {
                if (y > x) {
                    cout << right[x - 1] - right[y - 1] << endl;
                } else {
                    cout << left[x - 1] - left[y - 1] << endl;
                }
            }
        }
    }

    return 0;
}
