#include <iostream>
#include "engine.h"

int main()
{
  Engine Engine;
  Engine.initialize();
  
  Engine.start();

  Engine.destroy();
}
