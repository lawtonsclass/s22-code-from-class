#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 10; i++) {
    if (i == 3) {
      continue; // skip the rest of this loop iteration
    }
    cout << i << endl;
  }

  // this would normally be an infinite loop...
  while (true) {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    if (c == 'q') {
      break; // stop the loop
    } else {
      cout << "You typed: " << c << endl;
    }
  }

  return 0;
}
