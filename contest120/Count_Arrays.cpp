#include <iostream> 
#include <algorithm> 
#include <numeric>
#include <set>
#include <queue>
#include <climits>
#include <deque>
#include <map>
#include <cmath>
#include <vector>
#include <cstring>
#include <iomanip>
#include <ctype.h>
#include <bitset>
#include <stack>
#include <sstream>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std; 
using namespace __gnu_pbds;
#define int long long
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define qi queue<int>
#define mii map<int, int>
#define pii pair<int, int>
#define mip map<int, pair<int, int>>
#define double long double
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend() 
#define double long double

#define FOR(i, k, n) for (int i = k; i < n; i++) 
#define all(a) a.begin(), a.end() 
#define rall(a) a.rbegin(), a.rend() 
#define double long double 
#define get(a)  \
    for (auto &i : a)\
    cin >> i
#define put(a)  \
    cout << endl; \
    for (auto &i : a)\
    cout << i << " "
\
#define ps(x, y) fixed << setprecision(y) << x
#define endl "\n"
#define sp << " " <<
#define P(x) cout << x << endl
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; //find_by_order,order_of_key
const int mod = 998244353; 
const int INF = LLONG_MAX;
int power(int a, int b)
{
    int result = 1;
    while (b)
    {
    if (b & 1)
    {
        
        result *= a;
        result = result % mod;
    }
    a *= a;
    a = a % mod;
    b/= 2;
    }
    return result;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    if (k == 0)
    {
        cout << 1;
        return;
    }
    int ans = power(2, n - 1);
    ans = power(ans, k);
    cout << ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i = 1;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
// cout<<"Case #"<<i++<<": ";
}
// return 0;
