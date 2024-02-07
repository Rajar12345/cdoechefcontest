#include <bits/stdc++.h>
using namespace std;

int main() {

  // Your code goes here

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
      cin >> vec[i];
    }
    
    vector<int>ans(n + 1, 1);
    int sum = vec[0];
    int start = 0;
    
    
    for (int i = 1; i < n; i++) {
      sum += vec[i];

      while (sum > n) {
        sum -= vec[start++];
      }
      int temp = start;
      int curr=sum;
      while (i - temp) {
        ans[curr]++;
        curr -= vec[temp++];
      }
    }

    for (int i = 1; i <= n; i++) {
      cout << ans[i] << " ";
    }
    cout << endl;
  }

}
