#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& v, int valToSearchFor) {
  int lo = 0;
  int hi = v.size() - 1;

  while (lo <= hi) { // while the search space is still non-empty
    int mid = (lo + hi) / 2;
    if (v.at(mid) < valToSearchFor) {
      // look in the right half 
      lo = mid + 1;
    } else if (v.at(mid) > valToSearchFor) {
      // look in the left half 
      hi = mid - 1;
    } else {
      // found it!
      return mid;
    }
  }

  return -1; // didn't find it :(
}

int main() {
  vector<int> v = {2, 4, 6, 8, 10};

  cout << binarySearch(v, 2) << endl;
  cout << binarySearch(v, 1) << endl;

  return 0;
}
