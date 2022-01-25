#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (n % 2 == 0) {
    // even!
    cout << "Even\n";
  } else {
    // odd!
    cout << "Odd\n";
  }

  return 0;
}
