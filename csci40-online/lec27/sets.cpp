#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int> s;
  s.insert(42);
  s.insert(3);
  s.insert(1);
  s.insert(2);
  cout << s.count(2) << endl;
  cout << s.count(43) << endl;

  for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}
