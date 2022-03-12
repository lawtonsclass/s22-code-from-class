#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "asdf";
  string* sp = &s;

  // cout << sp.size() << endl; // won't work
  cout << (*sp).size() << endl;
  cout << sp->size() << endl; // equivalent to the line above

  return 0;
}
