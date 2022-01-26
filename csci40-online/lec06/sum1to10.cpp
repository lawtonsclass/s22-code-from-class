#include <iostream>
using namespace std;

int main() {
  int j = 1; // start j at 1
  int sum = 0;
  while (j <= 10) {
    sum = sum + j; // add j into sum
    j++; // increment j by 1
  }

  cout << j << endl;
  cout << sum << endl;

  return 0;
}
