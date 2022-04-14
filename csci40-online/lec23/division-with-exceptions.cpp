#include <iostream>
#include <stdexcept>
using namespace std;

int divide(int dividend, int divisor) {
  if (divisor == 0) {
    throw runtime_error("division by 0!");
  }
  return dividend / divisor;
}

int main() {
  cout << "Enter a dividend: ";
  int dividend, divisor;
  cin >> dividend;

  cout << "Enter a divisor: ";
  cin >> divisor;

  while (true) {
    try {
      cout << divide(dividend, divisor) << endl;
      break; // if this doesn't throw an exception, we break out of the loop
    } catch (runtime_error& e) {
      // handle division by 0 by asking for a new divisor
      cout << "Enter a new divisor: ";
      cin >> divisor;
    }
  }

  return 0;
}
