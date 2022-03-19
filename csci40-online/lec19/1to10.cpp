#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // ofstream ofs("1to10.txt");
  ofstream ofs;
  ofs.open("1to10.txt");

  for (int i = 1; i <= 10; i++) {
    ofs << i << endl;
  }

  ofs.close(); // it's good practice to close the file as soon as possible

  return 0;
}
