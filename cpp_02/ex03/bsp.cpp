#include "Point.hpp"

// yay... math! So for what I understand this returns a value that tells
// us the side of line in which the point is located.
// So, if the value is negative the point is to the left of the line, and
// vice-versa. If it's 0 the point is on top of the line or vertice. This checks
// one line (AB, BC, CA, etc...) so by "rotating" the triangle we know where the
// point is
static Fixed cross(Point const a, Point const b, Point const c) {
  return (((b.getX() - a.getX()) * (c.getY() - a.getY())) -
          ((b.getY() - a.getY()) * (c.getX() - a.getX())));
}

bool bsp(Point const a, Point const b, Point const c, Point const point);
