#ifndef LEVELS
#define LEVELS

#include "functions.h"
#include "monster.h"
#include "grid.h"
#include "obstacle.h"




void initLevel1 (TGrid &grid);

void showLevel (Monster &m, obstacle &g, obstacle &b,SDL_Surface *screen, SDL_Surface *background, TGrid grid);
void mooveMonster (TGrid grid);
bool caseFree (TGrid grid, int i, int j);
#endif // LEVELS

