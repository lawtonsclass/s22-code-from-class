#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(time(0)); // "seeds" the random # generator

  cout << rand() << endl;
  cout << rand() << endl;

  cout << "Enter a number: ";
  int num;
  cin >> num;
  cout << (rand() % num) + 1 << endl; // prints a number between 1 and num

  char c1 = rand() % 128;
  char c2 = rand() % 128;
  char c3 = rand() % 128;
  cout << c1 << c2 << c3 << endl;

  return 0;
}
