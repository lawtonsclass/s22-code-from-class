#include <iostream>
using namespace std;

int main() {
  for (int i = 20; i >= -5; i = i - 5) {
    // only the "real" work goes into the body of the for loop
    cout << i << endl;
  }

  return 0;
}
