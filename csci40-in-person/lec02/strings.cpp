#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "Hello"; 

  // print the first character of s
  cout << s.at(0) << endl;

  s.at(0) = 'h';
  cout << s << endl;

  string s2 = "dacqrsb";
  cout << s2.at(1) << s2.at(6) << s2.at(2) << s2.at(0) << endl;

  // string s3;
  // cout << "Enter a word: ";
  // cin >> s3; // only gets the first word :(
  // cout << s3 << endl;

  // to get an entire line at a time:
  cout << "Enter a sentence: ";
  string s4;
  getline(cin, s4); // get an entire line from cin and put it into s4
  cout << s4 << endl;


  return 0;
}
