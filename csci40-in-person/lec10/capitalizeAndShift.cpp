#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]) {
  // iterate through all args after the name of the program
  for (int i = 1; i < argc; i++) {
    char* s = argv[i];
    for (int j = 0; j < strlen(s); j++) {
      if (isalpha(s[j])) {
        s[j] = toupper(s[j]);
      } else if (isdigit(s[j])) {
        s[j] = s[j] + 1; // next ASCII code is the next digit!
      }
    }
    cout << s << endl;
  }

  return 0;
}
