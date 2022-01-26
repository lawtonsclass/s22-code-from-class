#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
  string s = "BLAH";
  
  int i = 0;
  while (i < s.size()) {
    // lowercase s.at(i)
    s.at(i) = tolower(s.at(i)); 
    i++; // get ready to edit the next index of s
  }

  cout << s << endl;

  /////////////////
  s = "BLAH";

  for (int j = 0; j < s.size(); j++) {
    // lowercase s.at(j)
    s.at(j) = tolower(s.at(j)); 
  }

  cout << s << endl;

  return 0;
}
