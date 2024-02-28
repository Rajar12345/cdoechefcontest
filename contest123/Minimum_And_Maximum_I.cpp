#include <bits/stdc++.h>
using namespace std;
#define ll long long
// #define mod 1000000007
#define mod 998244353

void solve()
{
    ll n;
    cin>>n;
    ll sum = 0;

    if(n%2==0){
        n=n/2;
        sum=n*(n+1);
        cout<<sum<<endl;
    }
    else{
        n=n/2;
        sum=n*(n+1)+n+1;
        cout<<sum<<endl;
    }
    
    
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif


    ll test;
    cin >> test;

    while (test--)
    {
        solve();


    }
    return 0;
}
