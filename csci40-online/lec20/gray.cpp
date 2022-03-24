#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
  ifstream ifs("cat.ppm");
  ofstream ofs("cat-gray.ppm");
  
  // preserve the original 3 lines
  string line;
  getline(ifs, line);
  ofs << line << endl;
  getline(ifs, line);
  ofs << line << endl;
  getline(ifs, line);
  ofs << line << endl;

  // get rgb values and convert them until the end of file
  int r, g, b;
  while (ifs >> r >> g >> b) {
    // process the pixel
    int avg = (r + g + b) / 3;
    ofs << avg << " " << avg << " " << avg << endl;
  }

  ifs.close();
  ofs.close();

  return 0;
}
