#include <iostream>
using namespace std;

// this function is call-by-value
// x is a normal int
void increment_by_val(int x) {
  x++;
}


// this function is call-by-reference
void increment_by_ref(int& x) {
  x++;
}

int main() {
  int v = 42;

  increment_by_val(v);
  cout << v << endl;

  increment_by_ref(v);
  cout << v << endl;

  return 0;
}
