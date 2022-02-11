#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "You need to provide exactly two command line arguments!\n";
    cout << "Usage: " << argv[0] << " n, where n is a number\n";
    exit(0);
  } 

  // the width is in argv[1]
  // remember to convert it from a C-string to an int!
  int width = atoi(argv[1]);

  for (int i = 0; i < width; i++) {
    for (int j = 0; j < width; j++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
