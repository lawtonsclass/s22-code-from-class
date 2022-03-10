#ifndef POINT_H
#define POINT_H

// *declaration* of the Point class
class Point {
  public:
    // all accessible to the user
    void negate();
    Point add(const Point& o) const;
    void scale(double c);

    // getters
    //  const means a method can't change
    //  the vals of its member vars
    double getX() const; 
    double getY() const;
    // setters
    void setX(double d);
    void setY(double d);

    // crushed ice
    void reset();

  private:
    // cannot be accessed by the user
    double x;
    double y;
};

#endif /* end of include guard: POINT_H */
