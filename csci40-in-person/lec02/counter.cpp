#include <iostream>
using namespace std;

class Counter {
  public:
    int count;

    void init() {
      count = 0;
    }

    void inc() {
      count = count + 1;
    }

    int getCount() {
      return count;
    }
};

int main() {
  Counter c;
  c.init();
  c.inc();
  c.inc();
  c.inc();
  cout << c.getCount() << endl;

  return 0;
}
