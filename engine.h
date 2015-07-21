#ifndef ENGINE_H
#define ENGINE_H

#include "config.h"

class Engine
{
private:
  Configuration Config; // All of the configuration settings
  unsigned int flags = 0; // Stores any raised flags

public:
  bool initialize(); // Initializes and loads variables if there are any
  bool start(); // Instantizes objects and begins the processing loop
  bool pause(); // Pauses processing
  bool stop(); // Stops processing and destroys objects
  bool destroy(); // Destroys this object
  bool shouldStop(); // Have any exit flags been raised?

  void idleLoop(); // The main game ticker, continually calls idle()
  void idle(); // Processes a single tick of the game
};

bool initialize();
{
  flags = 0;
}



#endif
