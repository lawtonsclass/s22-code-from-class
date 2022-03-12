#include <iostream>
using namespace std;

int main() {
  int* p = nullptr;
  cout << *p << endl; // *p is not allowed!

  int* q;
  cout << *q << endl;


  return 0;
}
