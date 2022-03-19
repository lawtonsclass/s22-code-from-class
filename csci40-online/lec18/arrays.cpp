#include <iostream>
using namespace std;

int main() {
  int arr[] = {5, 6, 7};
  cout << arr << endl; // arr by itself is a ptr to the start of the array!
  cout << *arr << endl;

  cout << arr[1] << " " << *(arr + 1) << endl; // equivalent!

  // C++ is capable of treating any pointer like an array
  int* p = arr;
  cout << p[2] << endl;

  // making an array on the heap:
  int* q = new int[42];
  q[5] = 55;
  cout << q[5] << endl;
  delete[] q;

  return 0;
}
