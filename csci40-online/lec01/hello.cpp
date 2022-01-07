// Two slashes make a single-line comment in C++
// Comments are just for the programmer

/* this
     is
     a
      multi-line
  comment!
  */

#include <iostream> // gives us access to std::cout and std::endl
using namespace std; // lets us skip the "std::"

// this is the main function--it's where the program begins!
int main() {
  // std::cout is the terminal screen
  // \n is a special character that means "newline"
  cout << "Hello, world!" << endl;
  // things between ""s is called a string

  // every C++ statement ends in a ;

  return 0; // 0 is an exit code--we're giving it back to the terminal
  // 0 means "success"
}
