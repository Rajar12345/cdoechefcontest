#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int X; // Chef's income per hour
    cin >> X; // Taking input for Chef's income

    int minimum_wage = 11; // Minimum wage in Chefland

    // Comparing Chef's income with minimum wage
    if (X > minimum_wage) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;

}
