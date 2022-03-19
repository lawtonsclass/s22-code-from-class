#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream ofs;
  ofs.open("1to10.txt", ios_base::app); // append mode

  ofs << 11 << endl;

  ofs.close(); // it's good practice to close the file as soon as possible

  return 0;
}
