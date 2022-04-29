#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  map<string, int> phonebook;
  phonebook.emplace("Lawton", 5551234);
  phonebook.emplace("Lonzo", 5551235);

  // maps let you look stuff up
  cout << phonebook.at("Lawton") << endl;
  cout << phonebook.count("Lonzo") << endl;
  cout << phonebook.count("Mom") << endl;

  for (map<string, int>::iterator it = phonebook.begin(); it != phonebook.end(); it++) {
    // now we have it->first and it->second
    cout << it->first << " -> " << it->second << endl;
  }

  return 0;
}
