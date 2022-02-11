#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(int argc, char* argv[]) {
  for (int i = 1; i < argc; i++) {
    // capitalize every char in argv[i]
    // shift every digit in argv[i]
    char* s = argv[i];
    for (int j = 0; j < strlen(s); j++) {
      // update s[j] if we need to
      if (isalpha(s[j])) {
        // capitalize
        s[j] = toupper(s[j]);
      } else if (isdigit(s[j])) {
        // shift
        s[j] = s[j] + 1;
      }
    }

    // output s
    cout << s << endl;
  } 

  return 0;
}
