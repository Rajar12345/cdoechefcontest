#include <iostream>
using namespace std;

string checkFine(int speed) {
    if (speed > 40)
        return "YES";
    else
        return "NO";
}

int main() {
    int speed;
    cin >> speed;
    
    string result = checkFine(speed);
    cout << result << endl;

    return 0;
}
