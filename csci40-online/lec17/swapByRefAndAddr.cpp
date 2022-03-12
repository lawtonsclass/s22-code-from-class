#include <iostream>
using namespace std;

void swap_ref(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

void swap_ptr(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int x = 42;
  int y = 43;

  swap_ref(x, y);
  cout << x << " " << y << endl;
  
  swap_ptr(&x, &y);
  cout << x << " " << y << endl;

  return 0;
}
