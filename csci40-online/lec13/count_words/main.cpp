#include <iostream>
#include <string>
#include <cctype>
#include "countWords.h"
using namespace std;

void assertTrue(bool b, string description) {
  if (b) {
    cout << "PASSED: " << description << endl;
  } else {
    cout << "FAILED: " << description << endl;
  }
}

void testCountWords() {
  assertTrue(countWords("Hello, world!\n\t  Hi mom   42") == 5, "5 words");
  assertTrue(countWords("  blah  ") == 1, "1 word");
  assertTrue(countWords(" ") == 0, "0 words");
}

int main() {
  testCountWords();

  string line;
  cout << "Enter a line of text: ";
  getline(cin, line);

  cout << countWords(line) << endl;


  return 0;
}
