#ifndef RECT_H
#define RECT_H

#include "point.h"

class Rect
{
  private:
  Point origin;
  Point end;

  public:
  Rect( Point* origin, Point* end );
  ~Rect();
  void setPoints( Point* origin, Point* end );
  
};

Rect::Rect( Point* origin = nullptr, Point* end = nullptr )
{
  setPoints( origin, end );
}

Rect::~Rect()
{
  
}

void Rect::setPoints( Point* origin = nullptr, Point* end = nullptr )
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


