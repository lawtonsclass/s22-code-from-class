#include <iostream>
using namespace std;

int* make_new_int_on_heap() {
  int* n = new int; // new int "returns" a ptr to a brand new int on the heap!
  // n itself is a local var, but the the thing it points to is on the
  // heap. It does not get removed when this function returns.
  return n;
}

int main() {
  int *p = make_new_int_on_heap();
  *p = 42;
  cout << *p << endl;

  delete p; // deletes the int on the heap

  // ......

  return 0;
}
