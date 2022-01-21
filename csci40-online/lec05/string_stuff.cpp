#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
  string x = "abc";
  string y = "bcd";
  cout << (x < y) << endl;

  string z = "lawton";
  // use toupper to create a proper noun!
  z.at(0) = toupper(z.at(0));
  cout << z << endl;

  string s = "abc123a";
  if (isdigit( s.at( s.size() - 1 ) )) {
    cout << s << " ends with a number!\n";
  } else {
    cout << s << " does not end with a number!\n";
  }

  return 0;
}
