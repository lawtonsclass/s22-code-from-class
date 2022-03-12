#include <iostream>
using namespace std;

namespace n1 {
  int blah() {
    return 42;
  }

  int x = 5;
}

namespace n2 {
  int blah() {
    return 55;
  }

  int x = 7;
}

namespace std {
  // ...
}

int main() {
  cout << n1::blah() << endl;  
  cout << n1::x << endl;  

  cout << n2::blah() << endl;  
  cout << n2::x << endl;  

  return 0;
}
