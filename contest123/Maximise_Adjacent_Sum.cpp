#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      vector<int> a(n);int x=0,y=0;
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      sort(a.begin(),a.end());
      y=a[0];
      for(int i=0;i<n-1;i++){
          a[i]=a[i+1];
      }
      a[n-1]=y;
      for(int i=0;i<n-1;i++){
          x=x+a[i]+a[i+1];
      }
      cout<<x<<endl;
  }

}
