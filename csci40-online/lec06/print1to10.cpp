#include <iostream>
using namespace std;

int main() {
  int i = 1; // start i at 1
  while (i <= 10) {
    cout << i << endl; // print i
    i++; // increment i by 1
  }

  cout << endl;

  // the for loop below is equivalent to the while loop above
  for (int j = 1; j <= 10; j++) {
    // only the "real" work goes into the body of the for loop
    cout << j << endl;
  }

  return 0;
}
