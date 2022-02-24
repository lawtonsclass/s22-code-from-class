#include <iostream>
#include <string>
using namespace std;

int factorial(int n) {
  if (n < 0) {
    return -1;
  }

  int result = 1;

  for (int i = 1; i <= n; i++) {
    result = result * i;
  }

  return result;
}

void assertTrue(bool b, string description) {
  if (b) {
    cout << "PASSED: " << description << endl;
  } else {
    cout << "FAILED: " << description << endl;
  }
}

int main() {
  assertTrue(factorial(5) == 120, "factorial(5)");
  assertTrue(factorial(3) == 6, "factorial(3)");
  assertTrue(factorial(1) == 1, "factorial(1)");
  assertTrue(factorial(0) == 1, "factorial(0)");
  assertTrue(factorial(-1) == -1, "factorial(-1)");

  // if (factorial(3) == 6) {
    // cout << "PASSED: factorial(3)" << endl;
  // } else {
    // cout << "FAILED: factorial(3)" << endl;
  // }

  return 0;
}
