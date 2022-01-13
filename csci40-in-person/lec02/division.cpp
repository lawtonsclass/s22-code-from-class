#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main() {
  int x = 5;
  cout << (x / 2) << endl;

  double d = x / 2;
  cout << d << endl;

  cout << (x / 2.0) << endl;

  cout << (static_cast<double>(x) / 2) << endl;

  cout << fixed << setprecision(5) << (static_cast<double>(x) / 2) << endl;

  return 0;
}
