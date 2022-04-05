#include <iostream>
using namespace std;

// issue 1: forget the base case
int fact1(int n) {
  // recursive case: n! = n*(n-1)!
  return n * fact1(n-1);
}

// issue 2: recursive call makes no progress
int fact2(int n) {
  if (n == 1) {
    // base case: 1! = 1
    return 1;
  } else {
    // incorrect recursive case
    return fact2(n);
  }
}

int main() {
  // cout << fact1(5) << endl;
  cout << fact2(5) << endl;

  return 0;

}
