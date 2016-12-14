#ifndef OBSTACLE_H
#define OBSTACLE_H
#include "function.h"
#include "grid.h"
#include "levels.h"

using TTabImg = array<SDL_Surface*,20>;

void finishLevel(SDL_Surface *screen, TTabImg &tabImg, TGrid grid, bool &level, int &numLevel, bool end);

void switchObstacle (SDL_Surface *screen, TGrid &grid, TTabImg &tabImg, int &mi, int &mj, int i, int j, int nbLife, bool &level, bool &game);

void lost (SDL_Surface *screen, TTabImg &tabImg, int nbLife, bool &game, bool &level);

#endif // OBSTACLE_H

