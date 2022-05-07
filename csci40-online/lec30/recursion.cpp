#include "recursion.h"
using namespace std;

// returns x^n
int pow(int x, int n) {
  if (n == 0) {
    return 1;
  } else {
    return x * pow(x, n-1);
  }
}

int binarySearch(const vector<int>& v, int valToSearchFor, int lo, int hi) {
  // base case: search space is empty
  if (lo > hi) {
    return -1;
  }

  // recursive case:
  int mid = (lo + hi) / 2;
  if (v.at(mid) < valToSearchFor) {
    // look in the right half 
    // (that is, binary search in the right half)
    return binarySearch(v, valToSearchFor, mid + 1, hi);
  } else if (v.at(mid) > valToSearchFor) {
    // look in the left half 
    return binarySearch(v, valToSearchFor, lo, mid - 1);
  } else {
    // found it!
    return mid;
  }
}
