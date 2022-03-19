#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream ifs("1to10.txt"); 
  cout << "eof: " << ifs.eof() << endl;

  // read *all* the ints in the file and add to the sum
  int sum = 0;
  int n;
  while (ifs >> n) { // repeatedly read a number as long as ifs is "okay"
    sum += n;
  }

  cout << "eof: " << ifs.eof() << endl;

  ifs.close();

  cout << "sum: " << sum << endl;

  return 0;
}
