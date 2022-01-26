#include <iostream>
using namespace std;

#include <chrono>
#include <thread>

// the pause function stops the program for "seconds" many seconds
// don't worry about the implementation
void pause(double seconds) {
  std::this_thread::sleep_for(std::chrono::duration<double>(seconds));
}

int main() {
  int i = 1;
  while (i <= 10) {
    cout << "*" << endl;
    pause(0.5);
    i++;
  }

  return 0;
}
