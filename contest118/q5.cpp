#include <iostream>

int main() {
    int t;
    std::cin >> t;

    for (int j = 0; j < t; ++j) {
        int p;
        std::cin >> p;

        int z = 0;
        int zz = 0;
        int bec = 0;

        for (int i = 29; i >= 0; --i) {
            if ((p >> i) & 1) {
                if (bec) {
                    z -= (1 << i);
                    zz += (1 << i);
                } else {
                    z += (1 << i);
                    bec = 1;
                }
            }
        }

        std::cout << zz << " " << z + zz << std::endl;
    }

    return 0;
}
