#include <iostream>
#include <string>
using namespace std;

void assertTrue(bool b, string description) {
  if (b) {
    cout << "PASSED: " << description << endl;
  } else {
    cout << "FAILED: " << description << endl;
  }
}

int factorial(int n) {
  if (n < 0) {
    return -1; // edge case
  }

  int result = 1;
  for (int i = 1; i <= n; i++) {
    result = result * i;
  }
  return result;
}

int main() {
  assertTrue(factorial(5) == 120, "factorial(5)");
  assertTrue(factorial(4) == 24, "factorial(4)");
  assertTrue(factorial(1) == 1, "factorial(1)");
  assertTrue(factorial(0) == 1, "factorial(0)");
  assertTrue(factorial(-1) == -1, "factorial(1)");

  return 0;
}
