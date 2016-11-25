#ifndef LEVELS
#define LEVELS

#include "functions.h"
#include "monster.h"
#include "grid.h"




void initLevel1 (TGrid &grid);

void showLevel (Monster m,SDL_Surface *screen,SDL_Surface *background,TGrid grid);

#endif // LEVELS

