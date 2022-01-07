#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Enter a lowercase word: ";
  string word;
  cin >> word;

  int d = 'a' - 'A'; // dist between 'a' and 'A'

  word.at(0) = word.at(0) - d;

  cout << word << endl;

  return 0;
}
