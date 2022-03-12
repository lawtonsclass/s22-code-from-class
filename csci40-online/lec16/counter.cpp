#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Counter {
  public:
    Counter(); // default constructor
    Counter(int starting_count); // 1-parameter constructor
    void reset(int new_count);
    void inc();
    void dec();
    int getCount() const;

    Counter operator+(const Counter& other);
    void operator++();

  private:
    int count; // every Counter object has its own count

    // the default constructor for v gets called if I don't include v in the initializer list
    // vector<int> v; 
    // d must always be initialized using an initializer list
    // const double d;
};

Counter::Counter() : count(0) {
  // count = 0;

  cout << "I'm in the default constructor!\n";
}

Counter::Counter(int starting_count) : count(starting_count) {
  // count = starting_count;
  cout << "I'm in the parameterized constructor!\n";
}

void Counter::reset(int new_count) {
  count = new_count;
}

void Counter::inc() {
  count++;
}

void Counter::dec() {
  count--;
}

int Counter::getCount() const {
  return count;
}

Counter Counter::operator+(const Counter& other) {
  Counter res(count + other.count);
  return res;
}

/*
Counter operator+(const Counter& c1, const Counter& c2) {
  Counter res(c1.getCount() + c2.getCount());
  return res;
}
*/

void Counter::operator++() {
  count++;
}

// c1 < c2 --> operator<(c1, c2)
bool operator<(const Counter& c1, const Counter& c2) {
  return c1.getCount() < c2.getCount(); // compare based on counts 
}


int main() {
  Counter c; // secretly this line calls the default constructor!

  c.inc();
  c.inc();
  ++c;
  cout << c.getCount() << endl;

  c.dec();
  c.dec();
  cout << c.getCount() << endl;

  c.reset(42);
  cout << c.getCount() << endl;

  Counter d(55); // calls the 1-parameter constructor!
  ++d;
  cout << d.getCount() << endl;
  

  Counter sum = c + d; // translated into either c.operator+(d) OR operator+(c, d)
  cout << sum.getCount() << endl;

  ++sum; // translated into sum.operator++()
  cout << sum.getCount() << endl;


  vector<Counter> vc = {sum, d, c};
  sort(vc.begin(), vc.end());
  for (Counter ctr : vc) {
    cout << ctr.getCount() << " ";
  }
  cout << endl;

  return 0;
}
