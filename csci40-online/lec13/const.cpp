#include <iostream>
#include <vector>
using namespace std;

int sumVector(const vector<int>& v) {
  int sum = 0;

  // v.at(0) = 42; // WE DON'T WANT TO BE ABLE TO DO THIS

  for (int elem : v) {
    sum += elem;
  }
  return sum;
}

int main() {
  int x = 42;
  const int y = x;

  vector<int> v = {8, 6, 7, 5, 3, 0, 9};
  cout << sumVector(v) << endl;

  return 0;
}
