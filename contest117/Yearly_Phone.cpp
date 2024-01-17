#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int current_year;
    std::cin >> current_year;

    // Extract the last two digits of the current year
    int last_two_digits = current_year % 100;

    // Construct the phone model name
    std::cout << "K" << std::setw(2) << std::setfill('0') << last_two_digits << std::endl;

    return 0;
}
