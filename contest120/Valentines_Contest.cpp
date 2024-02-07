#include <iostream>

int main() {
    int N;
    std::cin >> N;

    if (N == 121) {
        std::cout << "Likely" << std::endl;
    } else {
        std::cout << "Unlikely" << std::endl;
    }

    return 0;
}
