#include <iostream>
using namespace std;

int main() {
  int i = 42;

  if (2 <= 3) {
    int i = 55;
    i++;
    cout << i << endl;

    int j = 37;
    cout << j << endl;
  }

  cout << i << endl;
  // cout << j << endl; // <-- j doesn't exist out here!

  return 0;
}
