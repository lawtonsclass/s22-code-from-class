#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int input;
  cin >> input;

  if (input % 2 == 0) {
    cout << "Even\n";
  } else {
    cout << "Odd\n";
  }

  return 0;
}
