#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "hello";
  cout << s.size() << endl;

  string s1 = "hi ";
  string s2 = "mom";
  string s3 = s1 + s2;
  cout << s3 << endl;

  int pos = s.find('e');
  cout << pos << endl;
  int pos2 = s.find('p');
  cout << pos2 << endl;

  s.replace(1, 4, "ola"); // changes s from "hello" to "hola"
  cout << s << endl; // "hola"

  cout << s.substr(2, 2) << endl; // "la"

  return 0;
}
