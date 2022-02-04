#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v; // makes an empty vector that holds ints
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  // now v is {1, 2, 3}
  cout << v.at(0) << " ";
  cout << v.at(1) << " ";
  cout << v.at(2) << endl;

  vector<int> v2 = {1, 2, 3};
  cout << v2.at(0) << " ";
  cout << v2.at(1) << " ";
  cout << v2.at(2) << endl;

  vector<int> v3;
  while (true) {
    int n;
    cout << "Enter the next # to put into v3 (-1 to quit): ";
    cin >> n;
    if (n == -1) {
      break; // when the user types -1 we stop
    } else {
      v3.push_back(n);
    }
  }

  // let's sum all the elements of v3
  int sum = 0;
  for (int i = 0; i < v3.size(); i++) {
    sum += v3.at(i);
  }
  cout << "Sum: " << sum << endl;

  return 0;
}
