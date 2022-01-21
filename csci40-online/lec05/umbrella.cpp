#include <iostream>
#include <string>
using namespace std;

int main() {
  string cloudy, rain;

  cout << "Is it cloudy today? "; 
  cin >> cloudy;
  cout << "Is there a chance of rain? "; 
  cin >> rain;

  if (cloudy == "yes" && rain == "yes") {
    cout << "Bring an umbrella!\n";
  } else {
    cout << "Don't bring an umbrella!\n";
  }

  return 0;
}
