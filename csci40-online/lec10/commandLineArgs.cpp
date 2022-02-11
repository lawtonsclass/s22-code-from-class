#include <iostream>
using namespace std;

// declare main with argc and argv--this gives us access to the
// command-line arguments
// argc: # of cmd. line args.
// argv: cmd. line args. as an array of C-strings
int main(int argc, char* argv[]) {
  cout << argc << endl;
  for (int i = 0; i < argc; i++) {
    cout << "argv[" << i << "]: " << argv[i] << endl;
  }

  return 0;
}
