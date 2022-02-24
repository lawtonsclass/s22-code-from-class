#include <iostream>
using namespace std;

int add(int x, int y) {
  // return the sum of x and y
  return x + y; // gives back an answer to whoever called me
}

// void means this function does not return a value
void printHello() {
  cout << "Hello!\n";
}

int main() {
  cout << add(3, 4) << endl;
  printHello();

  // cout << printHello() << endl;
  add(2, 2);

  return 0;
}
