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

  int loc_l = s.find('l');
  cout << loc_l << endl;
  int loc_z = s.find('z');
  cout << loc_z << endl;

  // let's convert "hello" to "hola"
  s.replace(1, 4, "ola"); // this changes the original string!
  cout << s << endl;

  // let's extract the "la" from "hola"
  string la = s.substr(2, 2);
  cout << la << endl;

  return 0;
}
