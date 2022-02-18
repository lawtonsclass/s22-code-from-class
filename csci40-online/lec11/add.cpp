#include <iostream>
#include <string>
using namespace std;

int add(int x, int y) {
  return x + y; // give back the sum of x and y
}

double add(double a, double b) {
  return a + b; // give back the sum of a and b
}

string add(string x, string y) {
  return x + y;
}

int main() {
  cout << add(42, 43) << endl;
  cout << add(42.5, 43.75) << endl;

  string a = "hi";
  string b = " mom";
  cout << add(a, b) << endl;
  

  return 0;
}
