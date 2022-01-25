#include <iostream>
#include <string>
using namespace std;

int main() {
  string input;
  cout << "Enter what day it is: ";
  cin >> input;

  if (input == "Wednesday") {
    cout << "Wear pink!\n";
  } else {
    cout << "Don't wear pink!\n";
  }

  // rest of the code goes here

  return 0;
}
