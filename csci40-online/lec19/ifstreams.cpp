#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream ifs("1to10.txt"); 

  // read the first 5 ints in the file and add to the sum
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    int n;
    ifs >> n;
    sum += n;
  }

  ifs.close();

  cout << "sum: " << sum << endl;

  return 0;
}
