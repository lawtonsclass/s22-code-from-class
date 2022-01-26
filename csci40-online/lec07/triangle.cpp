#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 4; i++) { // worries about what line we're on
    // print i+1 *s
    for (int j = 0; j < i+1; j++) {
      cout << "*";
    }
    // print \n
    cout << "\n";
  }

  return 0;
}
