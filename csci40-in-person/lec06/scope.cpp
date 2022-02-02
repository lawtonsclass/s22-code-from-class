#include <iostream>
using namespace std;

int main() {
  int i = 42;
  cout << i << endl;

  if (2 <= 3) {
    int i = 55;
    i++;
    cout << i << endl;
    int j = 33;
    cout << j << endl;
  }

  // cout << j << endl; // j doesn't exist down here!
  cout << i << endl; // this is the original i
  

  return 0;
}
