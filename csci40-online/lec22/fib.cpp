#include <iostream>
using namespace std;

// returns the nth fibonacci number
int fib(int n) {
  // cout << "calling fib(" << n << ")\n";

  if (n == 0) {
    // base case #1
    return 0;
  } else if (n == 1) {
    // base case #2
    return 1;
  } else {
    // recursive case
    return fib(n-1) + fib(n-2);
  }
}

int main() {
  cout << fib(7) << endl; // this is fine
  cout << fib(100) << endl; // this is not fine

  return 0;
}
