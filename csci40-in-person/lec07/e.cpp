#include <iostream>
using namespace std;

double factorial(int x) {
  double answer = 1.0;

  for (int i = 1; i <= x; i++) {
    answer = answer * i;
  }

  return answer;
}

int main() {
  double sum;
  for (int n = 0; n <= 100; n++) {
    double currentTerm = 1.0 / factorial(n);
    sum += currentTerm;
  }
  cout << sum << endl;

  return 0;
}
