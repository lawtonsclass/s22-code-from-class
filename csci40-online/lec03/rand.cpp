#include <iostream>
#include <cstdlib> // for rand
#include <ctime> // for time
using namespace std;

int main() {
  // seed the random number generator with the current time!
  srand(time(0));

  cout << rand() << endl; 
  cout << rand() << endl; 

  int upto;
  cout << "Enter a number: ";
  cin >> upto;
  // output a random # between 1 and upto
  cout << (rand() % upto) + 1 << endl;

  return 0;
}
