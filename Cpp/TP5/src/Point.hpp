#ifndef POINT_HPP_
#define POINT_HPP_
struct Point {
  int _x;
  int _y;
  Point():_x(0),_y(0){};
  Point(int x, int y):_x(x),_y(y){};
};
#endif
