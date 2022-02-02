#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;

  while (b != 0) {
    int original_b = b;
    b = a % b;
    a = original_b;
  }
  cout << "The GCD is: " << a << endl;

  return 0;
}
