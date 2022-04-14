#include <iostream>
#include <stdexcept>
using namespace std;

// returns n!
int fact(int n) {
  if (n <= 0) {
    // throw an exception here
    throw runtime_error("fact can't handle numbers this small!");
  }

  if (n == 1) {
    // base case
    return 1;
  } else {
    // recursive case
    // n! = n*(n-1)!
    return n * fact(n-1);
  }
}

int main() {
  cout << fact(5) << endl;  

  try {
    cout << fact(-1) << endl;
  } catch (runtime_error& e) {
    cout << e.what() << endl;
  }

  return 0;
}
