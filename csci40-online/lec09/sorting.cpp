#include <iostream>
#include <vector>
#include <algorithm> // where sort lives
using namespace std;

int main() {
  int arr[] = {8, 6, 7, 5, 3, 0, 9}; 
  vector<int> v = {8, 6, 7, 5, 3, 0, 9};

  sort(arr, arr + 7);
  sort(v.begin(), v.end());

  for (int i = 0; i < 7; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  for (int elem : v) {
    cout << elem << " ";
  }
  cout << endl;

  return 0;
}
