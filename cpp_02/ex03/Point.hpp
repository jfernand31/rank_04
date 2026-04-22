#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point {
private:
  const Fixed x;
  const Fixed y;

public:
  Point();
  Point(const Fixed x, const Fixed y);
  Point(const Point &other);
  Fixed getX(void) const;
  Fixed getY(void) const;

  Point &operator=(const Point &other);

  ~Point();
};

#endif
