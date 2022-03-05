#include <iostream>
#include <string>
#include "point.h"
using namespace std;

void assertTrue(bool b, string description) {
  if (b) {
    cout << "PASSED: " << description << endl;
  } else {
    cout << "FAILED: " << description << endl;
  }
}

void testNegate() {
  Point p;
  p.setX(42);
  p.setY(43);
  p.negate();
  
  assertTrue(p.getX() == -42 && p.getY() == -43, "negate");
}

void testScale() {
  Point q;
  q.setX(2.5);
  q.setY(3.5);
  q.scale(2.0);
  
  assertTrue(q.getX() == 5.0 && q.getY() == 7.0, "scale");
}

void testReset() {
  Point q;
  q.setX(2.5);
  q.setY(3.5);
  q.reset();

  cout << q.getX() << " " << q.getY() << endl;
  
  assertTrue(q.getX() == 0.0 && q.getY() == 0.0, "reset");
}

int main() {
  testNegate();
  testScale();

  testReset();

  /*
  Point p, q;
  p.x = 1;
  p.y = 2;
  q.x = 3;
  q.y = 4;

  cout << "(" << p.x << ", " << p.y << ")" << endl;

  p.negate();
  Point p_plus_q = p.add(q);
  q.scale(2.0);

  cout << "(" << p.x << ", " << p.y << ")" << endl;
  cout << "(" << p_plus_q.x << ", " << p_plus_q.y << ")" << endl;
  cout << "(" << q.x << ", " << q.y << ")" << endl;
  */

  return 0;
}
