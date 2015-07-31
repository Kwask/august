#ifndef RECT_H
#define RECT_H

#include "point.h"

class Rect
{
private:
  Point origin;
  Point end;

public:
  void setPoints( Point* origin, Point* end );

};

void Rect::setPoints( Point* origin = null, Point* end = null )
{
  if( origin )
  {
    this->origin = *origin;
  }
  
  if( end )
  {
    this->end = *end;
  }
}
