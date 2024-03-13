#include <iostream>
#include <vector>
using namespace std;

void gameOfBuckets() {
    int rounds;
    cin >> rounds;
    while (rounds--) {
        int buckets;
        cin >> buckets;
        vector<int> ballCounts;
        int ones = 0;
        int twos = 0;
        int more = 0;
        for (int i = 0; i < buckets; i++) {
            int ball;
            cin >> ball;
            if (ball == 1)
                ones++;
            else {
                if (ball > 2) {
                    more += ball - 2;
                    twos++;
                } else
                    twos++;
            }
        }
        int alicePoints = 0, bobPoints = 0;
        alicePoints += (ones + 1) / 2;
        bobPoints += ones / 2;
        bool flag = false;
        flag = ones % 2;
        if (flag) {
            if (more % 2 == 1)
                flag = false;
        } else {
            if (more % 2 == 1)
                flag = true;
        }
        if (flag) {
            alicePoints += twos;
        } else
            bobPoints += twos;
        if (alicePoints > bobPoints)
            cout << "Alice" << endl;
        else if (bobPoints > alicePoints)
            cout << "Bob" << endl;
        else
            cout << "Draw" << endl;
    }
}

int main() {
    gameOfBuckets();
    return 0;
}
