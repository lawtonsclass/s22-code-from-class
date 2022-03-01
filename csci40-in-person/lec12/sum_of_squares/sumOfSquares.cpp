#include "sumOfSquares.h"

int add(int x, int y) {
  // return the sum of x and y
  return x + y; // gives back an answer to whoever called me
}

int square(int x) {
  return x * x;
}

int sumSquaresFrom1To(int n) {
  int sum = 0;

  for (int i = 1; i <= n; i++) {
    int i_squared = square(i);
    sum = add(sum, i_squared);
  }

  return sum;
}
