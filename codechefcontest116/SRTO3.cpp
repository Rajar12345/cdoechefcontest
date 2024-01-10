#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define pb push_back

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

void hk_solution() {
    long long n, m;
    cin >> n >> m;
    vector<long long> v(n), a(m);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (long long i = 0; i < m; i++) {
        cin >> a[i];
    }
    long long mx = *max_element(a.begin(), a.end());
    if (mx >= n) {
        mx = 0;
    } else {
        mx = n - mx;
    }
    sort(v.begin() + mx, v.end());
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        hk_solution();
    }
    return 0;
}
