#include <iostream>
using namespace std;

char calculateGrade(int attendance, int marks) {
    if (attendance < 50)
        return 'Z';
    else if (marks < 50)
        return 'F';
    else
        return 'A';
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int attendance, marks;
        cin >> attendance >> marks;

        char grade = calculateGrade(attendance, marks);
        cout << grade << endl;
    }

    return 0;
}
