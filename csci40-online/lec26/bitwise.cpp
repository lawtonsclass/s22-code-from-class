#include <iostream>
using namespace std;

// this function negates x (i.e., returns -x) by creating the two's
// complement form
int negate_2s_complement(int x) {
  // flip all the bits and add 1!
  return (~x) + 1;
}

int main() {
  cout << (11 & 6) << endl;
  cout << (11 & 8) << endl; // this is non-zero, so bit 3 was set!
  cout << (11 & 4) << endl; // this is zero, so bit 2 was not set!

  cout << endl;

  cout << (9 | 12) << endl;
  cout << (10 | 1) << endl; // now the 0th bit is set

  cout << endl;

  cout << ~9 << endl;
  cout << negate_2s_complement(9) << endl;
  cout << negate_2s_complement(-9) << endl;

  cout << endl;

  cout << (11 ^ 5) << endl;

  cout << endl;

  cout << (11 << 2) << endl; // multiplies by 2^2
  cout << (3 << 1) << endl; // multiplies by 2^1
  cout << (5 >> 1) << endl; // divides by 2^1
  cout << (11 & (1 << 3)) << endl; // this is non-zero, so bit 3 was set!

  return 0;
}
