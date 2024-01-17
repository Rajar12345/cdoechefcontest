#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int h, x, y1, y2, k;
        cin >> h >> x >> y1 >> y2 >> k;

        int p1 = ceil(h * 1.0 / x);
        int p2 = min((int)ceil(h * 1.0 / y1), k);
        if (p2 == k) p2 += max((int)ceil((h - k * y1) * 1.0 / y2), 0);

        cout << min(p1, p2) << "\n";
    }

    return 0;
}
