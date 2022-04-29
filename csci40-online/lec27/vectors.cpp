#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4};
  vector<int>::iterator it = v.begin();
  // think of iterators like pointers
  cout << *it << endl;
  it++;
  cout << *it << endl;

  // iterating through v using iterators
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;


  return 0;
}
