#include <iostream>
using namespace std;

int main() {
  bool b = 42 < 43;
  cout << b << endl;
  bool b2 = false;
  cout << b2 << endl;

  bool b3 = 42 < 43;
  if (b3) {
    cout << "42 was less than 43!\n";
  }

  if (42 < 43 && 55 >= 27) {
    cout << "42 < 43 and 55 >= 27\n";
  }

  cout << (true && true) << endl; // the only time an && gives back true is when both sides are true
  cout << (true && false) << endl;
  cout << (false && true) << endl;
  cout << (false && false) << endl;

  return 0;
}
