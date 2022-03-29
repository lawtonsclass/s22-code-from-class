#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
  ifstream ifs("sample-file.txt");
  string s;
  ifs >> s;
  ifs >> s;
  ifs >> s;
  ifs >> s;

  cout << ifs.eof() << endl;

  ifs >> s; // this line doesn't touch s
 
  cout << ifs.eof() << endl;
  cout << s << endl;

  return 0;
}
