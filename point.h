#ifndef POINT_H
#define POINT_H

struct Point
{
  int x_pos = 0;
  int y_pos = 0;

  Point( int x_pos = 0, int y_pos = 0 );
  ~Point();
}

Point::Point( int x_pos = 0, int y_pos = 0 )
{
  this->x_pos = x_pos;
  this->y_pos = y_pos;
}

Point::~Point()
{

}

#endif
