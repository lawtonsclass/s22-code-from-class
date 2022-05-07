#include <iostream>
#include <vector>
using namespace std;

// copies are getting made
void swap_by_value(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
}

// no copies! x and y are aliases for somebody else's ints
void swap_by_reference(int& x, int& y) {
  int temp = x;
  x = y;
  y = temp;
}

int sum(const vector<int>& v) {
  int res = 0;

  for (int i : v) {
    res += i;
  }

  return res;
}

int main() {
  int a = 42;
  int b = 43;
  swap_by_value(a, b);
  cout << a << " " << b << endl;
  swap_by_reference(a, b);
  cout << a << " " << b << endl;

  vector<int> v(1000, 42); // a vector of 1000 elements, all set to 42
  cout << sum(v) << endl;

  return 0;
}
