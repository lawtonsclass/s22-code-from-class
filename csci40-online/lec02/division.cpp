#include <iostream>
#include <iomanip> // setprecision
using namespace std;

int main() {
  int x = 5;
  cout << (x / 2) << endl;

  double d = x / 2; // still does integer division--makes 2.0
  cout << d << endl;

  cout << (x / 2.0) << endl; // now we're doing double division

  cout << (static_cast<double>(x) / 2) << endl;

  // fixed: always show the decimal point
  // setprecision(n): always use n decimal places of precision
  cout << fixed << setprecision(5) << (x / 2.0) << endl;

  return 0;
}
