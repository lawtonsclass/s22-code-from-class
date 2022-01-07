#include <iostream>
using namespace std;

int main() {
  int x;
  char c;
  double d;
  string s;

  cout << "Enter an int: ";
  cin >> x; // gets input from the user and puts it into the x var!
  cout << "Enter a char: ";
  cin >> c;
  cout << "Enter a double: ";
  cin >> d;
  cout << "Enter a string: ";
  cin >> s;

  cout << x << endl;
  cout << c << endl;
  cout << d << endl;
  cout << s << endl;

  return 0;
}
