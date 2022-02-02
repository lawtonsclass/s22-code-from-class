#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
  string s = "BLAH";

  // iterate over every valid index in the string s
  int i = 0;
  while (i < s.size()) { // because s.size() - 1 is the last valid index
    // lowercase s.at(i)
    s.at(i) = tolower(s.at(i));
    // increment i
    i++;
  }
  cout << s << endl;

  s = "CSCI";

  for (int j = 0; j < s.size(); j++) { 
    s.at(j) = tolower(s.at(j));
  }
  cout << s << endl;

  return 0;
}
