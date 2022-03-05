#include "point.h"

// method *implementations*
void Point::negate() {
  // when we are in here running the body of this *method*, we are
  // allowed to talk about x & y. The x & y are the current
  // object's x & y.
  x = -x;
  y = -y;
}

Point Point::add(const Point& o) const {
  Point result;
  result.x = x + o.x;
  result.y = y + o.y;
  return result;
}

void Point::scale(double c) {
  x = x * c; 
  y = y * c; 
}

double Point::getX() const {
  // x = 42; // no longer allowed!

  return x;
}
double Point::getY() const {
  return y;
}

void Point::setX(double d) {
  x = d;
}
void Point::setY(double d) {
  y = d;
}

// crushed ice
void Point::reset() {
  // these make brand new variables 
  // that *shadow* your member vars
  double x = 0.0;
  double y = 0.0;
}
