#include <iostream>
using namespace std;

// a struct creates a new type
struct Point {
  // Points have two member variable--x & y
  double x;
  double y;
};

Point add(Point a, Point b) {
  Point result;
  result.x = a.x + b.x;
  result.y = a.y + b.y;
  return result;
}

void negatePoint(Point& r) {
  r.x = -r.x;
  r.y = -r.y;
}

int main() {
  Point p;
  p.x = 2.7; 
  p.y = 3.5;

  Point q = {4.5, 7.89};

  cout << "(" << p.x << ", " << p.y << ")" << endl;
  cout << "(" << q.x << ", " << q.y << ")" << endl;

  Point p_plus_q = add(p, q);
  cout << "(" << p_plus_q.x << ", " << p_plus_q.y << ")" << endl;

  negatePoint(p);
  cout << "(" << p.x << ", " << p.y << ")" << endl;

  return 0;
}
