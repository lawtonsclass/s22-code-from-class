#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Enter a lowercase word: ";
  string word;
  cin >> word;

  int offset = 'a' - 'A';
  word.at(0) = word.at(0) - offset;

  cout << word << endl;

  return 0;
}
