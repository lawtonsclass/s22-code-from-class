#include <iostream>
using namespace std;

void printFrom1To(int n) {
  if (n == 0) {
    // base case--print nothing
  } else {
    // recursive case
    printFrom1To(n-1);
    cout << n << endl;
  }
}

void reversePrintFrom1To(int n) {
  if (n == 0) {
    // base case--print nothing
  } else {
    // recursive case
    cout << n << endl;
    reversePrintFrom1To(n-1);
  }
}

int main() {
  printFrom1To(5);
  cout << endl;
  reversePrintFrom1To(5);

  return 0;
}
