#include <iostream>
using namespace std;

int main() {
  bool b1 = 42 < 43;
  bool b2 = 45 >= 55;

  cout << b1 << endl;
  cout << b2 << endl;

  if (b1) {
    cout << "b1 was true\n";
  }

  if (b2) {
    cout << "b2 was true\n";
  }

  cout << (true && true) << endl;
  cout << (true && false) << endl;
  cout << (false && true) << endl;
  cout << (false && false) << endl;

  return 0;
}
