#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {1, 2, 3};

  for (int i = 0; i < v.size(); i++) {
    cout << v.at(i) << " ";
  }
  cout << endl;

  // range-based for loop--equivalent to the loop above
  for (int elem : v) {
    // elem gets a chance at being every element of v in order
    cout << elem << " ";
  }
  cout << endl;

  return 0;
}
