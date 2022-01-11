#include <iostream>
#include <string> // for std::string
using namespace std;

int main() {
  int x;
  char c;
  double d;
  string s;

  cout << "Enter a number: ";
  cin >> x; // this gets input from the user

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
