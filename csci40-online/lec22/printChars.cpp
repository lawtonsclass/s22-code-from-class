#include <iostream>
#include <string>
using namespace std;

void printChars(string s) {
  if (s == "") {
    // base case--do nothing
    return;
  } else {
    // recursive case
    // Print the first character
    cout << s.at(0) << endl;
    // Print the smaller string recursively!
    printChars(s.substr(1));
  }
}

void printCharsReverse(string s) {
  if (s == "") {
    // base case--do nothing
    return;
  } else {
    // recursive case
    // Print the smaller string recursively!
    printCharsReverse(s.substr(1));
    // Print the first character
    cout << s.at(0) << endl;
  }
}

int main() {
  string s = "blah";
  printChars(s);
  cout << endl;
  printCharsReverse(s);

  return 0;
}
