#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,a,b;
        cin>>n>>a>>b;
        if(a==b){
            if(n>a){
                if((n-(a+1))%(a+1)==0){
                    cout<<"Bob"<<endl;
                }
                else{
                    cout<<"Alice"<<endl;
                }
            }
            else{
                cout<<"Alice"<<endl;
            }
        }
        else if(a<b){
            if(n<=a){
                cout<<"Alice"<<endl;
            }
            else{
                cout<<"Bob"<<endl;
            }
        }
        else{
            cout<<"Alice"<<endl;
        }
        
}
int main() {
    int test;
    cin>>test;
    while (test--) {
        solve();
    }
    return 0;
}
