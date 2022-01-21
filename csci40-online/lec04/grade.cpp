#include <iostream>
using namespace std;

int main() {
  cout << "Enter a grade percentage: ";
  double grade;
  cin >> grade;

  if (grade >= 90.0) {
    cout << "A\n";
  } else if (grade >= 70.0) {
    cout << "C\n";
  } else {
    // don't need to test if grade < 70 -- that's the only option left!
    cout << "F\n";
  }

  return 0;
}
