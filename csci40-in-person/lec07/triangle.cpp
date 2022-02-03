#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 4; i++) {
    // draw i+1 *s
    for (int j = 0; j < i+1; j++) {
      cout << "*"; // print a single star
    }
    // print \n
    cout << "\n";
  }

  return 0;
}
