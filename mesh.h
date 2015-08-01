#ifndef RECT_H
#define RECT_H

#include <vector>
#include "point.h"

struct Mesh
{
  private:
  std::vector<Point> vetices;
  
  public:
  void render();
};

#endif
