#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main() {
  char str[] = {'h', 'e', 'l', 'l', 'o', '\0'}; // a C-string 
  char str2[] = "hello"; // equivalent to the above

  cout << str << " " << str2 << endl;

  char s3[] = "42";
  int s3_as_an_int = atoi(s3);
  cout << s3_as_an_int * 2 << endl;

  char s4[50] = "hi "; // give it enough room to hold more characters
  char s5[] = "mom!";
  strcat(s4, s5); // s4 = s4 + s5
  cout << s4 << endl;

  cout << strlen(str2) << endl; // doesn't count the '\0'

  cout << strcmp("abc", "bcd") << endl;;
  cout << strcmp("bcd", "abc") << endl;;
  cout << strcmp("abc", "abc") << endl;;

  return 0;
}
