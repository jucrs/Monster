#ifndef EVENT_H
#define EVENT_H

#include "grid.h"
#include "levels.h"


void Event (SDL_Surface *screen,TTabImg &tabImg,bool &clic, bool &quit, TGrid &grid, int &x, int &y, int &nbLife, bool &level,bool &game, int &numLevel);

#endif // EVENT_H

