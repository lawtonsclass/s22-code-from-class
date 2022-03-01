// to compile: 
// g++ -std=c++17 main.cpp sumOfSquares.cpp -o main
#include <iostream>
#include "sumOfSquares.h"
using namespace std;

int main() {
  cout << "Enter n: ";
  int n;
  cin >> n;

  cout << sumSquaresFrom1To(n) << endl;

  return 0;
}
