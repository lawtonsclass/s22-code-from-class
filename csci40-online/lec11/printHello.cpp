#include <iostream>
using namespace std;

void printHello() {
  cout << "Hello!\n";
}

int main() {
  printHello();
  printHello();
  // cout << printHello(); // this makes no sense

  return 0;
}
