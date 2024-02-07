#include <iostream>
using namespace std;
int gcd(int x, int y) {
  if (x == 0) {
    return y;
  } else {
    return gcd(y % x, x);
  }
}

int main() {
  int t;

  cin >> t;

  while (t--) {
    int x, y;

    cin >> x >> y;

    cout << gcd(x, y) << endl;
  }

  return 0;
}
