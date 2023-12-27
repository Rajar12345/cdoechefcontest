#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string temp;
        cin >> temp;
        reverse(temp.begin(), temp.end());
        string ans;
        for (int i = 0; i < n / 2 + 1; i++) {
            if (temp[i] == 'R') ans.push_back('P');
            else if (temp[i] == 'P') ans.push_back('S');
            else ans.push_back('R');
        }
        int cnt = 0, lol = 0;
        for (int i = n / 2 + 1; i < n; i++) {
            if (temp[i] == 'R') cnt++;
            ans.push_back('P');
            lol++;
        }
        reverse(ans.begin(), ans.end());
        for (int i = lol; i < n; i++) {
            if (cnt && ans[i] != 'P') ans[i] = 'P', cnt--;
        }
        cout << ans << endl;
    }
    return 0;
}
