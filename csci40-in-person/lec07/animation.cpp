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
  for (int i = 0; i < 10; i++) {
    cout << "*";
    cout.flush();
    pause(0.5);
  }
  cout << endl;

  return 0;
}
