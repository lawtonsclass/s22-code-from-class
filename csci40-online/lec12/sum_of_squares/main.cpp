// compile with all the .cpp files at once:
// g++ -std=c++17 main.cpp sumOfSquares.cpp -o main
#include <iostream>
#include "sumOfSquares.h" // include the library by #including the .h file
using namespace std;

int main() {
  cout << "Enter a number: ";
  int n;
  cin >> n;

  cout << sumSquaresFrom1To(n) << endl;

  return 0;
}

