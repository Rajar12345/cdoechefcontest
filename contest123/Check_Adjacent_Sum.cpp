#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  
  int t;
  cin>>t;
  while(t--)
  {
      int n,q;
      cin>>n>>q;
      
      vector<long long>v(n);
      long long sum=0;
      for(int i=0 ; i<n ; i++)
      {
          cin>>v[i];
          sum+=v[i];
      }
      
      while(q--)
      {
          long long  X;
          cin>>X;
          bool possible=false;
          for(int i=0 ; i<n ; i++)
          {
              for(int j=i+1 ; j<n ; j++)
              {
                  long long temp = sum - v[i] - v[j];
                  temp=temp*2;
                  temp+=v[i]+v[j];
                  
                  
                  if(temp==X)
                  {
                      possible=true;
                      swap(v[0],v[i]);
                      swap(v[j],v[n-1]);
                      for(int i=0 ; i<n ; i++)
                      {
                          cout<<v[i]<<" ";
                      }
                      cout<<endl;
                      break;
                  }
              }
              
              if(possible==true)
              {
                  break;
              }
          }
          if(possible==false)
          {
              cout<<"-1"<<endl;
          }
      }
  }
}
