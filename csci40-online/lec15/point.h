#ifndef POINT_H
#define POINT_H

class Point {
  public:
    // method *declarations*
    void negate();
    Point add(const Point& o) const;
    void scale(double c);

    // getters
    double getX() const;
    double getY() const;
    // setters
    void setX(double d);
    void setY(double d);

    // crushed ice
    void reset();

  // private things are not accessible outside of the class's
  // implementation
  private:
    double x;
    double y;
};

#endif /* end of include guard: POINT_H */
