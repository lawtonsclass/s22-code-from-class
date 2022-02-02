#include <iostream>
using namespace std;

int main() {
  int i = 1; // start i at 1
  while (i <= 10) {
    cout << i << endl; // print i
    i++; // increment i by 1
  }

  cout << endl;

  int j = 1;
  int sum = 0;
  while (j <= 10) {
    // add j into sum
    sum += j;
    j++; // increment j
  }
  cout << sum << endl;

  cout << endl;

  i = 10;
  while (i >= 0) {
    cout << i << endl;
    i -= 2;
  }

  return 0;
}
