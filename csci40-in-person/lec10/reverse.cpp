#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7}; 

  // this loop will iterate size / 2 times!
  for (int i = 0; i < v.size() / 2; i++) {
    int indexToSwapWith = v.size() - i - 1;
    // swap indices i and size - i - 1
    int temp = v.at(i);
    v.at(i) = v.at(indexToSwapWith);
    v.at(indexToSwapWith) = temp;
  }

  for (int e : v) {
    cout << e << " ";
  }
  cout << endl;

  return 0;
}
