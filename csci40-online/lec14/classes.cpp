#include <iostream>
using namespace std;

class Point {
  public:
    double x;
    double y;

    void negate() {
      // when we are in here running the body of this *method*, we are
      // allowed to talk about x & y. The x & y are the current
      // object's x & y.
      x = -x;
      y = -y;
    }

    Point add(const Point& o) {
      Point result;
      result.x = x + o.x;
      result.y = y + o.y;
      return result;
    }

    void scale(double c) {
      x = x * c; 
      y = y * c; 
    }
};


int main() {
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

  return 0;
}
