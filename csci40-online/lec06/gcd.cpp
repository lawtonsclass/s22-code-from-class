#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter the first number: ";
  cin >> a;
  cout << "Enter the second number: ";
  cin >> b;

  while (b != 0) {
    int originalB = b;
    b = a % b;
    a = originalB;
  }

  cout << "The gcd is: " << a << endl;

  return 0;
}
