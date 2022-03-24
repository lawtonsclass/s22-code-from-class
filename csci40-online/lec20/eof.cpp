#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream ifs("sampleFile.txt");
  string s;
  ifs >> s;
  ifs >> s;
  ifs >> s;
  ifs >> s;
 
  cout << ifs.eof() << endl;

  ifs >> s; // read past the end
  cout << ifs.eof() << endl;
  cout << s << endl;

  return 0;
}
