#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

// returns x^n
int pow(int x, int n) {
  if (n < 0) {
    throw runtime_error("can't use negative powers!!!");
  }

  if (n == 0) {
    return 1;
  } else {
    return x * pow(x, n-1);
  }
}

unsigned int flipBit(unsigned int x, int whichBit) {
  if (whichBit < 0 || whichBit > 31) {
    throw string("invalid bit!!!");
  }
    
  return x ^ (1 << whichBit);
}

int main() {
  try {
    cout << pow(2, 3) << endl;   
    cout << pow(2, -3) << endl;   
  } catch (runtime_error& e) {
    cout << e.what() << endl;
  }

  try {
    cout << flipBit(13, 1) << endl;
    cout << flipBit(13, 33) << endl;
  } catch (string& s) {
    cout << s << endl;
  }

  return 0;
}
