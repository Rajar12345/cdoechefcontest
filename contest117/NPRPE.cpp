#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int array_size;
        cin >> array_size;

        vector<int> numbers(array_size);
        for (int &num : numbers) {
            cin >> num;
        }

        // Check if the array size is less than or equal to 2
        if (array_size <= 2) {
            cout << "-1\n";
        } else {
            // Find the positions of 1 and 3 in the array
            auto position_one = find(numbers.begin(), numbers.end(), 1);
            auto position_three = find(numbers.begin(), numbers.end(), 3);

            // Swap the values at positions of 1 and 3
            swap(*position_one, *position_three);

            // Print the modified array
            for (int num : numbers) {
                cout << num << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
