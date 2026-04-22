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

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  // basically check the cross for each edge of the triangle
  Fixed d1 = cross(a, b, point);
  Fixed d2 = cross(b, c, point);
  Fixed d3 = cross(c, a, point);

  // if any of them is 0 then the point is on top of one of the edges.
  if (d1 == Fixed(0) || d2 == Fixed(0) || d3 == Fixed(0))
    return (false);

  // check if it has either positive numbers or negative numbers
  // if atleast one is true the bool will be true.
  bool hasPos = (d1 > Fixed(0)) || (d2 > Fixed(0)) || (d3 > Fixed(0));
  bool hasNeg = (d1 < Fixed(0)) || (d2 < Fixed(0)) || (d3 < Fixed(0));

  // if both are true means mixed signs so the point is outside the triangle
  // if one is positive and the other not then the point is inside
  return (!(hasNeg && hasPos));
}
