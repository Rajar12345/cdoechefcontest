#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int idx = 0;
        for (idx = 0; idx < n - 1; idx++) {
            if (s[idx] > s[idx + 1]) break;
        }

        for (int i = 0; i < n; i++) {
            if (idx != i) {
                cout << s[i];
            }
        }
        cout << '\n';
    }
}
