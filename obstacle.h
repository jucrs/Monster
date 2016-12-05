#ifndef OBSTACLE_H
#define OBSTACLE_H
#include "function.h"
#include "grid.h"

using namespace std;


struct Obstacle
{

    SDL_Surface *source;
    SDL_Rect lecture;
};

void initSapin(Obstacle &b);
void initGift (Obstacle &g);
void showSapin(Obstacle &b, SDL_Surface *screen, int i, int j);
void showGift (Obstacle &g, SDL_Surface *screen, int i, int j);

#endif // OBSTACLE_H

