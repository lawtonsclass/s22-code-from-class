#include <iostream>
using namespace std;

int main() {
  /*
  int i = 1; // start i at 1
  while (i <= 10) {
    cout << i << endl; // print i
    i++; // increment i by 1
  }
  */

  // the for loop below is equivalent to the while loop above

  for (int i = 1; i <= 10; i++) {
    // only the "real" work goes in the body of the for loop!
    cout << i << endl;
  }

  cout << endl;

  for (int j = 20; j >= -5; j = j - 5) {
    cout << j << endl;
  }

  return 0;
}
