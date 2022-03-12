#include <iostream>
using namespace std;

int main() {
  int x = 5;

  int* p; // p is a pointer to an integer
  // p is capable of holding the addresses of int vars
  cout << p << endl;
  p = nullptr;
  cout << p << endl;

  p = &x; // have p hold the address of x
  cout << p << endl;

  cout << *p << endl; // *p follows p to where it's pointing to

  int* q = &x;
  int** r = &q;
  int***z = &r;

  cout << x << " ";
  cout << *p << " ";
  cout << *q << " ";
  cout << **r << " ";
  cout << ***z << "\n";


  return 0;
}
