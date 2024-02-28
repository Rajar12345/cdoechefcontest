#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        long long n;
        cin >> n;
        long long sum = n * (n + 1) / 2;
        sum -= 1;
        sum += n;
        cout << sum << endl;
        t--;
    }

    return 0;
}
