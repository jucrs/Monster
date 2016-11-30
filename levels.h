#ifndef LEVELS
#define LEVELS

#include "function.h"
#include "monster.h"
#include "grid.h"
#include "obstacle.h"




void initLevel1 (TGrid &grid);

void showLevel (SDL_Surface *screen, SDL_Surface *background, TGrid grid);
void mooveMonster (TGrid grid);
bool caseFree (TGrid grid, int i, int j);
#endif // LEVELS

