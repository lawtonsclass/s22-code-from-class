#include <iostream>
using namespace std;

int main() {
  int arr[10]; // arr is an array of 10 ints
  // valid indices: 0-9

  // get 10 numbers from the user and put them all in arr
  for (int i = 0; i < 10; i++) {
    int val;
    cout << "Enter the next element: ";
    cin >> val;
    arr[i] = val;
  }

  for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // sum all the numbers in arr
  int sum = 0;
  for (int j = 0; j < 10; j++) {
    sum += arr[j];
  }
  cout << "Sum: " << sum << endl;

  // get the min element
  int min = arr[0]; // guess that arr[0] is the real min
  for (int i = 1; i < 10; i++) {
    // update min if we find a smaller element
    if (arr[i] < min) {
      min = arr[i]; // arr[i] is smaller -- it's a better guess for the min!
    }
  }
  // after we visit every element, min holds the true min element
  cout << "Min: " << min << endl;

  return 0;
}
