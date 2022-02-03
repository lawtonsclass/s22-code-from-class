#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 10; i++) {
    if (i == 3) {
      continue; // skip the rest of the current iteration
    }
    cout << i << endl;
  }

  char c;
  while (true) {
    cout << "Enter a character: ";
    cin >> c;
    if (c == 'q') {
      break; // stop the loop
    }
    cout << "You typed: " << c << endl;
  }

  return 0;
}
