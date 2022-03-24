#include <iostream>
#include <fstream>
using namespace std;

void write1to10(ostream& os) {
  for (int i = 1; i <= 10; i++) {
    os << i << endl;
  }
}

int main() {
  ofstream ofs("1to10.txt"); 

  write1to10(cout);

  write1to10(ofs);
  ofs.close();

  return 0;
}
