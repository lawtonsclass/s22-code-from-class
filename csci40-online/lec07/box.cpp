#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 4; i++) { // worries about what line we're on
    // print 4 *s
    for (int j = 0; j < 4; j++) {
      cout << "*";
    }
    // print \n
    cout << "\n";
  }

  cout << endl;

  for (int i = 0; i < 4; i++) { 
    for (int j = 0; j < 4; j++) {
      if (i >= 1 && i <= 2 && j >= 1 && j <= 2) {
        cout << " ";
      } else {
        cout << "*";
      }
    }
    cout << "\n";
  }

  return 0;
}
