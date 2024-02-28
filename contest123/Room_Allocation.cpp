#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> people(N);
        for (int i = 0; i < N; i++) {
            cin >> people[i];
        }

        int totalRooms = 0;
        for (int i = 0; i < N; i++) {
            totalRooms += (people[i] + 1) / 2;
        }

        cout << totalRooms << endl;
    }

    return 0;
}
