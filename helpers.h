#ifndef HELPERS_H
#define HELPERS_H

const int DEBUG_MODE  = 1

#include <iostream>
#include <string>

// Prints out the given message if the program is in debug mode
void debug( string message )
{
  if( DEBUG_MODE )
  {
    std::cout << message << std::endl;
  }
}

#endif
