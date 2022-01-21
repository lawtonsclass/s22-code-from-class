#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "What day is it? ";
  string day;
  cin >> day;

  if (day == "Wednesday") {
    // this code in here gets executed when the day is equal to
    // "Wednesday"
    cout << "Wear pink!\n";
  } else {
    // this code gets run when the boolean expression is false
    cout << "Don't wear pink!\n";
  }

  cout << "Rest of the code executes here as usual...\n";

  return 0;
}
