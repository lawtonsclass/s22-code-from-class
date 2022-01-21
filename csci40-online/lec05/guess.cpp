#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(time(0));
  int n = (rand() % 100) + 1; // between 1 and 100
  int guess;

  cout << "Enter a guess: ";
  cin >> guess;
  if (guess > n) {
    cout << "Too high! Guess lower.\n";
  } else if (guess < n) {
    cout << "Too low! Guess higher.\n";
  } else {
    cout << "You got it!\n";
    exit(0); // stops the program
  }

  cout << "Enter a guess: ";
  cin >> guess;
  if (guess > n) {
    cout << "Too high! Guess lower.\n";
  } else if (guess < n) {
    cout << "Too low! Guess higher.\n";
  } else {
    cout << "You got it!\n";
    exit(0); // stops the program
  }

  cout << "Enter a guess: ";
  cin >> guess;
  if (guess > n) {
    cout << "Too high! Guess lower.\n";
  } else if (guess < n) {
    cout << "Too low! Guess higher.\n";
  } else {
    cout << "You got it!\n";
    exit(0); // stops the program
  }

  cout << "Enter a guess: ";
  cin >> guess;
  if (guess > n) {
    cout << "Too high! Guess lower.\n";
  } else if (guess < n) {
    cout << "Too low! Guess higher.\n";
  } else {
    cout << "You got it!\n";
    exit(0); // stops the program
  }

  cout << "Enter a guess: ";
  cin >> guess;
  if (guess > n) {
    cout << "Too high! Guess lower.\n";
  } else if (guess < n) {
    cout << "Too low! Guess higher.\n";
  } else {
    cout << "You got it!\n";
    exit(0); // stops the program
  }

  cout << "Enter a guess: ";
  cin >> guess;
  if (guess > n) {
    cout << "Too high! Guess lower.\n";
  } else if (guess < n) {
    cout << "Too low! Guess higher.\n";
  } else {
    cout << "You got it!\n";
    exit(0); // stops the program
  }

  cout << "Enter a guess: ";
  cin >> guess;
  if (guess > n) {
    cout << "Too high! Guess lower.\n";
  } else if (guess < n) {
    cout << "Too low! Guess higher.\n";
  } else {
    cout << "You got it!\n";
    exit(0); // stops the program
  }

  cout << "Enter a guess: ";
  cin >> guess;
  if (guess > n) {
    cout << "Too high! Guess lower.\n";
  } else if (guess < n) {
    cout << "Too low! Guess higher.\n";
  } else {
    cout << "You got it!\n";
    exit(0); // stops the program
  }

  cout << "Enter a guess: ";
  cin >> guess;
  if (guess > n) {
    cout << "Too high! Guess lower.\n";
  } else if (guess < n) {
    cout << "Too low! Guess higher.\n";
  } else {
    cout << "You got it!\n";
    exit(0); // stops the program
  }

  return 0;
}
