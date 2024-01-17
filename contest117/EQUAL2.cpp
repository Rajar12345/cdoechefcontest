#include <iostream>
#include <cmath>

using namespace std;

long target(long x1) {
  return x1 * (x1 + 1) / 2;
}

long minMovesToEqual(long a, long b) {
  long l = abs(b - a);
  if (l == 0) return 0;
  
  double p = sqrt(1 + 8 * l);
  double x = -1 + p;
  long n = static_cast<long>(std::ceil(x / 2));


  while ((target(n) - l) % 2 != 0) {
    n++;
  }

  return n;
}

int main() {
  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    long A, B;
    cin >> A >> B;

    long result = minMovesToEqual(A, B);
    cout << result << std::endl;
  }
  return 0;
}
