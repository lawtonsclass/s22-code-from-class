#include <iostream>
#include <ctime> // for clock() and CLOCKS_PER_SEC
using namespace std;

class Stopwatch {
  public:
    void start();
    double getTimeElapsed() const; // # of seconds elapsed

  private:
    clock_t startingTime;
};

void Stopwatch::start() {
  startingTime = clock();
}

double Stopwatch::getTimeElapsed() const { // # of seconds elapsed
  clock_t currentTime = clock();
  return static_cast<double>(currentTime - startingTime) / CLOCKS_PER_SEC;
}

int main() {
  Stopwatch s;
  s.start();

  // int sum = 0;
  // for (int i = 0; i < 1000000000; i++) {
    // sum += i;
  // }

  while (true) {
    cout << '\r' << s.getTimeElapsed();
  }

  return 0;
}
