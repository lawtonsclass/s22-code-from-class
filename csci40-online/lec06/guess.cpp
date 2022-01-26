#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(time(0));
  int n = (rand() % 100) + 1; // between 1 and 100
  int guess = -1; // initialize to something not between 1 and 100

  while (guess != n) {
    cout << "Enter a guess: ";
    cin >> guess;
    if (guess > n) {
      cout << "Too high! Guess lower.\n";
    } else if (guess < n) {
      cout << "Too low! Guess higher.\n";
    } else {
      cout << "You got it!\n";
    }
  }

  return 0;
}
