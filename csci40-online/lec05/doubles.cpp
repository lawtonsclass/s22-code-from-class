#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double d = 0.0;
  d = d + 0.1;
  d = d + 0.1;
  d = d + 0.1;
  d = d + 0.1;
  d = d + 0.1;
  d = d + 0.1;
  d = d + 0.1;
  d = d + 0.1;
  d = d + 0.1;
  d = d + 0.1;

  cout << setprecision(16) << d << endl;

  cout << (d == 1.0) << endl;
  cout << (fabs(d - 1.0) < 0.0001) << endl;

  return 0;
}
