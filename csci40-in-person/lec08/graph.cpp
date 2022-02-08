#include <iostream>
#include <cmath>
using namespace std;

int main() {
  for (int y = 12; y >= -11; y--) {
    for (int x = -38; x < 39; x++) {
      if (y == round(sqrt(100 - x*x))) {
        // top half
        cout << "*";
      } else if (y == -round(sqrt(100 - x*x))) {
        // bottom half
        cout << "*";
      } else if (x == 0 && y == 0) {
        cout << "+";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
