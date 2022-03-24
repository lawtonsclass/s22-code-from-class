#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

string translate(const string& s) {
  if (s == "snow") {
    return "nieve";
  } else if (s == "mountain") {
    return "montagne";
  } else if (s == "kingdom") {
    return "王国";
  } else {
    return s;
  }
}

int main() {
  ifstream ifs("LetItGoLyrics.txt"); 

  string word;
  while (ifs >> word) {
    cout << translate(word);

    // preserve all the whitespace after the word in the file
    while (isspace(ifs.peek())) {
      // eat up the whitespace character
      char c = ifs.get();
      // output that same whitespace character
      cout << c;
    }
  }

  ifs.close();

  return 0;
}
