#include "searching.h"

using namespace std;

int linearSearch(const vector<int>& v, int valToSearchFor) {
  // search through every index in order
  for (int i = 0; i < v.size(); i++) {
    if (v.at(i) == valToSearchFor) {
      return i; // found it at index i!
    }
  }

  // if we get here, we didn't find it :(
  return -1;
}

int binarySearch(const vector<int>& v, int valToSearchFor) {
  // initial search space is the whole vector
  int lo = 0, hi = v.size() - 1;

  // keep looking as long as we have a non-empty search space
  while (lo <= hi) {
    // get the mid index
    int mid = (lo + hi) / 2;
    // compare the value at that index to valToSearchFor
    if (v.at(mid) < valToSearchFor) {
      // we need to look at larger things: lo needs to change
      lo = mid + 1;
    } else if (v.at(mid) > valToSearchFor) {
      // we need to look at smaller things: hi needs to change
      hi = mid - 1;
    } else {
      // we found it! mid is the index where valToSearchFor is!
      return mid;
    }
  }

  // lo passed hi: the search space is empty :(
  return -1;
}
