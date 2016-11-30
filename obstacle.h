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

void initBook(Obstacle &b);
void initIce (Obstacle &g);
void showBook(Obstacle &b, SDL_Surface *screen, int i, int j);
void showIce (Obstacle &g, SDL_Surface *screen, int i, int j);

#endif // OBSTACLE_H

