#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the size: ";
  cin >> n;

  // make an array of size n on the heap
  int* arr = new int[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter the next element: ";
    int elem;
    cin >> elem;

    arr[i] = elem;
  }

  // sum the array
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  // we can delete arr now -- we're done using it
  delete[] arr;

  cout << "sum: " << sum << endl;

  return 0;
}
