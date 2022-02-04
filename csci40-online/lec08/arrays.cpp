#include <iostream>
using namespace std;

int main() {
  int arr[10]; // make an array called arr of 10 ints

  // need to fill arr[0], arr[1], ...
  for (int i = 0; i < 10; i++) {
    cout << "Enter the next element: ";
    cin >> arr[i];
  }

  // print out each element, space-separated
  for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // sum all the elements
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    // add arr[i] into sum
    sum += arr[i];
  }
  cout << "Sum: " << sum << endl;

  // find the minimum element
  // initially, make a guess that the 0th element is the real minimum
  // we'll update that guess if we ever find something smaller!
  int min = arr[0];
  for (int i = 1; i < 10; i++) {
    // now we look through every other index in arr (1 onward)
    // and we compare the value at that index to our current guess for min
    if (arr[i] < min) {
      // if we find an element smaller than min, our guess needs to be
      // updated to be that element--that's a better guess!
      min = arr[i];
    }
  }
  // once we've seen every element, then min holds the true minimum
  // value
  cout << "Min: " << min << endl;

  return 0;
}
