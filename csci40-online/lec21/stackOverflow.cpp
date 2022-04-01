#include <iostream>
using namespace std;

/*
// stack overflow 1
int fact(int n) {
  // oh no, we forgot the base case!
  // recursive case
  // n! = n*(n-1)!
  return n * fact(n-1);
}
*/

// stack overflow 2
int fact(int n) {
  if (n == 1) {
    // base case
    return 1;
  } else {
    // recursive case
    // doesn't make progress!!!
    return fact(n);
  }
}


int main() {
  cout << fact(5) << endl;  

  return 0;
}
