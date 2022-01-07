#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "Hello"; 
  cout << s.at(0) << endl; // indices start at 0!

  s.at(0) = 'h';
  cout << s << endl;

  string s2 = "dacqrsb";
  cout << s2.at(1);
  cout << s2.at(6);
  cout << s2.at(2);
  cout << s2.at(0) << endl;

  cout << "Enter a string: ";
  string input;
  // cin >> input; // <-- only gets a single word!
  getline(cin, input); // reads an entire line from cin
  cout << input << endl;

  return 0;
}
