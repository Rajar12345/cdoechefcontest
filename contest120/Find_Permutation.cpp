#include <bits/stdc++.h>
using namespace std;


vector<int>find_permutation(int N, vector<int>& A) {
    vector<int> ans;
    map<int, int> occurrence;
    for (int i = 0; i < 2* N; ++i) {
        if (occurrence.find(A[i]) != occurrence.end()) { 
            ans.push_back(A[i]);
            occurrence.erase(A[i]);
        } else {
            occurrence[A[i]] = i;
        }
    }

// Reverse the ans
    reverse(ans.begin(), ans.end());
    return ans;
}
int main() {
    int T; cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(2 * N);
        for (int i = 0; i < 2 * N; ++i) {
    
            cin >> A[i];
        }
        vector<int> permutation = find_permutation(N, A); 
        for(int i = 0; i < N; ++i) {

            cout << permutation[i] << " ";
        }
           cout << endl;
        }
    return 0;
}
