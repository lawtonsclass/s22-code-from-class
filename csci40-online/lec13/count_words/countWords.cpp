#include "countWords.h"

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int countWords(const string& s) {
  int count = 0;
  string state = "OUTSIDE";

  for (int i = 0; i < s.length(); i++) {
    char nextChar = s.at(i);

    if (state == "OUTSIDE") {
      if (isspace(nextChar)) {
        state = "OUTSIDE";
      } else { // non-space!!!
        state = "INSIDE";
        count++;
      }
    } else { // INSIDE
      if (isspace(nextChar)) {
        state = "OUTSIDE";
      } else { // non-space
        state = "INSIDE";
      }
    }
  }

  // now we've visited every char of the string
  return count;
}

