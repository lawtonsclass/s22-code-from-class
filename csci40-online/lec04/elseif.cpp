#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Enter the day of the week: ";
  string day;
  cin >> day;

  if (day == "Monday") {
    cout << "Mon\n";
  } else {
    if (day == "Tuesday") {
      cout << "Tue\n";
    } else {
      if (day == "Wednesday") {
        cout << "Wed\n";
      } else {
        if (day == "Thursday") {
          cout << "Thu\n";
        } else {
          cout << "Fri\n";
        }
      }
    }
  }

  // the below is equivalent to the above
  if (day == "Monday") {
    cout << "Mon\n";
  } else if (day == "Tuesday") {
    cout << "Tue\n";
  } else if (day == "Wednesday") {
    cout << "Wed\n";
  } else if (day == "Thursday") {
    cout << "Thu\n";
  } else {
    cout << "Fri\n";
  }

  return 0;
}
