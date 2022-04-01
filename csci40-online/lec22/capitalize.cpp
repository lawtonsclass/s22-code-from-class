#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// str is a ptr to the first char of the C-string
void capitalize(char* str) {
  if (strlen(str) == 0) {
    // base case
    // it's the empty string! do nothing
  } else {
    // capitalize the first char
    str[0] = toupper(str[0]);
    // recursively capitalize the rest of the string
    capitalize(str + 1);
  }
}

int main() {
  char s[] = "blah";
  capitalize(s);
  cout << s << endl;

  return 0;
}
