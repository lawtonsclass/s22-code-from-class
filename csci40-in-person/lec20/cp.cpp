#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
  // filename to copy is in argv[1] 
  string input_file = argv[1];
  // filename to write to is in argv[2] 
  string output_file = argv[2];

  ifstream ifs(input_file);
  ofstream ofs(output_file);

  while (true) {
    // read a char at a time from ifs
    char c = ifs.get();
    // make sure we got a valid character before we write it
    if (ifs.eof()) { // if (!ifs) also works
      break;
    }
    // put that char into ofs
    ofs.put(c);
  }

  ifs.close();
  ofs.close();

  return 0;
}
