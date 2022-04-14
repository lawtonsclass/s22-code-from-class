#include <iostream>
using namespace std;

int divide(int dividend, int divisor) {
  if (divisor == 0) {
    cout << "Division by 0 is not allowed!!!\n";
    return 0;
  }
  return dividend / divisor;
}

int main() {
  cout << divide(42, 2) << endl; 
  cout << divide(42, 0) << endl; 

  return 0;
}
