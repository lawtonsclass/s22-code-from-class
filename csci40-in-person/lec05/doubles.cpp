#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double d = 0.0;
  d += 0.1;
  d += 0.1;
  d += 0.1;
  d += 0.1;
  d += 0.1;
  d += 0.1;
  d += 0.1;
  d += 0.1;
  d += 0.1;
  d += 0.1;

  cout << fixed << setprecision(16) << d << endl;

  cout << (d == 1.0) << endl;
  cout << (abs(d - 1.0) < 0.00001) << endl; // <-- do it this way!

  return 0;
}
