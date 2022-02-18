#include <iostream>
using namespace std;

// these are function declarations--they're all you need to know how
// to call the function
int square(int x);
int add(int x, int y);
int sumSquaresFrom1To(int n);

int main() {
  cout << "Enter a number: ";
  int n;
  cin >> n;

  cout << sumSquaresFrom1To(n) << endl;

  return 0;
}

int square(int x) {
  return x*x;
}

int add(int x, int y) {
  return x + y; // give back the sum of x and y
}

int sumSquaresFrom1To(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    int i_squared = square(i);
    sum = add(sum, i_squared);
  }
  return sum;
}
