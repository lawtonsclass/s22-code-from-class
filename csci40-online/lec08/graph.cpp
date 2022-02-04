#include <iostream>
#include <cmath>
using namespace std;

int main() {
  for (int y = 12; y >= -11; y--) {
    for (int x = -38; x <= 39; x++) {
      if (y == round(sqrt(100 - x*x))) {
        // on the top half of the graph! plot a *
        cout << "*";
      } else if (y == -round(sqrt(100 - x*x))) {
        // on the bottom half of the graph! plot a *
        cout << "*";
      } else if (x == 0 && y == 0) {
        // at the origin! plot a +
        cout << "+";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
