#include <iostream>
#include <vector>

int max(int n, int m, std::vector<int>& a) {
    int states = 0;
    int current = 0;
    
    for (int i = 0; i < n; ++i) {
        current += a[i];
        
        if (current >= m) {
            states++;
            current = 0;
        }
    }
    
    return states;
}

int main() {
    using namespace std;
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int result = max(n, m, a);
        cout << result << endl;
    }
    
    return 0;
}
