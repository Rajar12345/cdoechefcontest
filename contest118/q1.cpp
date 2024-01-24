#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a, b, c;
    cin >> a >> b >> c;

    // Calculate total sales for Chef and Chefina
    int chefSales = a * c;
    int chefinaSales = b * c;

    // Output the maximum sales
    cout << max(chefSales, chefinaSales) << endl;

}
