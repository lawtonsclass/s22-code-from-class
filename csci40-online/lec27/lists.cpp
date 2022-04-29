#include <iostream>
#include <list>
using namespace std;

int main() {
  list<int> l;
  l.push_back(3);
  l.push_back(4);
  l.push_front(2);
  l.push_front(1);

  for (int i : l) {
    cout << i << " ";
  }
  cout << endl;

  list<int>::iterator it = l.begin();
  cout << *it << endl;
  *it = 42;
  it++;
  cout << *it << endl;
  it--;
  cout << *it << endl;

  return 0;
}
