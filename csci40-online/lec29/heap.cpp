#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int* i = new int;
  *i = 42;
  cout << *i * 2 << endl;
  delete i;

  ////////////////////////////////
  
  int n;
  cout << "Enter the array's size: ";
  cin >> n;
  int* arr = new int[n]; // arr is an array of size n on the heap

  // fill the array
  for (int i = 0; i < n; i++) {
    int nextNum;
    cout << "Enter the next element: ";
    cin >> nextNum;
    arr[i] = nextNum;
  }

  // find the median

  double median;
  sort(arr, arr + n);
  if (n % 2 == 0) {
    // even length
    int mid_right = n / 2;
    int mid_left = mid_right - 1;
    median = (arr[mid_left] + arr[mid_right]) / 2.0;
  } else {
    // odd length
    int mid = n / 2;
    median = arr[mid];
  }
  delete[] arr;

  cout << median << endl;

  return 0;
}
