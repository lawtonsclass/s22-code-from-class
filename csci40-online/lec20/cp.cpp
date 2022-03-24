#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
  string inputfile = argv[1];
  string outputfile = argv[2];

  ifstream ifs(inputfile);
  ofstream ofs(outputfile);

  while (true) {
    // read a char from ifs
    char c = ifs.get();
    // watch out for the end of the input file
    if (ifs.eof()) {
      break;
    }
    // put the car into ofs
    ofs.put(c);
  }

  ifs.close();
  ofs.close();

  return 0;
}
