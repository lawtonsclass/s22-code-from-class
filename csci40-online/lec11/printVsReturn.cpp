#include <iostream>
using namespace std;

void printHello() {
  cout << "Hello!\n";
}

int add(int x, int y) {
  return x + y; // give back the sum of x and y
}

int main() {
  printHello();
  // cout << printHello(); // this makes no sense

  cout << add(2, 3) << endl;
  add(3, 4); // this also makes no sense

  return 0;
}
