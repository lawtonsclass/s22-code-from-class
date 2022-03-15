#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Counter {
  public:
    // constructors
    Counter(); // default constructor
    Counter(int starting_count); // parameterized constructor

    void reset(int new_count);
    void inc();
    void dec();
    int getCount() const;

    Counter operator+(const Counter& other);
    void operator++();

  private:
    int count; // the count inside the counter

    // vector<int> v;
    // const double d;
};


Counter::Counter() : count(0) /*, v(42), d(3.14)*/ {
  cout << "I'm in the default constructor!\n";
  // count = 0;
}

// if I skip a member var in the initializer list, it gets default
// constructed
Counter::Counter(int starting_count) : count(starting_count) /*, d(3.14)*/ {
  cout << "I'm in the parameterized constructor!\n";
  // count = starting_count;
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
  Counter result;
  result.count = count + other.count;
  return result;
}

void Counter::operator++() {
  count++;
}

// order Counters based on their counts
bool operator<(const Counter& a, const Counter& b) {
  return a.getCount() < b.getCount();
}

int main() {
  Counter c; // this line calls the default constructor for us!
  // c.init(); // unnecessary when we use constructors!

  c.inc();
  c.inc();
  c.inc();
  cout << c.getCount() << endl;

  c.dec();
  c.dec();
  cout << c.getCount() << endl;

  c.reset(42);
  c.inc();
  cout << c.getCount() << endl;

  ////////
  
  Counter d(33); // calls the parameterized constructor
  d.inc();
  cout << d.getCount() << endl;

  ////////
  
  Counter sum = c + d; // c++ tries to call either c.operator+(d) OR operator+(c, d)
  cout << sum.getCount() << endl;
  ++sum; // sum.operator++()
  cout << sum.getCount() << endl;

  vector<Counter> v = {sum, c, d};
  sort(v.begin(), v.end()); // sort will call operator<
  // c.operator<(d) OR operator<(c, d)
  for (Counter ctr : v) {
    cout << ctr.getCount() << " ";
  }
  cout << endl;

  return 0;
}
